__int64 __fastcall XdvIoBuildDeviceIoControlRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 (__fastcall *a11)(__int64, __int64, __int64, _QWORD, __int64, int, char, __int64, __int64, __int64))
{
  return a11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
