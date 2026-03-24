/*
 * XREFs of DxgkUnlock2 @ 0x1C010C350
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250E90 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C00020A0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
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
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024DD9C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0275940 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkUnlock2(_D3DKMT_UNLOCK2 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdi
  struct _KTHREAD **v14; // r14
  _D3DKMT_UNLOCK2 *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  int v20; // edi
  struct _KEVENT *v21; // r15
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGALLOCATION *v31; // r14
  DXGDEVICE *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  DXGDEVICE *v35; // rdi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rsi
  unsigned int v41; // r14d
  struct DXGALLOCATION *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdi
  void *v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  int *ThreadProperty; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int v67; // r15d
  struct DXGTHREAD *Current; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  bool v73; // zf
  __int64 v74; // rax
  __int64 v75; // rdx
  struct _KEVENT *v76; // rcx
  __int64 v77; // rcx
  unsigned __int8 v78; // di
  __int64 v79; // r8
  unsigned __int8 v80; // di
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // edi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // r15d
  __int64 v107; // r13
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  int v111; // eax
  _QWORD *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v117; // rax
  struct DXGDEVICE *v118; // [rsp+30h] [rbp-128h] BYREF
  int v119; // [rsp+38h] [rbp-120h] BYREF
  __int64 v120; // [rsp+40h] [rbp-118h]
  char v121; // [rsp+48h] [rbp-110h]
  _D3DKMT_UNLOCK2 v122; // [rsp+50h] [rbp-108h] BYREF
  struct DXGALLOCATION *v123; // [rsp+58h] [rbp-100h] BYREF
  DXGDEVICE *v124; // [rsp+60h] [rbp-F8h] BYREF
  DXGDEVICE *v125; // [rsp+68h] [rbp-F0h] BYREF
  int v126; // [rsp+70h] [rbp-E8h]
  _BYTE v127[8]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v128[16]; // [rsp+88h] [rbp-D0h] BYREF
  DXGADAPTER *v129; // [rsp+98h] [rbp-C0h]
  char v130; // [rsp+A0h] [rbp-B8h]
  __int64 v131; // [rsp+A8h] [rbp-B0h]
  _BYTE v132[16]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-80h]
  __int64 v134; // [rsp+108h] [rbp-50h]
  char v135; // [rsp+110h] [rbp-48h]

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v119 = -1;
  v120 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v121 = 1;
    v119 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2104);
  }
  else
  {
    v121 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v119, 2104LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
    if ( !v13 )
    {
      v69 = WdLogNewEntry5_WdError(v12, v11);
      v41 = -1073741811;
      *(_QWORD *)(v69 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v69);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v70);
      v73 = v121 == 0;
LABEL_121:
      if ( v73 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return v41;
      goto LABEL_73;
    }
  }
  v122 = 0LL;
  v15 = &v122;
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_UNLOCK2 *)MmUserProbeAddress;
    v122 = *a1;
  }
  else
  {
    v15 = a1;
  }
  v124 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v118, v15->hDevice, v14, &v124);
  v18 = v124;
  if ( !v124 )
  {
    v74 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v74 + 24) = v15->hDevice;
    v41 = -1073741811;
    *(_QWORD *)(v74 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v74);
    if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v75);
    if ( !v121 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v41;
LABEL_73:
    McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v119);
    return v41;
  }
  v125 = v124;
  v19 = *(_QWORD *)(*((_QWORD *)v124 + 2) + 16LL);
  if ( *(int *)(v19 + 2328) >= 0x2000 || *(_BYTE *)(v19 + 2628) )
  {
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19, v16) + 311);
    v126 = v20;
  }
  else
  {
    v20 = 0;
    v126 = 0;
  }
  v21 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
  if ( *((_DWORD *)v18 + 108) == 2 )
  {
    if ( KeReadStateEvent(v21 + 5) )
      goto LABEL_15;
    v76 = v21 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_15;
    v76 = v21 + 4;
  }
  KeWaitForSingleObject(v76, Executive, 0, 0, 0LL);
LABEL_15:
  KeEnterCriticalRegion();
  if ( !v20 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 0) )
      goto LABEL_17;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v78 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v77, &EventBlockThread, v79, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 1u);
    if ( v78 )
      goto LABEL_87;
    goto LABEL_88;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v80 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGDEVICE *)((char *)v18 + 144));
    if ( v80 )
LABEL_87:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
LABEL_88:
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_17:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v127, (__int64)v18, 2, v22, 0);
  if ( v135 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v132, 0LL);
    v24 = *(unsigned int *)(v133 + 200);
    if ( (_DWORD)v24 != 1 )
    {
LABEL_96:
      COREACCESS::Release((COREACCESS *)v132);
LABEL_97:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v82);
      if ( v121 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerExit, v84, v119);
      return 3221226166LL;
    }
  }
  if ( v130 )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
    v81[3] = 275LL;
    v81[4] = 4LL;
    v81[5] = v128;
    v81[6] = 0LL;
    v81[7] = 0LL;
    WdLogEvent5_WdCriticalError(v81);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v129 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v129 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, 72);
      KeWaitForSingleObject((char *)v129 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v129, 0LL);
  }
  v131 = 0LL;
  v130 = 1;
  if ( *(_DWORD *)(v134 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v128);
    if ( !v135 )
      goto LABEL_97;
    goto LABEL_96;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( !*(_BYTE *)(v27 + 209) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v14, (DXGALLOCATIONREFERENCE *)&v123, v15->hAllocation);
    v31 = v123;
    if ( !v123 )
    {
      v89 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v89 + 24) = v15->hAllocation;
      WdLogEvent5_WdWarning(v89);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v123, v90);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v91);
      if ( !v121 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)-1073741811;
      goto LABEL_129;
    }
    v32 = (DXGDEVICE *)*((_QWORD *)v123 + 1);
    v33 = *((_QWORD *)v32 + 2);
    v34 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
    if ( *(_QWORD *)(v33 + 16) == v34 )
    {
      if ( *((_QWORD *)v123 + 3) )
      {
        v35 = v124;
        if ( v32 == v124 )
        {
          if ( !*((_DWORD *)v18 + 108) )
          {
            v67 = *(_DWORD *)(*((_QWORD *)v123 + 6) + 4LL);
            if ( (v67 & 4) != 0 )
            {
              v106 = (v67 >> 6) & 0xF;
              v107 = *((_QWORD *)v124 + 231);
              if ( v107 )
              {
                if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v124 + 231)) )
                {
                  v110 = WdLogNewEntry5_WdAssertion(v109, v108);
                  *(_QWORD *)(v110 + 24) = 1153LL;
                  WdLogEvent5_WdAssertion(v110);
                }
                v111 = *((_DWORD *)v35 + 144);
                v35 = v124;
                if ( v111 == 1
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v107 + 2696), v124, v106)
                  && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)v35, v106) == v31 )
                {
                  DXGDEVICE::UpdateDodFrontBuffer(v35, v31);
                }
              }
            }
          }
          v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 640LL) + 8LL)
                                                          + 824LL))(
                  *(_QWORD *)(*((_QWORD *)v18 + 2) + 648LL),
                  *((_QWORD *)v31 + 3));
          v40 = v36;
          if ( v36 < 0 )
          {
            v112 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
            v112[3] = v35;
            v112[4] = v31;
            v112[5] = v40;
            WdLogEvent5_WdWarning(v112);
          }
          v41 = v40;
          if ( (int)v40 >= 0 )
          {
            v42 = v123;
            if ( v123 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)v123 + 11);
            if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v42, v37) + 311) )
              goto LABEL_52;
            CurrentThread = KeGetCurrentThread();
            if ( !CurrentThread )
            {
              v113 = WdLogNewEntry5_WdAssertion(v44, v43);
              *(_QWORD *)(v113 + 24) = 507LL;
              WdLogEvent5_WdAssertion(v113);
            }
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v44, v43);
            v51 = PsGetCurrentProcess(v48, v47, v49, v50);
            v52 = PsGetProcessDxgProcess(v51);
            if ( !CurrentProcessSessionId )
              goto LABEL_149;
            if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
              goto LABEL_149;
            if ( !v52 )
              goto LABEL_149;
            v53 = *(void **)(v52 + 88);
            if ( !v53 || v53 == &gDxgkWin32kEngInterface )
              goto LABEL_149;
            v54 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v114 = PsGetCurrentProcess(v56, v55, v57, v58),
                  ProcessSessionId = PsGetProcessSessionIdEx(v114),
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
LABEL_149:
              ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
              if ( !ThreadProperty )
                ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
              if ( !ThreadProperty )
                goto LABEL_51;
              ObfDereferenceObject(ThreadProperty);
            }
            if ( ThreadProperty && ThreadProperty[8] )
            {
              v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60);
              v117[3] = 275LL;
              v117[4] = 38LL;
              v117[5] = ThreadProperty[8];
              v117[6] = 0LL;
              v117[7] = 0LL;
              WdLogEvent5_WdCriticalError(v117);
            }
LABEL_51:
            v35 = v124;
LABEL_52:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
            if ( v126 )
              ExReleasePushLockSharedEx((char *)v35 + 144, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v35 + 17));
            KeLeaveCriticalRegion();
            if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v63);
            if ( v121 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v119);
            }
            return 0LL;
          }
        }
        else
        {
          v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v32);
          v100[3] = v31;
          v100[4] = v35;
          v100[5] = *((_QWORD *)v31 + 1);
          v41 = -1073741811;
          v100[6] = -1073741811LL;
          WdLogEvent5_WdWarning(v100);
        }
        v101 = WdLogNewEntry5_WdError(v38, v37);
        *(_QWORD *)(v101 + 24) = v123;
        *(_QWORD *)(v101 + 32) = (int)v41;
        WdLogEvent5_WdError(v101);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v123, v102);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
        if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v103);
        if ( v121 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q_EtwWriteTransfer(v104, &EventProfilerExit, v105, v119);
          return v41;
        }
        return v41;
      }
      v97 = WdLogNewEntry5_WdWarning(v34, v33, v32);
      *(_QWORD *)(v97 + 24) = v15->hAllocation;
      *(_QWORD *)(v97 + 32) = v123;
      WdLogEvent5_WdWarning(v97);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v123, v98);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v99);
      if ( !v121 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)-1073741811;
LABEL_129:
      McTemplateK0q_EtwWriteTransfer(v92, &EventProfilerExit, v93, v119);
      return (unsigned int)-1073741811;
    }
    v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v32);
    v94[3] = v124;
    v94[4] = v123;
    v41 = -1073741811;
    v94[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v94);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v123, v95);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
    if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v96);
    v73 = v121 == 0;
    goto LABEL_121;
  }
  v85 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4240),
          (struct DXGPROCESS *)v14,
          v124,
          v15,
          0);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v127);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
  if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v119, v86);
  if ( v121 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v87, &EventProfilerExit, v88, v119);
  return v85;
}
