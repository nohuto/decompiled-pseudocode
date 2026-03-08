/*
 * XREFs of ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E0968
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E09A8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01E0B88 (-TryReleaseDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::ReleaseLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 366);
  if ( v2 )
  {
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(v2, 1LL);
    ADAPTER_RENDER::TryReleaseDeviceLockForAllDevices(*((_QWORD *)this + 366), 2LL);
  }
}
