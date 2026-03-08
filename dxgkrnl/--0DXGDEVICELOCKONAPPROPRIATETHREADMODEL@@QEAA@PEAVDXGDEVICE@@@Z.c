/*
 * XREFs of ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80
 * Callers:
 *     ??0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z @ 0x1C0051758 (--0DXGDOORBELLAPILOCKS@@QEAA@PEAVDXGHWQUEUE@@PEAJ@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0183FDC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0185A34 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01B08FC (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkReclaimAllocations @ 0x1C02D69A0 (DxgkReclaimAllocations.c)
 *     DxgkInvalidateCache @ 0x1C02D8CE0 (DxgkInvalidateCache.c)
 *     DxgkUpdateAllocationProperty @ 0x1C0332F70 (DxgkUpdateAllocationProperty.c)
 *     DxgkRender @ 0x1C0348D00 (DxgkRender.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C035AE90 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C035B6E0 (NtDxgkUpdateTrackedWorkload.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x1C0362F74 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C036DA78 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0375480 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037CAC0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038D1F0 (-VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038D700 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

DXGDEVICELOCKONAPPROPRIATETHREADMODEL *__fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this,
        struct DXGDEVICE *a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rsi
  int v5; // eax
  struct _KEVENT *v6; // rbx
  __int64 v7; // rbx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8

  *(_QWORD *)this = a2;
  v3 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *(int *)(v3 + 2552) >= 0x2000 || *(_BYTE *)(v3 + 2852) )
  {
    v4 = (_DWORD *)((char *)this + 8);
    v5 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  }
  else
  {
    v4 = (_DWORD *)((char *)this + 8);
    v5 = 0;
  }
  *v4 = v5;
  v6 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 464LL) == 2 )
  {
    if ( KeReadStateEvent(v6 + 5) )
      goto LABEL_5;
    v9 = v6 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v6 + 4) )
      goto LABEL_5;
    v9 = v6 + 4;
  }
  KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
LABEL_5:
  v7 = *(_QWORD *)this;
  if ( *v4 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, "g", v11, 40LL);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
    }
  }
  return this;
}
