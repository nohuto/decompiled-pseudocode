/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D8708 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1C017B1F4 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C017B404 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B7A0 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B954 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01BC984 (rimReadSingleDigitizerToMonitorMappings.c)
 * Callees:
 *     _vsnwprintf @ 0x1C00DAA34 (_vsnwprintf.c)
 */

__int64 RtlStringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( a2 )
    *a1 = 0;
  return v5;
}
