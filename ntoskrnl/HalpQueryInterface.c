/*
 * XREFs of HalpQueryInterface @ 0x140821F64
 * Callers:
 *     HalpDispatchPnp @ 0x140821D00 (HalpDispatchPnp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int16 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  unsigned int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v7 = 0;
  v8 = 0LL;
  if ( **(_DWORD **)(a1 + 64) == 192 )
    v8 = *(_QWORD *)(a1 + 64);
  if ( v8 )
  {
    v9 = *(_QWORD *)&GUID_BUS_INTERFACE_STANDARD.Data1 - *a2;
    if ( *(_QWORD *)&GUID_BUS_INTERFACE_STANDARD.Data1 == *a2 )
      v9 = *(_QWORD *)GUID_BUS_INTERFACE_STANDARD.Data4 - a2[1];
    if ( !v9 )
    {
      *a7 = 64;
      if ( a5 >= 0x40 )
      {
        *(_DWORD *)a6 = 65600;
        if ( !a4 )
          return 3221225485LL;
        *(_QWORD *)(a6 + 8) = a4;
        *(_QWORD *)(a6 + 40) = HalPnpGetDmaAdapter;
        *(_QWORD *)(a6 + 16) = xHalTimerWatchdogStop;
        *(_QWORD *)(a6 + 48) = PdcCreateWatchdogAroundClientCall;
        *(_QWORD *)(a6 + 56) = PdcCreateWatchdogAroundClientCall;
        *(_QWORD *)(a6 + 24) = xHalTimerWatchdogStop;
        *(_QWORD *)(a6 + 32) = 0LL;
        return 0LL;
      }
      return 3221225507LL;
    }
  }
  v10 = *a2 - *(_QWORD *)&GUID_ACPI_CMOS_INTERFACE_STANDARD.Data1;
  if ( *a2 == *(_QWORD *)&GUID_ACPI_CMOS_INTERFACE_STANDARD.Data1 )
    v10 = a2[1] - *(_QWORD *)GUID_ACPI_CMOS_INTERFACE_STANDARD.Data4;
  if ( !v10 )
  {
    if ( a5 >= 0x30 )
    {
      if ( (_DWORD)a4 )
        return 3221225659LL;
      *(_QWORD *)(a6 + 16) = xHalTimerWatchdogStop;
      *(_QWORD *)(a6 + 24) = xHalTimerWatchdogStop;
      *(_QWORD *)(a6 + 32) = HalpcGetCmosDataByType;
      *(_QWORD *)(a6 + 40) = HalpcSetCmosDataByType;
      *(_DWORD *)a6 = 65584;
      *a7 = 48;
      return 0LL;
    }
    *a7 = 48;
    return 3221225507LL;
  }
  v11 = *a2 - *(_QWORD *)&GUID_DMA_CACHE_COHERENCY_INTERFACE.Data1;
  if ( *a2 == *(_QWORD *)&GUID_DMA_CACHE_COHERENCY_INTERFACE.Data1 )
    v11 = a2[1] - *(_QWORD *)GUID_DMA_CACHE_COHERENCY_INTERFACE.Data4;
  if ( v11 )
    return 3221225659LL;
  *a7 = 0;
  if ( a5 < 0x28 )
  {
    return (unsigned int)-1073741789;
  }
  else if ( a3 )
  {
    *(_BYTE *)(a6 + 32) = 1;
    *(_QWORD *)(a6 + 16) = xHalTimerWatchdogStop;
    *(_QWORD *)(a6 + 24) = xHalTimerWatchdogStop;
    *(_DWORD *)a6 = 65576;
    *(_QWORD *)(a6 + 8) = 0LL;
    *a7 = 40;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v7;
}
