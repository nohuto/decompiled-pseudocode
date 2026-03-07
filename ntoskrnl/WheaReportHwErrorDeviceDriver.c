__int64 __fastcall WheaReportHwErrorDeviceDriver(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _OWORD *a5,
        int a6,
        const char *a7)
{
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  LODWORD(v9) = a6;
  LODWORD(v8) = 0;
  return WheaReportHwErrorDeviceDriverEx(a1, a2, a3, a4, 0LL, 0, a5, v8, v9, a7);
}
