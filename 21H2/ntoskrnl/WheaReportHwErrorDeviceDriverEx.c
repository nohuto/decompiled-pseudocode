/*
 * XREFs of WheaReportHwErrorDeviceDriverEx @ 0x1405BC3E0
 * Callers:
 *     WheaReportHwErrorDeviceDriver @ 0x14095D420 (WheaReportHwErrorDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1405BBEE0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaCreateHwErrorReportDeviceDriver @ 0x1405BBFE0 (WheaCreateHwErrorReportDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1405BC010 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1405BC040 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x1405BC170 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BC1B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 */

__int64 __fastcall WheaReportHwErrorDeviceDriverEx(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        void *Src,
        unsigned int Size,
        _OWORD *a7,
        __int64 a8,
        __int64 a9,
        const char *pszSrc)
{
  size_t v10; // rsi
  __int64 HwErrorReportDeviceDriver; // rdi
  int v13; // ebx
  void *v15[2]; // [rsp+28h] [rbp-30h] BYREF
  NTSTRSAFE_PSTR pszDest[2]; // [rsp+38h] [rbp-20h]
  _BYTE *v17; // [rsp+48h] [rbp-10h]

  v10 = a4;
  *(_OWORD *)v15 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v17 = 0LL;
  HwErrorReportDeviceDriver = WheaCreateHwErrorReportDeviceDriver(a1);
  if ( HwErrorReportDeviceDriver )
  {
    WheaHwErrorReportSetSeverityDeviceDriver();
    WheaHwErrorReportGetLogDataBufferDeviceDriver();
    memmove(0LL, Src, Size);
    v13 = WheaAddHwErrorReportSectionDeviceDriver(HwErrorReportDeviceDriver, v10, (__int64)v15);
    if ( v13 >= 0 )
    {
      memmove(*(void **)((char *)v15 + 4), a3, v10);
      *(_OWORD *)pszDest[0] = *a7;
      *v17 = 1;
      if ( pszSrc )
        RtlStringCchCopyA(pszDest[1], 0x14uLL, pszSrc);
      return (unsigned int)WheaHwErrorReportSubmitDeviceDriver(HwErrorReportDeviceDriver);
    }
    else
    {
      WheaHwErrorReportAbandonDeviceDriver();
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
