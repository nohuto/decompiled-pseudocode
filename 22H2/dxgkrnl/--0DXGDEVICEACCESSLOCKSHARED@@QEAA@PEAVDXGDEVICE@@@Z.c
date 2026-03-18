/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0015A34
 * Callers:
 *     DxgkQueryResourceInfo @ 0x1C019EA30 (DxgkQueryResourceInfo.c)
 *     DxgkGetAllocationPriority @ 0x1C02D9DF0 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C02DACE0 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02DC420 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02DD460 (DxgkWslQueryResourceInfoFromNtHandle.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02F16C0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C02F1B50 (DxgkGetContextSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C0336BB0 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033FB9C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     DxgkCreateProtectedSession @ 0x1C0349140 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0353A20 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C035FC60 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C035FF80 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0393580 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0015A60 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire(this);
  return this;
}
