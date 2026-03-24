/*
 * XREFs of ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00405D8
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C0236020 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E970 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::SetVirtualGpu(DXGDEVICE *this, struct DXGK_VIRTUAL_GPU_PARAV *a2)
{
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 80));
  *((_QWORD *)this + 14) = a2;
  *((_QWORD *)this + 11) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 80, 0LL);
  KeLeaveCriticalRegion();
}
