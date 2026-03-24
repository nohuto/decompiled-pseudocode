/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C027D090
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250F80 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C0220DF4 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C024DFF0 (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  char CurrentThreadPreviousMode; // al
  D3DDDI_UPDATEALLOCPROPERTY *v14; // rdi
  D3DDDI_UPDATEALLOCPROPERTY *v15; // rax
  unsigned int PropertyMaskValue; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPAGINGQUEUE *v19; // r13
  __int64 v20; // rax
  DXGPAGINGQUEUE *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r9
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  ADAPTER_RENDER *v33; // r9
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int updated; // eax
  ULONG64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned int v59; // esi
  _QWORD *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  bool v64; // [rsp+30h] [rbp-168h]
  int v65; // [rsp+38h] [rbp-160h] BYREF
  __int64 v66; // [rsp+40h] [rbp-158h]
  char v67; // [rsp+48h] [rbp-150h]
  struct DXGALLOCATION *v68; // [rsp+50h] [rbp-148h] BYREF
  DXGPAGINGQUEUE *v69; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v70[16]; // [rsp+60h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v71[2]; // [rsp+70h] [rbp-128h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v72; // [rsp+80h] [rbp-118h] BYREF
  _DWORD v73[4]; // [rsp+98h] [rbp-100h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v74; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE v75[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v65 = -1;
  v66 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2132LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
    goto LABEL_6;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v64 = CurrentThreadPreviousMode == 1;
  v9 = 0LL;
  memset(&v74, 0, sizeof(v74));
  v14 = &v74;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v9 = MmUserProbeAddress;
    v15 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = (D3DDDI_UPDATEALLOCPROPERTY *)MmUserProbeAddress;
    v74 = *v15;
  }
  else
  {
    v14 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v14->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 || !PropertyMaskValue )
  {
LABEL_6:
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_46;
  }
  v71[0] = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v69, v14->hPagingQueue, Current, v71, 1);
  v19 = v71[0];
  if ( !v71[0] )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = v14->hPagingQueue;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    goto LABEL_17;
  }
  v22 = *((_QWORD *)v71[0] + 2);
  v71[1] = (struct DXGPAGINGQUEUE *)v22;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70,
    (struct DXGDEVICE *)v22);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, v22, 0, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v25);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v65);
    return (unsigned int)v24;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v68, v14->hAllocation);
  if ( !v68 )
  {
    v31 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v31 + 24) = v14->hAllocation;
LABEL_28:
    WdLogEvent5_WdError(v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v32);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
LABEL_17:
    v21 = v69;
    if ( !v69 )
      goto LABEL_46;
    goto LABEL_45;
  }
  if ( *((_QWORD *)v68 + 1) != v22 )
  {
    v31 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v31 + 24) = v22;
    *(_QWORD *)(v31 + 32) = *((_QWORD *)v68 + 1);
    goto LABEL_28;
  }
  v33 = *(ADAPTER_RENDER **)(v22 + 16);
  v34 = *((_QWORD *)v33 + 2);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 216) + 64LL);
  v36 = *(_QWORD *)(v35 + 40);
  if ( *(_DWORD *)(v36 + 28) < 0x6002u )
  {
    v37 = WdLogNewEntry5_WdError(v36, v35);
    v38 = -1073741637LL;
    *(_QWORD *)(v37 + 32) = 1106LL;
LABEL_33:
    *(_QWORD *)(v37 + 24) = v38;
    WdLogEvent5_WdError(v37);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v39);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v40);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v65);
    return (unsigned int)v38;
  }
  if ( (*(_BYTE *)(v22 + 1869) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (struct _KTHREAD **)(v34 + 4240),
                (const struct DXGPROCESS *)Current,
                v19,
                v68,
                v14);
    goto LABEL_58;
  }
  if ( !*(_QWORD *)(v34 + 1000) )
  {
    v37 = WdLogNewEntry5_WdError(v36, v35);
    v38 = -1073741822LL;
    *(_QWORD *)(v37 + 32) = 1118LL;
    goto LABEL_33;
  }
  v45 = *((_QWORD *)v68 + 3);
  if ( !v45 )
  {
    v46 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v46 + 24) = v68;
    WdLogEvent5_WdError(v46);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v47);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    v21 = v69;
    if ( !v69 )
    {
LABEL_46:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v12);
      if ( v67 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v65);
      }
      return 3221225485LL;
    }
LABEL_45:
    DXGPAGINGQUEUE::ReleaseReference(v21, v12);
    goto LABEL_46;
  }
  v72.hAllocation = (HANDLE)*((_QWORD *)v68 + 4);
  v72.Flags.Value = v14->Flags.Value;
  v72.PreferredSegment.Value = v14->PreferredSegment.Value;
  v72.SupportedSegmentSet = v14->SupportedSegmentSet;
  v72.PropertyMaskValue = v14->PropertyMaskValue;
  v50 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v33, &v72, v34);
  v53 = v50;
  if ( v50 >= 0 )
  {
    v73[2] = v14->Flags.0;
    v73[1] = v14->PreferredSegment.0;
    v73[0] = v14->SupportedSegmentSet;
    v73[3] = v14->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 216LL))(
                *(_QWORD *)(*(_QWORD *)(v22 + 16) + 648LL),
                *((_QWORD *)v19 + 4),
                v45,
                v73,
                &v14->PagingFenceValue);
LABEL_58:
    v59 = updated;
    if ( updated >= 0 && v64 )
    {
      v60 = (_QWORD *)(a1 + 24);
      v44 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v60 = (_QWORD *)MmUserProbeAddress;
      *v60 = v14->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
    if ( v69 )
      DXGPAGINGQUEUE::ReleaseReference(v69, v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v61);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v65);
    return v59;
  }
  v54 = WdLogNewEntry5_WdError(v52, v51);
  *(_QWORD *)(v54 + 24) = v53;
  WdLogEvent5_WdError(v54);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v68, v55);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
  if ( v69 )
    DXGPAGINGQUEUE::ReleaseReference(v69, v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v56);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v65);
  return (unsigned int)v53;
}
