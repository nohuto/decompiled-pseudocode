/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x140222030
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiComputePxeWalkAction @ 0x140223D30 (MiComputePxeWalkAction.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1403354D0 (MiReleaseSystemCacheView.c)
 *     MmHardFaultBytesRequired @ 0x1406A7A10 (MmHardFaultBytesRequired.c)
 *     MmFreeSystemCacheReserveView @ 0x140A2DC00 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x21FFFFFFFFF0LL);
  if ( v1 )
    return v1 + 40 * ((a1 >> 18) & 7);
  else
    return 0LL;
}
