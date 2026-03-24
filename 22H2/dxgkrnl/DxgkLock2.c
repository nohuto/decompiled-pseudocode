/*
 * XREFs of DxgkLock2 @ 0x1C010BD70
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02432C0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0249D50 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024DD9C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C02757D0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
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
  struct _D3DKMT_LOCK2 *v15; // r13
  struct _D3DKMT_LOCK2 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rdi
  __int64 v20; // rax
  int v21; // ebx
  struct _KEVENT *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGALLOCATION *v31; // rbx
  _QWORD *v32; // rdx
  _QWORD *v33; // r8
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rax
  struct DXGDEVICE *v37; // rdi
  int v38; // eax
  __int64 pData; // rdx
  unsigned int v40; // r12d
  _QWORD *v41; // rcx
  struct DXGALLOCATION *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rbx
  void *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int *ThreadProperty; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  PVOID v72; // rcx
  __int64 v73; // rcx
  unsigned __int8 v74; // bl
  __int64 v75; // r8
  unsigned __int8 v76; // bl
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdx
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdx
  int v90; // r11d
  int v91; // r11d
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rdx
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v101; // rax
  unsigned int v102; // [rsp+28h] [rbp-180h]
  unsigned int v103; // [rsp+30h] [rbp-178h]
  bool v104; // [rsp+40h] [rbp-168h]
  struct DXGDEVICE *v105; // [rsp+48h] [rbp-160h] BYREF
  struct DXGALLOCATION *v106; // [rsp+50h] [rbp-158h] BYREF
  int v107; // [rsp+58h] [rbp-150h] BYREF
  __int64 v108; // [rsp+60h] [rbp-148h]
  char v109; // [rsp+68h] [rbp-140h]
  struct DXGDEVICE *v110[2]; // [rsp+70h] [rbp-138h] BYREF
  PVOID Object; // [rsp+80h] [rbp-128h]
  struct DXGDEVICE *v112; // [rsp+88h] [rbp-120h] BYREF
  int v113; // [rsp+90h] [rbp-118h]
  __int64 v114; // [rsp+98h] [rbp-110h]
  struct _KTHREAD **v115; // [rsp+A0h] [rbp-108h]
  struct _D3DKMT_LOCK2 *v116; // [rsp+A8h] [rbp-100h]
  ULONG64 v117; // [rsp+B0h] [rbp-F8h]
  struct _D3DKMT_LOCK2 v118; // [rsp+B8h] [rbp-F0h] BYREF
  _BYTE v119[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v120[16]; // [rsp+D8h] [rbp-D0h] BYREF
  DXGADAPTER *v121; // [rsp+E8h] [rbp-C0h]
  char v122; // [rsp+F0h] [rbp-B8h]
  __int64 v123; // [rsp+F8h] [rbp-B0h]
  _BYTE v124[16]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v125; // [rsp+128h] [rbp-80h]
  __int64 v126; // [rsp+158h] [rbp-50h]
  char v127; // [rsp+160h] [rbp-48h]

  v117 = a1;
  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v104 = v3;
  v107 = -1;
  v108 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v109 = 1;
    v107 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v4, 2103);
  }
  else
  {
    v109 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v107, 2103LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
  }
  v115 = v14;
  if ( !v14 )
  {
    v68 = WdLogNewEntry5_WdError(v12, v11);
    v40 = -1073741811;
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v69);
    if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v40;
    goto LABEL_151;
  }
  memset(&v118, 0, sizeof(v118));
  v15 = &v118;
  v116 = &v118;
  if ( v3 )
  {
    v16 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v118 = *v16;
  }
  else
  {
    v15 = (struct _D3DKMT_LOCK2 *)a1;
    v116 = (struct _D3DKMT_LOCK2 *)a1;
  }
  v110[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v105, v15->hDevice, v14, v110);
  v19 = v110[0];
  if ( !v110[0] )
  {
    v70 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v70 + 24) = v15->hDevice;
    v40 = -1073741811;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v70);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v71);
    if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v40;
    goto LABEL_151;
  }
  v20 = *(_QWORD *)(*((_QWORD *)v110[0] + 2) + 16LL);
  v114 = v20;
  v110[1] = (struct DXGDEVICE *)v20;
  v112 = v110[0];
  if ( *(int *)(v20 + 2328) >= 0x2000 || *(_BYTE *)(v20 + 2628) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 311);
  else
    v21 = 0;
  v113 = v21;
  v22 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 108) == 2 )
  {
    Object = &v22[5];
    if ( KeReadStateEvent(v22 + 5) )
      goto LABEL_16;
    v72 = Object;
  }
  else
  {
    Object = &v22[4];
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_16;
    v72 = Object;
  }
  KeWaitForSingleObject(v72, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 144, 0LL) )
      goto LABEL_18;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v76 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 144));
    if ( v76 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 0) )
      goto LABEL_18;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL));
    v74 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v73, &EventBlockThread, v75, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 17), 1u);
    if ( v74 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
  }
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, (__int64)v19, 0, v23, 0);
  if ( v127 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v124, 0LL);
    v25 = *(unsigned int *)(v125 + 200);
    if ( (_DWORD)v25 != 1 )
      goto LABEL_102;
  }
  if ( v122 )
  {
    v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v77[3] = 275LL;
    v77[4] = 4LL;
    v77[5] = v120;
    v77[6] = 0LL;
    v77[7] = 0LL;
    WdLogEvent5_WdCriticalError(v77);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v121, 0LL);
  }
  v123 = 0LL;
  v122 = 1;
  if ( *(_DWORD *)(v126 + 576) == 1 )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v14, (DXGALLOCATIONREFERENCE *)&v106, v15->hAllocation);
    v31 = v106;
    if ( v106 )
    {
      v32 = (_QWORD *)*((_QWORD *)v106 + 1);
      v33 = (_QWORD *)*((_QWORD *)v19 + 2);
      v34 = v33[2];
      if ( *(_QWORD *)(v32[2] + 16LL) == v34 )
      {
        v35 = *(unsigned __int8 *)(v114 + 209);
        if ( (_BYTE)v35 || *((_QWORD *)v106 + 3) )
        {
          v36 = *((_QWORD *)v106 + 5);
          if ( v36 )
          {
            v90 = *(_DWORD *)(v36 + 4);
            if ( (v90 & 1) != 0 && (v90 & 2) == 0 )
            {
              v91 = *(_DWORD *)(*(_QWORD *)(v36 + 56) + 12LL);
              if ( (v91 & 0x200) == 0 && (v91 & 0x400) == 0 )
              {
                v92 = *(_DWORD *)(v34 + 348);
                if ( (v92 & 0x10) == 0 && (v92 & 8) == 0 && (*(_DWORD *)(v34 + 2060) & 0x80u) == 0 )
                {
                  v93 = WdLogNewEntry5_WdWarning(v35, v32, v33);
                  *(struct DXGDEVICE **)(v93 + 24) = v110[0];
                  *(_QWORD *)(v93 + 32) = v106;
                  v40 = -1073741811;
                  *(_QWORD *)(v93 + 40) = -1073741811LL;
                  WdLogEvent5_WdWarning(v93);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v106, v94);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
                  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
                  if ( v105
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
                  }
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v95);
                  if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                    return v40;
                  goto LABEL_151;
                }
              }
            }
          }
          v37 = v110[0];
          if ( (_BYTE)v35 )
          {
            v38 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v114 + 4240),
                    (struct DXGPROCESS *)v14,
                    v110[0],
                    v15,
                    0,
                    v102,
                    v103);
          }
          else
          {
            if ( v32 != (_QWORD *)v110[0] )
            {
              v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v32, v33);
              v96[3] = v31;
              v96[4] = v37;
              v96[5] = *((_QWORD *)v31 + 1);
              v40 = -1073741811;
              v96[6] = -1073741811LL;
              WdLogEvent5_WdWarning(v96);
              goto LABEL_38;
            }
            v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, PVOID *))(*(_QWORD *)(v33[80] + 8LL) + 816LL))(
                    v33[81],
                    *((_QWORD *)v106 + 3),
                    0LL,
                    &v15->pData);
          }
          v40 = v38;
          if ( v38 >= 0 && v104 )
          {
            pData = (__int64)v15->pData;
            v41 = (_QWORD *)(a1 + 16);
            if ( a1 + 16 >= MmUserProbeAddress )
              v41 = (_QWORD *)MmUserProbeAddress;
            *v41 = pData;
          }
LABEL_38:
          v42 = v106;
          if ( v106 )
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)v106 + 11);
          if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v42, pData) + 311) )
          {
LABEL_57:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
            if ( v113 )
              ExReleasePushLockSharedEx((char *)v37 + 144, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v37 + 17));
            KeLeaveCriticalRegion();
            if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v63);
            if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
              return v40;
            goto LABEL_151;
          }
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v97 = WdLogNewEntry5_WdAssertion(v44, v43);
            *(_QWORD *)(v97 + 24) = 507LL;
            WdLogEvent5_WdAssertion(v97);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v44, v43);
          v51 = PsGetCurrentProcess(v48, v47, v49, v50);
          v52 = PsGetProcessDxgProcess(v51);
          if ( !CurrentProcessSessionId )
            goto LABEL_145;
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
            goto LABEL_145;
          if ( !v52 )
            goto LABEL_145;
          v53 = *(void **)(v52 + 88);
          if ( !v53 || v53 == &gDxgkWin32kEngInterface )
            goto LABEL_145;
          v54 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v98 = PsGetCurrentProcess(v56, v55, v57, v58),
                ProcessSessionId = PsGetProcessSessionIdEx(v98),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v54 = *ThreadWin32Thread;
          }
          if ( v54 )
          {
            ThreadProperty = *(int **)(v54 + 80);
          }
          else
          {
LABEL_145:
            ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
            if ( !ThreadProperty )
              ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
            if ( !ThreadProperty )
              goto LABEL_56;
            ObfDereferenceObject(ThreadProperty);
          }
          if ( ThreadProperty && ThreadProperty[8] )
          {
            v101 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60);
            v101[3] = 275LL;
            v101[4] = 38LL;
            v101[5] = ThreadProperty[8];
            v101[6] = 0LL;
            v101[7] = 0LL;
            WdLogEvent5_WdCriticalError(v101);
          }
LABEL_56:
          v37 = v110[0];
          goto LABEL_57;
        }
        v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v32, v33);
        v87[3] = v15->hAllocation;
        v87[4] = v106;
        v40 = -1073741811;
        v87[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v87);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v106, v88);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
        if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v89);
        if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return v40;
      }
      else
      {
        v84 = WdLogNewEntry5_WdWarning(v29, v32, v33);
        *(struct DXGDEVICE **)(v84 + 24) = v110[0];
        *(_QWORD *)(v84 + 32) = v106;
        v40 = -1073741811;
        *(_QWORD *)(v84 + 40) = -1073741811LL;
        WdLogEvent5_WdWarning(v84);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v106, v85);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
        if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v86);
        if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return v40;
      }
    }
    else
    {
      v81 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v81 + 24) = v15->hAllocation;
      v40 = -1073741811;
      *(_QWORD *)(v81 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v81);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v106, v82);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
      if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v83);
      if ( !v109 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return v40;
    }
LABEL_151:
    McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v107);
    return v40;
  }
  COREACCESS::Release((COREACCESS *)v120);
  if ( v127 )
LABEL_102:
    COREACCESS::Release((COREACCESS *)v124);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v112);
  if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107, v78);
  if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v79, &EventProfilerExit, v80, v107);
  return 3221226166LL;
}
