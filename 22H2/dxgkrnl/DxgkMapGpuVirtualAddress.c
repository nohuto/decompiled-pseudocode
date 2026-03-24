/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C01583C0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243CA0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C024A4A0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rbx
  struct _KTHREAD **v14; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v15; // rdi
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 Value; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // ebx
  struct _KEVENT *v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _EX_RUNDOWN_REF *v30; // rbx
  ULONG_PTR Count; // r8
  struct _EX_RUNDOWN_REF *v32; // rsi
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v34; // rdx
  struct _EX_RUNDOWN_REF *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct DXGTHREAD *v38; // rax
  struct DXGTHREAD *v39; // r12
  _QWORD *v40; // r9
  __int64 v41; // r12
  bool v42; // r10
  int v43; // eax
  ULONG64 v44; // rdx
  _QWORD *v45; // rcx
  unsigned int v46; // esi
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct DXGTHREAD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct DXGTHREAD *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  bool v63; // zf
  __int64 v64; // rdx
  __int64 v65; // rax
  DXGPAGINGQUEUE *v66; // rcx
  struct _KEVENT *v67; // rcx
  __int64 v68; // rcx
  unsigned __int8 v69; // bl
  __int64 v70; // r8
  unsigned __int8 v71; // bl
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // esi
  unsigned int HostProcess; // eax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  int Timeout; // [rsp+20h] [rbp-1E8h]
  bool v85; // [rsp+40h] [rbp-1C8h]
  int v86; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v87; // [rsp+50h] [rbp-1B8h]
  char v88; // [rsp+58h] [rbp-1B0h]
  DXGPAGINGQUEUE *v89; // [rsp+60h] [rbp-1A8h] BYREF
  struct DXGPAGINGQUEUE *v90; // [rsp+68h] [rbp-1A0h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+70h] [rbp-198h] BYREF
  unsigned int v92[2]; // [rsp+78h] [rbp-190h] BYREF
  __int64 v93; // [rsp+80h] [rbp-188h] BYREF
  int v94; // [rsp+88h] [rbp-180h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v95; // [rsp+90h] [rbp-178h]
  struct _KTHREAD **v96; // [rsp+98h] [rbp-170h]
  _QWORD *v97; // [rsp+A0h] [rbp-168h]
  _BYTE v98[8]; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v99[16]; // [rsp+C8h] [rbp-140h] BYREF
  DXGADAPTER *v100; // [rsp+D8h] [rbp-130h]
  char v101; // [rsp+E0h] [rbp-128h]
  __int64 v102; // [rsp+E8h] [rbp-120h]
  _BYTE v103[16]; // [rsp+108h] [rbp-100h] BYREF
  __int64 v104; // [rsp+118h] [rbp-F0h]
  __int64 v105; // [rsp+148h] [rbp-C0h]
  char v106; // [rsp+150h] [rbp-B8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v107; // [rsp+160h] [rbp-A8h] BYREF

  v86 = -1;
  v87 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v88 = 1;
    v86 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v88 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v86, 2100LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v85 = v4;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
  }
  v96 = v14;
  if ( !v14 )
  {
    v59 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v59 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v60);
    v63 = v88 == 0;
LABEL_68:
    if ( v63 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_123;
  }
  memset(&v107, 0, sizeof(v107));
  if ( v4 )
  {
    v15 = &v107;
    v95 = &v107;
    v16 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v107 = *v16;
  }
  else
  {
    v15 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v95 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v90 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v89, v15->hPagingQueue, v14, &v90, 1);
  if ( !v90 )
  {
    v65 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v65 + 24) = v15->hPagingQueue;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
    v66 = v89;
    if ( !v89 )
      goto LABEL_67;
    goto LABEL_66;
  }
  Value = v15->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v82 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v82 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v82);
    if ( v89 )
      DXGPAGINGQUEUE::ReleaseReference(v89, v83);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v83);
    if ( !v88 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_123:
    McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v86);
    return 3221225485LL;
  }
  v21 = *((_QWORD *)v90 + 2);
  v93 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v22 + 2328) >= 0x2000 || *(_BYTE *)(v22 + 2628) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v17) + 311);
  else
    v23 = 0;
  v94 = v23;
  v24 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 432) == 2 )
  {
    if ( KeReadStateEvent(v24 + 5) )
      goto LABEL_18;
    v67 = v24 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v24 + 4) )
      goto LABEL_18;
    v67 = v24 + 4;
  }
  KeWaitForSingleObject(v67, Executive, 0, 0, 0LL);
LABEL_18:
  KeEnterCriticalRegion();
  if ( !v23 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
      goto LABEL_20;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v69 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v68, &EventBlockThread, v70, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    if ( v69 )
      goto LABEL_87;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v71 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 144));
    if ( v71 )
LABEL_87:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
LABEL_88:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_20:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, v21, 0, v25, 0);
  if ( v106 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v103, 0LL);
    v27 = *(unsigned int *)(v104 + 200);
    if ( (_DWORD)v27 != 1 )
      goto LABEL_96;
  }
  if ( v101 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
    v72[3] = 275LL;
    v72[4] = 4LL;
    v72[5] = v99;
    v72[6] = 0LL;
    v72[7] = 0LL;
    WdLogEvent5_WdCriticalError(v72);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v100 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v100 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventBlockThread, v29, 72);
      KeWaitForSingleObject((char *)v100 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v100, 0LL);
  }
  v102 = 0LL;
  v101 = 1;
  if ( *(_DWORD *)(v105 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v99);
    if ( !v106 )
    {
LABEL_97:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      if ( v89 )
        DXGPAGINGQUEUE::ReleaseReference(v89, v73);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v73);
      if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v74, &EventProfilerExit, v75, v86);
      return 3221226166LL;
    }
LABEL_96:
    COREACCESS::Release((COREACCESS *)v103);
    goto LABEL_97;
  }
  v30 = 0LL;
  v91 = 0LL;
  Count = 0LL;
  v32 = 0LL;
  if ( (*(_BYTE *)&v15->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v14, (DXGALLOCATIONREFERENCE *)v92, v15->hAllocation);
    v30 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v32 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v91 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v35 = *(struct _EX_RUNDOWN_REF **)v92;
    if ( *(_QWORD *)v92 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v92 + 88LL));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v35, v34) + 311) )
    {
      v38 = DXGTHREAD::GetCurrent(v37, v36);
      v39 = v38;
      if ( v38 )
      {
        if ( *((_DWORD *)v38 + 8) )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
          v76[3] = 275LL;
          v76[4] = 38LL;
          v76[5] = *((int *)v39 + 8);
          v76[6] = 0LL;
          v76[7] = 0LL;
          WdLogEvent5_WdCriticalError(v76);
        }
      }
    }
    if ( !v30 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v77[3] = -1073741811LL;
      v77[4] = v15->hAllocation;
      v77[5] = v14;
      goto LABEL_105;
    }
    Count = v30[3].Count;
    if ( !Count && (*(_BYTE *)(v21 + 1869) & 1) == 0 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v77[3] = -1073741811LL;
      v77[4] = v30;
LABEL_105:
      WdLogEvent5_WdError(v77);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v91, v78);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v93);
      v66 = v89;
      if ( !v89 )
        goto LABEL_67;
LABEL_66:
      DXGPAGINGQUEUE::ReleaseReference(v66, v64);
LABEL_67:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v64);
      v63 = v88 == 0;
      goto LABEL_68;
    }
    if ( v30[1].Count != v21 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v77[3] = -1073741811LL;
      v77[4] = v30;
      v77[5] = v90;
      goto LABEL_105;
    }
  }
  v40 = *(_QWORD **)(v21 + 16);
  v41 = v40[2];
  v97 = v40;
  if ( *(_BYTE *)(v41 + 209) )
  {
    if ( v32 )
      v92[0] = v30[12].Count;
    else
      v92[0] = 0;
    v79 = *((_DWORD *)v90 + 7);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v14);
    v43 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v41 + 4240),
            HostProcess,
            0LL,
            v79,
            v92[0],
            v15);
  }
  else
  {
    v42 = *(_BYTE *)(v21 + 1871) || *(_DWORD *)(v21 + 432) == 2 && *(int *)(v41 + 2596) >= 2000;
    LOBYTE(Timeout) = v42;
    v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v40[80] + 8LL) + 800LL))(
            v40[81],
            *((_QWORD *)v90 + 4),
            Count,
            v15,
            Timeout,
            -2);
  }
  v46 = v43;
  if ( v43 >= 0 && v85 )
  {
    v47 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v47 = (_QWORD *)MmUserProbeAddress;
    *v47 = v15->VirtualAddress;
    v45 = (_QWORD *)(a1 + 96);
    v44 = MmUserProbeAddress;
    if ( a1 + 96 >= MmUserProbeAddress )
      v45 = (_QWORD *)MmUserProbeAddress;
    *v45 = v15->PagingFenceValue;
  }
  if ( v30 )
    ExReleaseRundownProtection(v30 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v45, v44) + 311) )
  {
    v50 = DXGTHREAD::GetCurrent(v49, v48);
    v53 = v50;
    if ( v50 )
    {
      if ( *((_DWORD *)v50 + 8) )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51);
        v81[3] = 275LL;
        v81[4] = 38LL;
        v81[5] = *((int *)v53 + 8);
        v81[6] = 0LL;
        v81[7] = 0LL;
        WdLogEvent5_WdCriticalError(v81);
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
  if ( v94 )
    ExReleasePushLockSharedEx(v21 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
  KeLeaveCriticalRegion();
  if ( v89 )
    DXGPAGINGQUEUE::ReleaseReference(v89, v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v54);
  if ( v88 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v86);
  }
  return v46;
}
