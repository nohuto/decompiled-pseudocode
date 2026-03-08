/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01993E0 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1C033FA80 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0364994 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002D10 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007010 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00072AC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000748C (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EC0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008EF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0016C7C (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0040C58 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C0041998 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017C4F4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1C017FD0C (OutputDuplProcessTerminateForWddm.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0186640 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0188150 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     OutputDuplProcessTerminateForSession @ 0x1C01A8338 (OutputDuplProcessTerminateForSession.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B9100 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01C56D4 (DxgkDestroyCsrssProcess.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01D22B0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01D7C20 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02B71FC (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C03116D0 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C033F07C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C033FFD8 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0340DC0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0341048 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C03417F0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0343F1C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C034CA20 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C035DDC8 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0383ABC (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2, char a3)
{
  char v3; // r15
  _QWORD *v6; // rdi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  int v13; // r8d
  _QWORD *v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rbx
  struct DXGGLOBAL *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned int v22; // edi
  __int64 v23; // rbx
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // edi
  unsigned int v30; // edx
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // eax
  _QWORD *v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // r15
  __int64 v37; // r9
  __int64 v38; // r13
  char v39; // r12
  char *v40; // rdx
  char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  DXGSESSIONMGR *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // eax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rsi
  DXGVIRTUALMACHINE *v63; // rcx
  DXGVIRTUALMACHINE *v64; // rcx
  unsigned int v65; // edx
  unsigned int v66; // edx
  struct DXGPROTECTEDSESSION *EntryObject; // rbx
  unsigned int v68; // eax
  unsigned int v69; // ebx
  DXGKEYEDMUTEX *v70; // rcx
  int v71; // r8d
  DXGSYNCOBJECT *v72; // rbx
  unsigned int v73; // r15d
  PERESOURCE *v74; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v76; // edi
  int v77; // eax
  unsigned int v78; // ebx
  DXGSHAREDVMOBJECT *v79; // rax
  struct DXGPROCESS *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  DXGSESSIONMGR *v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  DXGSESSIONMGR *v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned int v92; // eax
  DXGSESSIONDATA *v93; // rax
  struct DXGGLOBAL *v94; // rax
  struct DXGGLOBAL *v95; // rax
  __int64 v96; // [rsp+28h] [rbp-D8h]
  __int64 v97; // [rsp+30h] [rbp-D0h]
  char v99; // [rsp+54h] [rbp-ACh] BYREF
  char v100; // [rsp+55h] [rbp-ABh]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v102[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v103[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v104; // [rsp+78h] [rbp-88h]
  char v105; // [rsp+80h] [rbp-80h]
  char v106[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v107[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v108[88]; // [rsp+F8h] [rbp-8h] BYREF

  v3 = a3;
  if ( (*((_DWORD *)this + 106) & 0x104) == 4 )
  {
    v45 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v45 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v44, v43, v46, v47);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v45, CurrentProcessSessionId);
      if ( SessionDataForSpecifiedSession )
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
    }
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v44);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v56 = PsGetCurrentProcessSessionId(v53, v52, v54, v55);
    DxgkLogCodePointPacketForSession(0x73u, v56, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 110) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v100 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v99);
  if ( (*((_DWORD *)this + 106) & 0x101) == 1 )
    DxgkDestroyCsrssProcess();
  v6 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v6 != v6 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners((struct _KTHREAD **)this, a2);
    while ( 1 )
    {
      v34 = (_QWORD *)*v6;
      if ( (_QWORD *)*v6 == v6 )
        break;
      if ( v34 )
        v35 = (__int64)(v34 - 3);
      else
        v35 = 0LL;
      v36 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL);
      OutputDuplProcessTerminateForWddm((PERESOURCE *)v36, *(PERESOURCE **)(v35 + 1880));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v106, v35, 2, v37, 0);
      v38 = *(_QWORD *)(v36 + 2928);
      if ( *(_DWORD *)(v35 + 464) == 2 )
      {
        v39 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v38 + 48, 0LL);
        *(_QWORD *)(v38 + 56) = KeGetCurrentThread();
      }
      else
      {
        v39 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v38 + 24, 0LL);
        *(_QWORD *)(v38 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v106, v40);
      if ( !*(_QWORD *)(v36 + 2928) )
      {
        WdLogSingleEntry1(1LL, 1992LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter->IsRenderAdapter()", 1992LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 200LL) == 4 )
      {
        v57 = (_QWORD *)(v35 + 24);
        if ( !v35 )
          v57 = 0LL;
        v58 = *v57;
        if ( *(_QWORD **)(*v57 + 8LL) != v57 || (v59 = (_QWORD *)v57[1], (_QWORD *)*v59 != v57) )
          __fastfail(3u);
        *v59 = v58;
        *(_QWORD *)(v58 + 8) = v59;
      }
      else
      {
        if ( *(_DWORD *)(v35 + 608) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v106);
          v104 = v36;
          v105 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
          if ( *(_DWORD *)(v36 + 200) == 1 )
            DXGDEVICE::FlushScheduler(v35, 4LL, 4294967293LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v106, v41);
          if ( v105 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v103);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v36 + 2928), (struct DXGDEVICE *)v35, 0LL);
      }
      if ( v39 )
        v42 = v38 + 48;
      else
        v42 = v38 + 24;
      *(_QWORD *)(v42 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v42, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v108);
      COREACCESS::~COREACCESS((COREACCESS *)v107);
    }
    v3 = a3;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  else
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = 3060LL;
  OutputDuplProcessTerminateForSession();
  v12 = (_QWORD *)((char *)this + 344);
  if ( (_QWORD *)*v12 != v12 )
  {
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)this + 376));
    while ( 1 )
    {
      v60 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 == v12 )
        break;
      v61 = (__int64)(v60 - 3);
      if ( !v60 )
        v61 = 0LL;
      v62 = *(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v103, (struct DXGADAPTER *const)v62);
      COREACCESS::AcquireShared((COREACCESS *)v103, 0LL);
      if ( !*(_QWORD *)(v62 + 2920) )
      {
        WdLogSingleEntry1(1LL, 2067LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->IsDisplayAdapter()",
          2067LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v62 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD **)this, v61);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v62 + 2920),
          *(_DWORD *)(v61 + 52),
          *(_DWORD *)(v61 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v103);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 47);
    v3 = a3;
  }
  if ( (*((_DWORD *)this + 106) & 0x80u) != 0 )
  {
    v63 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    if ( v63 )
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v63);
    v64 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    if ( v64 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v64);
  }
  v13 = *((_DWORD *)this + 75);
  v14 = (_QWORD *)((char *)this + 280);
  v15 = *((_DWORD *)this + 74);
  if ( v13 != v15 )
  {
    v29 = 0;
    if ( v15 )
    {
      do
      {
        if ( v29 >= *((_DWORD *)this + 74) )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 217LL, 0LL, 0LL, 0LL, 0LL);
        }
        v30 = *(_DWORD *)(*v14 + 16LL * v29 + 8) & 0x1F;
        if ( v30 >= 8 )
        {
          v65 = v30 - 8;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( v66 )
            {
              if ( v66 == 5 )
              {
                EntryObject = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject(
                                                              (DXGPROCESS *)((char *)this + 280),
                                                              v29);
                v68 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
                DXGPROTECTEDSESSION::DestroyProtectedSession(EntryObject, v68);
              }
            }
            else
            {
              HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v29);
              v69 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
              DXGKEYEDMUTEX::SignalAbandoned(v70, v69, v71);
              if ( !DXGKEYEDMUTEX::DestroyHandle(v69) )
              {
                WdLogSingleEntry1(1LL, 2150LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 2150LL, 0LL, 0LL, 0LL, 0LL);
              }
            }
          }
          else
          {
            v72 = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v29);
            v73 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
            if ( (*((_DWORD *)this + 106) & 0x80) != 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v102, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v102);
              DXGSYNCOBJECT::SetVmSyncObject(v72, 0LL);
              *((_DWORD *)v72 + 20) = 0;
              DXGPROCESS::FreeHandleSafe(this, v73);
              if ( v102[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v102);
            }
            else
            {
              v74 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(v74, v72, v73);
            }
          }
        }
        v15 = *((_DWORD *)this + 74);
        ++v29;
      }
      while ( v29 < v15 );
      v13 = *((_DWORD *)this + 75);
      v3 = a3;
    }
  }
  v16 = v15;
  if ( (*((_DWORD *)this + 106) & 0x80u) != 0 && v13 != v15 )
  {
    v76 = 0;
    if ( v15 )
    {
      do
      {
        v77 = HMGRTABLE::GetEntryType((__int64)this + 280, v76) - 12;
        if ( v77 )
        {
          if ( v77 == 1 )
          {
            v78 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v76);
            v79 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v76);
            DXGSHAREDVMOBJECT::ReleaseReference(v79);
            DXGPROCESS::FreeHandleSafe(this, v78);
          }
        }
        else
        {
          v80 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v76);
          if ( (*((_DWORD *)v80 + 106) & 0x100) == 0 )
          {
            WdLogSingleEntry1(1LL, 2189LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess->IsVmProcess()", 2189LL, 0LL, 0LL, 0LL, 0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v103, v80, 1u);
          DXGPROCESS::DestroyDxgProcess(v80);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v103);
        }
        v16 = *((_DWORD *)this + 74);
        ++v76;
      }
      while ( v76 < v16 );
    }
  }
  if ( *((_DWORD *)this + 75) != v16 )
  {
    v31 = 0;
    if ( v16 )
    {
      do
      {
        if ( v31 >= *((_DWORD *)this + 74) )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 217LL, 0LL, 0LL, 0LL, 0LL);
        }
        v32 = *(_DWORD *)(*v14 + 16LL * v31 + 8) & 0x1F;
        if ( v32 == 1 )
        {
          v33 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v31);
          DXGADAPTER::DestroyHandle(this, v33);
        }
        else if ( v32 )
        {
          WdLogSingleEntry1(1LL, 2221LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EntryType == HMGRENTRY_TYPE_FREE",
            2221LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ++v31;
      }
      while ( v31 < *((_DWORD *)this + 74) );
    }
  }
  if ( *((_QWORD *)this + 74) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 74) )
    {
      WdLogSingleEntry1(1LL, 2234LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsVailProcess()", 2234LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_BYTE *)this + 600) )
  {
    v83 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v83
      || (v86 = PsGetCurrentProcessSessionId(v82, v81, v84, v85),
          !DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v83, v86)) )
    {
      WdLogSingleEntry1(1LL, 2242LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionData()",
        2242LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v89 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v89 )
    {
      v92 = PsGetCurrentProcessSessionId(v88, v87, v90, v91);
      v93 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v89, v92);
    }
    else
    {
      v93 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v93) < 0 )
    {
      WdLogSingleEntry1(1LL, 2244LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 2244LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)this + 600) = 0;
  }
  v17 = 0;
  v18 = 272LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + v18) )
    {
      v19 = DXGGLOBAL::GetGlobal();
      v20 = *((_QWORD *)this + 8);
      v21 = *(_QWORD *)((char *)v19 + v18);
      if ( v20 )
      {
        if ( *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)v21 - 1) + 16) )
        {
          (*(void (**)(void))(*(_QWORD *)(v21 + 8) + 88LL))();
          *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v21 - 1) + 16) = 0LL;
        }
      }
    }
    ++v17;
    v18 += 8LL;
  }
  while ( v17 < 2 );
  v22 = 0;
  v23 = 256LL;
  do
  {
    if ( *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + v23) )
    {
      v24 = DXGGLOBAL::GetGlobal();
      v25 = *((_QWORD *)this + 8);
      v26 = *(_QWORD *)((char *)v24 + v23);
      if ( v25 )
      {
        if ( *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1)) )
        {
          (*(void (**)(void))(*(_QWORD *)(v26 + 8) + 360LL))();
          *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * (unsigned int)(*(_DWORD *)v26 - 1)) = 0LL;
        }
      }
    }
    ++v22;
    v23 += 8LL;
  }
  while ( v22 < 2 );
  while ( *((int *)this + 111) > 0 )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v27 = *((_DWORD *)this + 106);
  if ( v3 )
  {
    if ( (v27 & 0x80u) != 0 )
      DXGPROCESSVMWP::ResetVirtualMachine(this);
  }
  else if ( (v27 & 0x40) != 0 )
  {
    v94 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v94, DestroyProcessCallback, this, 2LL);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v99);
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v97) = *((_DWORD *)this + 106);
    LODWORD(v96) = *((_DWORD *)this + 126);
    McTemplateK0pxqt_EtwWriteTransfer(
      *((_QWORD *)this + 8),
      &EventDestroyDxgProcess,
      v28,
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      v96,
      v97);
  }
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 126) )
  {
    v95 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v95 + 214), *((_DWORD *)this + 126));
    *((_DWORD *)this + 126) = 0;
  }
  if ( v100 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v99);
}
