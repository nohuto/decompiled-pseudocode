/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C0185690 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C01B1070 (DxgkQueryResourceInfo.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD490 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkGetAllocationPriority @ 0x1C02D5060 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C02D5F50 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D7690 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02D86D0 (DxgkWslQueryResourceInfoFromNtHandle.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02EC890 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C02ECD20 (DxgkGetContextSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C0332170 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033B15C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     DxgkCreateProtectedSession @ 0x1C0344700 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C034EF90 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C035B1D0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C035B4F0 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038ED10 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 136));
      KeLeaveCriticalRegion();
    }
  }
}
