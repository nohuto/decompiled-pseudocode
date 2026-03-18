/*
 * XREFs of ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00407DC
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C01A97E4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02B6D10 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C1AEC (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(ADAPTER_RENDER *this)
{
  char *v2; // rdi

  v2 = (char *)this + 1800;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  ADAPTER_RENDER::ReleaseStablePowerReference(this);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
