/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01A9B88 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1C03444C0 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0369444 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002C98 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008040 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00081B8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008364 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008394 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000A8D0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AA18 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0016F60 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0041C68 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C00429D4 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0054BF8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01897FC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C018AF08 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C018CFB8 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0193400 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1C0197ABC (OutputDuplProcessTerminateForWddm.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A37D8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C01A5A90 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C01A6D84 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     OutputDuplProcessTerminateForSession @ 0x1C01A93A4 (OutputDuplProcessTerminateForSession.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01E4A5C (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01E54B4 (DxgkDestroyCsrssProcess.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01E6770 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C02BC0FC (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0316500 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0343ABC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0344A18 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0345800 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0345A88 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0346230 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C034895C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034F820 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0351484 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0362858 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0376288 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C038832C (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
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
  __int64 v43; // rcx
  DXGSESSIONMGR *v44; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  __int64 v49; // rcx
  unsigned int v50; // eax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rsi
  DXGVIRTUALMACHINE *v57; // rcx
  DXGVIRTUALMACHINE *v58; // rcx
  unsigned int v59; // edx
  unsigned int v60; // edx
  struct DXGPROTECTEDSESSION *EntryObject; // rbx
  unsigned int v62; // eax
  unsigned int v63; // ebx
  DXGKEYEDMUTEX *v64; // rcx
  int v65; // r8d
  DXGSYNCOBJECT *v66; // rbx
  unsigned int v67; // r15d
  PERESOURCE *v68; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v70; // edi
  int v71; // eax
  unsigned int v72; // ebx
  DXGSHAREDVMOBJECT *v73; // rax
  struct DXGPROCESS *v74; // rbx
  __int64 v75; // rcx
  DXGSESSIONMGR *v76; // rbx
  unsigned int v77; // eax
  __int64 v78; // rcx
  DXGSESSIONMGR *v79; // rbx
  unsigned int v80; // eax
  DXGSESSIONDATA *v81; // rax
  struct DXGGLOBAL *v82; // rax
  struct DXGGLOBAL *v83; // rax
  __int64 v84; // [rsp+28h] [rbp-D8h]
  __int64 v85; // [rsp+30h] [rbp-D0h]
  char v87; // [rsp+54h] [rbp-ACh] BYREF
  char v88; // [rsp+55h] [rbp-ABh]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v90[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v91[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h]
  char v93; // [rsp+80h] [rbp-80h]
  char v94[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v95[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v96[88]; // [rsp+F8h] [rbp-8h] BYREF

  v3 = a3;
  if ( (*((_DWORD *)this + 106) & 0x104) == 4 )
  {
    v44 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v44 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v43);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v44, CurrentProcessSessionId);
      if ( SessionDataForSpecifiedSession )
        DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionDataForSpecifiedSession + 2371);
    }
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v43);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v50 = PsGetCurrentProcessSessionId(v49);
    DxgkLogCodePointPacketForSession(0x73u, v50, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 110) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v88 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v87);
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
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, v35, 2, v37, 0);
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
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v94, v40);
      if ( !*(_QWORD *)(v36 + 2928) )
      {
        WdLogSingleEntry1(1LL, 1992LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter->IsRenderAdapter()", 1992LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 200LL) == 4 )
      {
        v51 = (_QWORD *)(v35 + 24);
        if ( !v35 )
          v51 = 0LL;
        v52 = *v51;
        if ( *(_QWORD **)(*v51 + 8LL) != v51 || (v53 = (_QWORD *)v51[1], (_QWORD *)*v53 != v51) )
          __fastfail(3u);
        *v53 = v52;
        *(_QWORD *)(v52 + 8) = v53;
      }
      else
      {
        if ( *(_DWORD *)(v35 + 608) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v94);
          v92 = v36;
          v93 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
          if ( *(_DWORD *)(v36 + 200) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v35, 4u, 0xFFFFFFFD, 0);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v94, v41);
          if ( v93 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v36 + 2928), (struct DXGDEVICE *)v35, 0LL);
      }
      if ( v39 )
        v42 = v38 + 48;
      else
        v42 = v38 + 24;
      *(_QWORD *)(v42 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v42, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v96);
      COREACCESS::~COREACCESS((COREACCESS *)v95);
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
      v54 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 == v12 )
        break;
      v55 = (__int64)(v54 - 3);
      if ( !v54 )
        v55 = 0LL;
      v56 = *(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v91, (struct DXGADAPTER *const)v56);
      COREACCESS::AcquireShared((COREACCESS *)v91, 0LL);
      if ( !*(_QWORD *)(v56 + 2920) )
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
      if ( *(_DWORD *)(v56 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection((struct _KTHREAD **)this, v55);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v56 + 2920),
          *(_DWORD *)(v55 + 52),
          *(_DWORD *)(v55 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v91);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 47);
    v3 = a3;
  }
  if ( (*((_DWORD *)this + 106) & 0x80u) != 0 )
  {
    v57 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    if ( v57 )
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v57);
    v58 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    if ( v58 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v58);
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
          WdLogSingleEntry1(1LL, 232LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 232LL, 0LL, 0LL, 0LL, 0LL);
        }
        v30 = *(_DWORD *)(*v14 + 16LL * v29 + 8) & 0x1F;
        if ( v30 >= 8 )
        {
          v59 = v30 - 8;
          if ( v59 )
          {
            v60 = v59 - 1;
            if ( v60 )
            {
              if ( v60 == 5 )
              {
                EntryObject = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject(
                                                              (DXGPROCESS *)((char *)this + 280),
                                                              v29);
                v62 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
                DXGPROTECTEDSESSION::DestroyProtectedSession(EntryObject, v62);
              }
            }
            else
            {
              HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v29);
              v63 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
              DXGKEYEDMUTEX::SignalAbandoned(v64, v63, v65);
              if ( !DXGKEYEDMUTEX::DestroyHandle(v63) )
              {
                WdLogSingleEntry1(1LL, 2150LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 2150LL, 0LL, 0LL, 0LL, 0LL);
              }
            }
          }
          else
          {
            v66 = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v29);
            v67 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v29);
            if ( (*((_DWORD *)this + 106) & 0x80) != 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v90, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v90);
              DXGSYNCOBJECT::SetVmSyncObject(v66, 0LL);
              *((_DWORD *)v66 + 20) = 0;
              DXGPROCESS::FreeHandleSafe(this, v67);
              if ( v90[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v90);
            }
            else
            {
              v68 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(v68, v66, v67);
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
    v70 = 0;
    if ( v15 )
    {
      do
      {
        v71 = HMGRTABLE::GetEntryType((__int64)this + 280, v70) - 12;
        if ( v71 )
        {
          if ( v71 == 1 )
          {
            v72 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v70);
            v73 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v70);
            DXGSHAREDVMOBJECT::ReleaseReference(v73);
            DXGPROCESS::FreeHandleSafe(this, v72);
          }
        }
        else
        {
          v74 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v70);
          if ( (*((_DWORD *)v74 + 106) & 0x100) == 0 )
          {
            WdLogSingleEntry1(1LL, 2189LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess->IsVmProcess()", 2189LL, 0LL, 0LL, 0LL, 0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v91, v74, 1u);
          DXGPROCESS::DestroyDxgProcess(v74);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v91);
        }
        v16 = *((_DWORD *)this + 74);
        ++v70;
      }
      while ( v70 < v16 );
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
          WdLogSingleEntry1(1LL, 232LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 232LL, 0LL, 0LL, 0LL, 0LL);
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
    v76 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v76 || (v77 = PsGetCurrentProcessSessionId(v75), !DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v76, v77)) )
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
    v79 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v79 )
    {
      v80 = PsGetCurrentProcessSessionId(v78);
      v81 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v79, v80);
    }
    else
    {
      v81 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v81) < 0 )
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
    v82 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v82,
      (__int64 (__fastcall *)(_QWORD *, __int64))DestroyProcessCallback,
      (__int64)this,
      2);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v87);
  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v85) = *((_DWORD *)this + 106);
    LODWORD(v84) = *((_DWORD *)this + 126);
    McTemplateK0pxqt_EtwWriteTransfer(
      *((_QWORD *)this + 8),
      &EventDestroyDxgProcess,
      v28,
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      v84,
      v85);
  }
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 126) )
  {
    v83 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v83 + 214), *((_DWORD *)this + 126));
    *((_DWORD *)this + 126) = 0;
  }
  if ( v88 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v87);
}
