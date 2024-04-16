def remove_between(input_str):
    plus_pos = input_str.find('+')
    at_pos = input_str.find('@')

    if plus_pos != -1 and plus_pos < at_pos:
        return input_str[:plus_pos] + input_str[at_pos:]
    else:
        return input_str

def main():
    unfiltered = input()

    output = remove_between(unfiltered)

    print(output)

if __name__ == "__main__":
    main()
