/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0022784
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00D7164 (DrvAddMirrorDriversToRemoteList.c)
 * Callees:
 *     _vsnwprintf @ 0x1C00DAA34 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
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
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
