/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C0332F70
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390380 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C00038F8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00256A0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C02C8650 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C038BB3C (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  const wchar_t *v6; // r9
  char CurrentThreadPreviousMode; // al
  D3DDDI_UPDATEALLOCPROPERTY *v8; // rbx
  D3DDDI_UPDATEALLOCPROPERTY *v9; // rax
  unsigned int PropertyMaskValue; // eax
  struct DXGPAGINGQUEUE *v11; // r13
  DXGPAGINGQUEUE *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // r8
  ADAPTER_RENDER *v20; // r9
  _QWORD *v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rsi
  const wchar_t *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // sf
  int updated; // eax
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // r8
  bool v37; // [rsp+50h] [rbp-168h]
  int v38; // [rsp+58h] [rbp-160h] BYREF
  __int64 v39; // [rsp+60h] [rbp-158h]
  char v40; // [rsp+68h] [rbp-150h]
  struct DXGALLOCATION *v41; // [rsp+70h] [rbp-148h] BYREF
  DXGPAGINGQUEUE *v42; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v43[16]; // [rsp+80h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v44[2]; // [rsp+90h] [rbp-128h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v45; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v46[4]; // [rsp+B8h] [rbp-100h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v47; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v48[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2132);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v6 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_47;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v37 = CurrentThreadPreviousMode == 1;
  memset(&v47, 0, sizeof(v47));
  v8 = &v47;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v9 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (D3DDDI_UPDATEALLOCPROPERTY *)MmUserProbeAddress;
    v47 = *v9;
  }
  else
  {
    v8 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v8->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v6 = L"Invalid use of reserve, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( !PropertyMaskValue )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v6 = L"Invalid use of property mask. Must set at least one property, returning 0x%I64x";
    goto LABEL_7;
  }
  v44[0] = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v42, v8->hPagingQueue, Current, v44, 1);
  v11 = v44[0];
  if ( !v44[0] )
  {
    WdLogSingleEntry2(2LL, v8->hPagingQueue, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hPagingQueue (0x%I64x) specified, returning 0x%I64x",
      v8->hPagingQueue,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  v13 = *((_QWORD *)v44[0] + 2);
  v44[1] = (struct DXGPAGINGQUEUE *)v13;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
    (struct DXGDEVICE *)v13);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, v13, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  if ( v15 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    if ( v42 )
      DXGPAGINGQUEUE::ReleaseReference(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v38);
    return (unsigned int)v15;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v41, v8->hAllocation);
  if ( !v41 )
  {
    WdLogSingleEntry1(2LL, v8->hAllocation);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAllocation 0x%x",
      v8->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
LABEL_20:
    v12 = v42;
    if ( !v42 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v19 = *((_QWORD *)v41 + 1);
  if ( v19 != v13 )
  {
    WdLogSingleEntry2(2LL, v13, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between paging queue device 0x%p and allocation device 0x%p",
      v13,
      *((_QWORD *)v41 + 1),
      0LL,
      0LL,
      0LL);
    goto LABEL_31;
  }
  v20 = *(ADAPTER_RENDER **)(v13 + 16);
  v21 = (_QWORD *)*((_QWORD *)v20 + 2);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21[27] + 64LL) + 40LL) + 28LL) < 0x6002u )
  {
    v22 = 1108LL;
    v23 = -1073741637LL;
    WdLogSingleEntry2(2LL, -1073741637LL, 1108LL);
    v24 = L"Driver version is less then WDDM 2.1 RS1.3, on 0x%I64x";
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v23, v22, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    if ( v42 )
      DXGPAGINGQUEUE::ReleaseReference(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( !v40 )
      return (unsigned int)v23;
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_68:
    if ( v27 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v38);
    return (unsigned int)v23;
  }
  if ( (*(_BYTE *)(v13 + 1901) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v21 + 559),
                Current,
                v11,
                v41,
                v8);
    goto LABEL_59;
  }
  if ( !v21[136] )
  {
    v22 = 1120LL;
    v23 = -1073741822LL;
    WdLogSingleEntry2(2LL, -1073741822LL, 1120LL);
    v24 = L"KMD has not exposed ValidateUpdateAllocationProperty, it is null, returning 0x%I64x";
    goto LABEL_36;
  }
  v29 = *((_QWORD *)v41 + 3);
  if ( !v29 )
  {
    WdLogSingleEntry1(2LL, v41);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGALLOCATION 0x%I64x has NULL VIDMM_ALLOC assigned to it",
      (__int64)v41,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    v12 = v42;
    if ( !v42 )
    {
LABEL_47:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v38);
      }
      return 3221225485LL;
    }
LABEL_46:
    DXGPAGINGQUEUE::ReleaseReference(v12);
    goto LABEL_47;
  }
  v45.hAllocation = (HANDLE)*((_QWORD *)v41 + 4);
  v45.Flags.Value = v8->Flags.Value;
  v45.PreferredSegment.Value = v8->PreferredSegment.Value;
  v45.SupportedSegmentSet = v8->SupportedSegmentSet;
  v45.PropertyMaskValue = v8->PropertyMaskValue;
  v32 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v20, &v45, (__int64)v21);
  v33 = v32;
  if ( v32 >= 0 )
  {
    v46[2] = v8->Flags.0;
    v46[1] = v8->PreferredSegment.0;
    v46[0] = v8->SupportedSegmentSet;
    v46[3] = v8->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 200LL))(
                *(_QWORD *)(*(_QWORD *)(v13 + 16) + 768LL),
                *((_QWORD *)v11 + 4),
                v29,
                v46,
                &v8->PagingFenceValue);
LABEL_59:
    LODWORD(v23) = updated;
    if ( updated >= 0 && v37 )
    {
      v36 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v36 = (_QWORD *)MmUserProbeAddress;
      *v36 = v8->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    if ( v42 )
      DXGPAGINGQUEUE::ReleaseReference(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( !v40 )
      return (unsigned int)v23;
    v27 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_68;
  }
  WdLogSingleEntry1(2LL, v32);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"KMD DDI ValidateUpdateAllocationProperty failed with status, 0x%I64x",
    v33,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
  if ( v42 )
    DXGPAGINGQUEUE::ReleaseReference(v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v38);
  return (unsigned int)v33;
}
