/*
 * XREFs of UsbhHandleOvercurrent @ 0x1C004C3B4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 *     UsbhWaitConnect @ 0x1C0019D60 (UsbhWaitConnect.c)
 *     UsbhHandleSuspend @ 0x1C001B878 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x1C001EDD0 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C004BE8C (UsbhEnumerate2.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhCancelEnumeration @ 0x1C001EB50 (UsbhCancelEnumeration.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C004E2D8 (Usbh_OvercurrentRefHubBusy.c)
 */

__int64 __fastcall UsbhHandleOvercurrent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  const void *v10; // r9

  v8 = FdoExt(a1);
  if ( (*(_WORD *)(a4 + 420) & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && PdoExt(a5)[280] == 101 )
    {
      Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
      UsbhException(a1, *(_WORD *)(a4 + 4), 0x73u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2868, 0);
      a2 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      UsbhCancelEnumeration(a1, a2, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        Log(a1, 1024, 1884247634, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Bu, v10, 0xB70u, 0, 0, usbfile_busfunc_c, 2907, 0);
        a2 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 6u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2918, 0);
      }
      else
      {
        LOBYTE(v9) = 1;
        Usbh_OvercurrentRefHubBusy(a1, a4, v9);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Cu, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2893, 0);
        return 4;
      }
    }
  }
  else
  {
    UsbhException(
      a1,
      *(_WORD *)(a4 + 4),
      ((*(_WORD *)(a4 + 420) & 8) != 0) + 105,
      (const void *)a4,
      0xB70u,
      0,
      0,
      usbfile_busfunc_c,
      (*(_WORD *)(a4 + 420) & 8) != 0 ? 2843 : 2831,
      0);
  }
  return a2;
}
