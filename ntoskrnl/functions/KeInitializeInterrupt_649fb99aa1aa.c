__int64 (__fastcall *__fastcall KeInitializeInterrupt(
        _DWORD *a1,
        __int64 (__fastcall *a2)(),
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        int a12))(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16)
{
  int v13; // [rsp+68h] [rbp-20h]

  return KeInitializeInterruptEx(a1, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11, a12, v13, 0, 0LL);
}
