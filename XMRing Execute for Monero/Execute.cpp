#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hprevInstance, PWSTR pCmdLine, int CmdShow) {

    ShellExecute(
    NULL,
    L"runas", // run as administrator
    L"cmd.exe",
    L"/K cd.. & cd.. & cd C:\\Users\\gomer\\source\\repos\\xmrig\\build\\Release & xmrig.exe --donate-level 3 --cuda -o monerohash.com:9999 -u 43DR744kMv8W9Fwzd5eXkCDvUq9pSKTStJV2NzECnJt4TyWHxLtu3kZi86Dii5YkjBEC7tDoyn6PwfX31VayAPccCj2U7Rj -k --tls",
    NULL,
    SW_SHOWNORMAL
    );
}