function removeBetween(inputStr) {
    const plusPos = inputStr.indexOf('+');
    const atPos = inputStr.indexOf('@');

    if (plusPos !== -1 && plusPos < atPos) {
        return inputStr.substring(0, plusPos) + inputStr.substring(atPos);
    } else {
        return inputStr;
    }
}

function main() {
    const unfiltered = prompt("Enter input:");

    const output = removeBetween(unfiltered);

    console.log(output);
}

main();
