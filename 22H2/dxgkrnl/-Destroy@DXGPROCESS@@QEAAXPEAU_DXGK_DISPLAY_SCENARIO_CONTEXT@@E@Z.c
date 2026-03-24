/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C0124B40 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C02311A0 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0003148 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0008E28 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001AA10 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C003AF6C (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BBC8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C003BCA0 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C004749C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C00EA678 (OutputDuplProcessTerminate.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EDC54 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EF174 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF2E8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01234B0 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0123CD0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     VidMmTerminateProcessX @ 0x1C0123EA8 (VidMmTerminateProcessX.c)
 *     VidSchTerminateProcessX @ 0x1C0123F4C (VidSchTerminateProcessX.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0124588 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C015C2C8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C015CFF0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01605A0 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C0161014 (DxgkDestroyCsrssProcess.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0163F5C (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01683F0 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0211F50 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C027682C (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0284E1C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0286060 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C028626C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0286878 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0288A60 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290BEC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0292574 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0292650 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B717C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2, char a3)
{
  char v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  struct DXGSESSIONDATA *v26; // rax
  struct DXGFASTMUTEX *const *v27; // rbx
  struct _EPROCESS *v28; // rax
  __int64 v29; // rdx
  DXGADAPTER *v30; // rcx
  DXGADAPTER *v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // esi
  _QWORD *v40; // r14
  unsigned int v41; // esi
  _QWORD *v42; // r14
  DXGSYNCOBJECT *EntryObject; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r15d
  DXGGLOBAL *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r14
  __int64 v53; // r13
  char v54; // r12
  char *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  char *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  DXGSESSIONMGR *v62; // rbx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // r14
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  DXGVIRTUALMACHINE *v86; // rcx
  __int64 v87; // rax
  void *v88; // rbx
  unsigned int v89; // eax
  unsigned int v90; // ebx
  DXGKEYEDMUTEX *v91; // rcx
  int v92; // r8d
  __int64 v93; // rax
  PERESOURCE *Global; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v98; // ebx
  DXGSHAREDVMOBJECT *v99; // rax
  unsigned int v100; // r12d
  __int64 v101; // rdx
  __int64 v102; // rcx
  struct DXGPROCESS *v103; // r15
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  DXGSESSIONMGR *v109; // rbx
  unsigned int v110; // eax
  struct DXGSESSIONDATA *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  DXGSESSIONMGR *v115; // rbx
  unsigned int v116; // eax
  DXGSESSIONDATA *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  struct DXGGLOBAL *v121; // rax
  DXGVIRTUALMACHINE *v122; // rcx
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // rax
  struct DXGGLOBAL *v128; // rax
  DXG_VMBUS_CHANNEL_BASE *v129; // rcx
  struct _MDL *v130; // [rsp+28h] [rbp-D8h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-C8h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v134[16]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v135[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+60h] [rbp-A0h]
  char v137; // [rsp+68h] [rbp-98h]
  __int64 v138; // [rsp+70h] [rbp-90h] BYREF
  int v139; // [rsp+78h] [rbp-88h]
  int v140; // [rsp+7Ch] [rbp-84h]
  int v141; // [rsp+80h] [rbp-80h]
  __int64 v142; // [rsp+88h] [rbp-78h] BYREF
  __int64 v143; // [rsp+90h] [rbp-70h]
  _BYTE v144[8]; // [rsp+98h] [rbp-68h] BYREF
  DXGPUSHLOCK *v145; // [rsp+A0h] [rbp-60h]
  int v146; // [rsp+A8h] [rbp-58h]
  char v147; // [rsp+B0h] [rbp-50h] BYREF
  char v148; // [rsp+B1h] [rbp-4Fh]
  _BYTE v149[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v150; // [rsp+C8h] [rbp-38h]
  char v151; // [rsp+D0h] [rbp-30h]
  __int64 v152; // [rsp+D8h] [rbp-28h]
  _BYTE v153[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v154; // [rsp+108h] [rbp+8h]
  char v155; // [rsp+110h] [rbp+10h]
  __int64 v156; // [rsp+118h] [rbp+18h]
  _BYTE v157[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v158[8]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v159[64]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v160[88]; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = a3;
  if ( *((_BYTE *)this + 346) && (*((_BYTE *)this + 347) & 0x20) == 0 )
  {
    v62 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
    if ( v62 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v61, v60);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v62, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
        (DXGAUTOPUSHLOCK *)v144,
        (struct _KTHREAD **)SessionDataForSpecifiedSession + 2369,
        0);
      DXGPUSHLOCK::AcquireExclusive(v145);
      v146 = 2;
      DispBrokerClientReference::Assign((HANDLE **)SessionDataForSpecifiedSession + 2373, 0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v144);
    }
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v61, v60, v63, v64);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    v71 = PsGetCurrentProcessSessionId(v70, v69);
    DxgkLogCodePointPacketForSession(0x73u, v71, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 90) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C00B31A8 && qword_1C00B31A8 == *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)this + 344) && (*((_BYTE *)this + 347) & 0x20) == 0 )
    DxgkDestroyCsrssProcess();
  v10 = (__int64 *)((char *)this + 280);
  if ( (__int64 *)*v10 != v10 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( 1 )
    {
      v7 = *v10;
      if ( (__int64 *)*v10 == v10 )
        break;
      v49 = (v7 - 24) & -(__int64)(v7 != 0);
      v50 = *(_QWORD *)(v49 + 0x10);
      v51 = *(_QWORD *)(v49 + 0x738);
      v52 = *(_QWORD *)(v50 + 16);
      if ( v51 )
        OutputDuplProcessTerminate(0LL, *(PERESOURCE **)(v50 + 16), v51);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v158, v49, 2, v9, 0);
      v53 = *(_QWORD *)(v52 + 2704);
      if ( *(_DWORD *)(v49 + 432) == 2 )
      {
        v54 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v53 + 48, 0LL);
        *(_QWORD *)(v53 + 56) = KeGetCurrentThread();
      }
      else
      {
        v54 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v53 + 24, 0LL);
        *(_QWORD *)(v53 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v158, v55);
      if ( !*(_QWORD *)(v52 + 2704) )
      {
        v72 = WdLogNewEntry5_WdAssertion(v57, v56);
        *(_QWORD *)(v72 + 24) = 1932LL;
        WdLogEvent5_WdAssertion(v72);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) + 200LL) == 4 )
      {
        v73 = v49 + 24;
        v74 = -v49;
        v75 = v73 & -(__int64)(v74 != 0);
        v76 = *(_QWORD *)v75;
        if ( *(_QWORD *)(*(_QWORD *)v75 + 8LL) != v75
          || (v77 = *(_QWORD **)((v73 & -(__int64)(v74 != 0)) + 8), *v77 != v75) )
        {
          __fastfail(3u);
        }
        *v77 = v76;
        *(_QWORD *)(v76 + 8) = v77;
      }
      else
      {
        if ( !*(_BYTE *)(v52 + 209) && *(_DWORD *)(v49 + 576) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v158, v56);
          v136 = v52;
          v137 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v135);
          if ( *(_DWORD *)(v52 + 200) == 1 )
            DXGDEVICE::FlushScheduler((_QWORD *)v49, 4u);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v135);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v158, v58);
          if ( v137 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v135);
        }
        ADAPTER_RENDER::DestroyDevice(*(DXGADAPTER ***)(v52 + 2704), (struct DXGDEVICE *)v49, 0LL);
      }
      v59 = v53 + 48;
      if ( !v54 )
        v59 = v53 + 24;
      *(_QWORD *)(v59 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v59, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v160);
      COREACCESS::~COREACCESS((COREACCESS *)v159);
    }
    v3 = a3;
  }
  if ( !DXGPROCESS::GetCurrent(v7, v6, v8, v9) )
  {
    v78 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v78 + 24) = 3051LL;
    WdLogEvent5_WdWarning(v78);
    goto LABEL_18;
  }
  v148 = 0;
  v150 = 0LL;
  v151 = 0;
  v152 = 0LL;
  v154 = 0LL;
  v155 = 0;
  v156 = 0LL;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v16, v15);
    *(_QWORD *)(v17 + 24) = 1LL;
    *(_OWORD *)(v17 + 32) = 0LL;
  }
  v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18) + 102);
  if ( v22 )
  {
    v25 = PsGetCurrentProcessSessionId(v21, v20);
    v26 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v22, v25);
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v26 )
  {
    v79 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v79 + 24) = 3098LL;
LABEL_103:
    WdLogEvent5_WdError(v79);
    goto LABEL_14;
  }
  v27 = (struct DXGFASTMUTEX *const *)*((_QWORD *)v26 + 1);
  if ( !v27 )
  {
    v79 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v79 + 24) = 3105LL;
    goto LABEL_103;
  }
  v28 = (struct _EPROCESS *)PsGetCurrentProcess(v21, v20, v23, v24);
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v27, v28);
LABEL_14:
  if ( v148 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v147);
  v30 = v154;
  if ( v154 )
  {
    if ( v155 )
    {
      COREACCESS::Release((COREACCESS *)v153);
      v30 = v154;
    }
    DXGADAPTER::ReleaseReference(v30);
  }
  v31 = v150;
  if ( v150 )
  {
    if ( v151 )
    {
      COREACCESS::Release((COREACCESS *)v149);
      v31 = v150;
    }
    DXGADAPTER::ReleaseReference(v31);
  }
LABEL_18:
  v32 = (_QWORD *)((char *)this + 304);
  if ( (_QWORD *)*v32 != v32 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 42));
    while ( (_QWORD *)*v32 != v32 )
    {
      v81 = (*v32 - 24LL) & -(__int64)(*v32 != 0LL);
      v82 = *(_QWORD *)(*(_QWORD *)(v81 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v157, (struct DXGADAPTER *const)v82);
      COREACCESS::AcquireShared((COREACCESS *)v157, 0LL);
      if ( !*(_QWORD *)(v82 + 2696) )
      {
        v85 = WdLogNewEntry5_WdAssertion(v84, v83);
        *(_QWORD *)(v85 + 24) = 2007LL;
        WdLogEvent5_WdAssertion(v85);
      }
      if ( *(_DWORD *)(v82 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v81);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v82 + 2696),
          *(_DWORD *)(v81 + 52),
          *(_DWORD *)(v81 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v157);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 42), v80);
  }
  if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
  {
    v86 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v86 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v86);
  }
  v33 = *((unsigned int *)this + 65);
  v34 = *((_DWORD *)this + 64);
  if ( (_DWORD)v33 != v34 )
  {
    v39 = 0;
    if ( v34 )
    {
      v40 = (_QWORD *)((char *)this + 240);
      do
      {
        if ( v39 >= *((_DWORD *)this + 64) )
        {
          v87 = WdLogNewEntry5_WdAssertion(v33, v29);
          *(_QWORD *)(v87 + 24) = 231LL;
          WdLogEvent5_WdAssertion(v87);
        }
        v33 = 2LL * v39;
        if ( (*(_DWORD *)(*v40 + 16LL * v39 + 8) & 0x1F) == 8 )
        {
          EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v39);
          v46 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v39);
          if ( (*((_BYTE *)this + 347) & 0x10) != 0 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v45, v44);
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v134, Global, 0);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v134, v95);
            DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
            *((_DWORD *)EntryObject + 18) = 0;
            DXGPROCESS::FreeResourceHandleNoRefSafe(this, v46);
            if ( v134[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v134);
          }
          else
          {
            v47 = DXGGLOBAL::GetGlobal(v45, v44);
            DXGGLOBAL::DestroySyncObject(v47, EntryObject, v46);
          }
        }
        else
        {
          v29 = (*(_DWORD *)(*v40 + 16LL * v39 + 8) & 0x1Fu) - 9;
          if ( (*(_DWORD *)(*v40 + 16LL * v39 + 8) & 0x1F) == 9 )
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v39);
            v90 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v39);
            DXGKEYEDMUTEX::SignalAbandoned(v91, v90, v92);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v90) )
            {
              v93 = WdLogNewEntry5_WdAssertion(v33, v29);
              *(_QWORD *)(v93 + 24) = 2079LL;
              WdLogEvent5_WdAssertion(v93);
            }
          }
          else if ( (*(_DWORD *)(*v40 + 16LL * v39 + 8) & 0x1F) == 0xE )
          {
            v88 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v39);
            v89 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v39);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v88, v89);
          }
        }
        v34 = *((_DWORD *)this + 64);
        ++v39;
      }
      while ( v39 < v34 );
      v33 = *((unsigned int *)this + 65);
    }
    if ( (_DWORD)v33 != v34 )
    {
      v41 = 0;
      if ( v34 )
      {
        v42 = (_QWORD *)((char *)this + 240);
        do
        {
          if ( v41 >= *((_DWORD *)this + 64) )
          {
            v96 = WdLogNewEntry5_WdAssertion(v33, v29);
            *(_QWORD *)(v96 + 24) = 231LL;
            WdLogEvent5_WdAssertion(v96);
          }
          v29 = *(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1F;
          if ( (*(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1F) == 1 )
          {
            v48 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v41);
            DXGADAPTER::DestroyHandle((struct _KTHREAD **)this, v48);
          }
          else
          {
            v33 = (*(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1Fu) - 12;
            if ( (*(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1F) == 0xC )
            {
              v100 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v41);
              v103 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v41);
              if ( (*((_BYTE *)v103 + 347) & 0x20) == 0 )
              {
                v104 = WdLogNewEntry5_WdAssertion(v102, v101);
                *(_QWORD *)(v104 + 24) = 2122LL;
                WdLogEvent5_WdAssertion(v104);
              }
              CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v142, v103);
              v105 = v143;
              if ( v143 )
                DXGPROCESS::DestroyDxgProcess(v103);
              else
                DXGPROCESS::FreeResourceHandleNoRefSafe(this, v100);
              if ( v105 )
                *(_QWORD *)(v105 + 8) = v142;
            }
            else if ( (*(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1F) == 0xD )
            {
              v98 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 240), v41);
              v99 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 240), v41);
              DXGSHAREDVMOBJECT::ReleaseReference(v99);
              DXGPROCESS::FreeResourceHandleNoRefSafe(this, v98);
            }
            else if ( (_DWORD)v29 )
            {
              v97 = WdLogNewEntry5_WdAssertion(v33, v29);
              *(_QWORD *)(v97 + 24) = 2143LL;
              WdLogEvent5_WdAssertion(v97);
            }
          }
          ++v41;
        }
        while ( v41 < *((_DWORD *)this + 64) );
        v3 = a3;
      }
    }
  }
  if ( *((_QWORD *)this + 60) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 60) )
    {
      v106 = WdLogNewEntry5_WdAssertion(v33, v29);
      *(_QWORD *)(v106 + 24) = 2156LL;
      WdLogEvent5_WdAssertion(v106);
    }
  }
  if ( *((_BYTE *)this + 488) )
  {
    v109 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v33, v29) + 102);
    if ( v109 )
    {
      v110 = PsGetCurrentProcessSessionId(v108, v107);
      v111 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v109, v110);
    }
    else
    {
      v111 = 0LL;
    }
    if ( !v111 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v108, v107);
      *(_QWORD *)(v112 + 24) = 2164LL;
      WdLogEvent5_WdAssertion(v112);
    }
    v115 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v108, v107) + 102);
    if ( v115 )
    {
      v116 = PsGetCurrentProcessSessionId(v114, v113);
      v117 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v115, v116);
    }
    else
    {
      v117 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v117) < 0 )
    {
      v120 = WdLogNewEntry5_WdAssertion(v119, v118);
      *(_QWORD *)(v120 + 24) = 2166LL;
      WdLogEvent5_WdAssertion(v120);
    }
    *((_BYTE *)this + 488) = 0;
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX(this);
  if ( v3 )
  {
    v122 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    if ( v122 )
      DXGVIRTUALMACHINE::ResetVirtualMachine(v122, 0);
    v123 = DXGPROCESS::DeferredInitialize(this, 1u);
    v126 = v123;
    if ( v123 < 0 )
    {
      v127 = WdLogNewEntry5_WdError(v125, v124);
      *(_QWORD *)(v127 + 24) = v126;
      WdLogEvent5_WdError(v127);
      *((_BYTE *)this + 520) = 0;
    }
  }
  else if ( (*((_BYTE *)this + 347) & 8) != 0 )
  {
    v121 = DXGGLOBAL::GetGlobal(v36, v35);
    DXGGLOBAL::IterateAdaptersWithCallback(v121, DestroyProcessCallback, this, 2LL);
  }
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 106) )
  {
    v128 = DXGGLOBAL::GetGlobal(v38, v37);
    v139 = *((_DWORD *)this + 106);
    v138 = 0LL;
    v129 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)v128 + 197);
    v140 = 1;
    v141 = 1001;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v129, (struct DXGKVMB_COMMAND_BASE *)&v138, 0x18u, 0LL, 0LL, v130);
    *((_DWORD *)this + 106) = 0;
  }
}
