__int64 __fastcall CD2DFactory::GenerateGradientPixels(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, int, int, int, _DWORD, int, __int64, int))(**(&g_DeviceManager + 1) + 40LL))(
           *(&g_DeviceManager + 1),
           a2,
           a3,
           a4,
           1,
           a6,
           1,
           a8,
           0,
           a10,
           a11,
           a12);
}
