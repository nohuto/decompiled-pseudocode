/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C01D6EE0 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C01E67D0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     _tlgKeywordOn @ 0x1C0003734 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000A924 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C001B6D8 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001B844 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     __chkstk_0 @ 0x1C00280D0 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0040FDC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355555@Z @ 0x1C00460B8 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C00478D8 (McTemplateK0tt_EtwWriteTransfer.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017687C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB910 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01DDA50 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BB8E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE0E4 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        union _LARGE_INTEGER *a6,
        char a7)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  unsigned int v9; // r12d
  __int64 v10; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v13; // rdi
  struct DXGPROCESS *v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edi
  __int64 v18; // r15
  int v19; // edx
  struct DXGADAPTER *v20; // r15
  char *v21; // rcx
  signed __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGPROCESS *v25; // rsi
  struct DXGPROCESS *v26; // rax
  __int64 v27; // rax
  int PairingAdapters; // eax
  __int64 v30; // r8
  __int64 v31; // r12
  volatile signed __int64 *v32; // rdi
  volatile signed __int64 *v33; // rsi
  signed __int64 v34; // rcx
  struct DXGADAPTER *v35; // rdi
  unsigned int v36; // r12d
  struct DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGADAPTER *v40; // rdi
  struct DXGADAPTER *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // edi
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r13
  NTSTATUS v54; // r13d
  ULONG v55; // esi
  NTSTATUS v56; // eax
  int v57; // esi
  NTSTATUS v58; // edx
  __int64 v59; // rcx
  bool v60; // r13
  __int64 v61; // r8
  unsigned int v62; // edi
  struct DXGADAPTER *v63; // r15
  unsigned int v64; // r12d
  int v65; // edi
  DXGGLOBAL **v66; // rcx
  DXGGLOBAL **v67; // rcx
  int v69; // r12d
  struct DXGADAPTER *v70; // r8
  struct DXGADAPTER *v71; // rdi
  int v72; // r12d
  REMOTE_VSYNC *v73; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGGLOBAL *v77; // rax
  int v78; // r9d
  __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // r15
  int v82; // edx
  struct DXGTHREAD *v83; // rax
  struct _ETHREAD *v84; // rdi
  KSPIN_LOCK *v85; // rax
  __int64 v86; // rcx
  DXGSESSIONMGR *v87; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  int v92; // r8d
  int LiveDumpWithWdLogs2; // r15d
  struct DXGADAPTER *v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // eax
  KPROCESSOR_MODE WaitMode[8]; // [rsp+20h] [rbp-100h]
  __int64 WaitModea; // [rsp+20h] [rbp-100h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-F8h]
  BOOLEAN Alertablea[8]; // [rsp+28h] [rbp-F8h]
  bool v103; // [rsp+A0h] [rbp-80h]
  NTSTATUS v105; // [rsp+A4h] [rbp-7Ch]
  char v106; // [rsp+A8h] [rbp-78h]
  char v107; // [rsp+A9h] [rbp-77h]
  char v108; // [rsp+AAh] [rbp-76h]
  struct DXGADAPTER *v110; // [rsp+B0h] [rbp-70h] BYREF
  struct DXGADAPTER *v111; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v112; // [rsp+C0h] [rbp-60h]
  unsigned int v113; // [rsp+C8h] [rbp-58h] BYREF
  struct DXGDEVICE *v114; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGADAPTER *v115; // [rsp+D8h] [rbp-48h]
  _WORD v116[2]; // [rsp+E0h] [rbp-40h] BYREF
  int v117; // [rsp+E4h] [rbp-3Ch] BYREF
  struct DXGDEVICE *v118; // [rsp+E8h] [rbp-38h] BYREF
  void *Src; // [rsp+F0h] [rbp-30h]
  int v120; // [rsp+F8h] [rbp-28h] BYREF
  int v121; // [rsp+FCh] [rbp-24h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+100h] [rbp-20h] BYREF
  int v123; // [rsp+108h] [rbp-18h] BYREF
  int IsDebuggerPresent; // [rsp+10Ch] [rbp-14h] BYREF
  int v125; // [rsp+110h] [rbp-10h] BYREF
  int v126; // [rsp+114h] [rbp-Ch] BYREF
  int v127; // [rsp+118h] [rbp-8h] BYREF
  int v128; // [rsp+11Ch] [rbp-4h] BYREF
  int v129; // [rsp+120h] [rbp+0h] BYREF
  __int64 v130; // [rsp+128h] [rbp+8h] BYREF
  void *v131; // [rsp+130h] [rbp+10h] BYREF
  __int64 v132; // [rsp+138h] [rbp+18h] BYREF
  __int64 v133; // [rsp+140h] [rbp+20h] BYREF
  unsigned __int64 v134; // [rsp+148h] [rbp+28h] BYREF
  unsigned __int64 v135; // [rsp+150h] [rbp+30h] BYREF
  _BYTE v136[56]; // [rsp+158h] [rbp+38h] BYREF
  char v137; // [rsp+190h] [rbp+70h] BYREF
  char v138; // [rsp+191h] [rbp+71h]
  _BYTE v139[8]; // [rsp+198h] [rbp+78h] BYREF
  __int64 v140; // [rsp+1A0h] [rbp+80h]
  struct DXGADAPTER *v141; // [rsp+1A8h] [rbp+88h]
  char v142; // [rsp+1B0h] [rbp+90h]
  __int64 v143; // [rsp+1B8h] [rbp+98h]
  _BYTE v144[8]; // [rsp+1D8h] [rbp+B8h] BYREF
  __int64 v145; // [rsp+1E0h] [rbp+C0h]
  struct DXGADAPTER *v146; // [rsp+1E8h] [rbp+C8h]
  char v147; // [rsp+1F0h] [rbp+D0h]
  char *v148; // [rsp+1F8h] [rbp+D8h]
  PVOID Object[64]; // [rsp+220h] [rbp+100h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+420h] [rbp+300h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  Src = a5;
  v9 = a2;
  Timeout = a6;
  v113 = a4;
  v10 = (unsigned int)a1;
  v114 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v14 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v14 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v14 )
        goto LABEL_4;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(v31) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v31;
  }
LABEL_4:
  if ( a4 >= 0x3F )
  {
    LODWORD(v31) = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    return (unsigned int)v31;
  }
  KeEnterCriticalRegion();
  if ( !(_DWORD)v10 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    v77 = DXGGLOBAL::GetGlobal();
    LODWORD(v31) = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v77 + 992));
    goto LABEL_123;
  }
  if ( v14 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v14 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v14 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v78 = *((_DWORD *)v14 + 68);
      if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v78);
    }
    ExAcquirePushLockSharedEx((char *)v14 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v14 + 66);
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v14 + 106) & 0x100) != 0 )
  {
    v79 = *((_QWORD *)v14 + 76);
    v80 = v79 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v79 + 248));
    if ( v17 < *(_DWORD *)(v79 + 296) )
    {
      v81 = 16LL * v17 + *(_QWORD *)(v79 + 280);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v81 + 8) & 0x60) && (*(_DWORD *)(v81 + 8) & 0x2000) == 0 )
      {
        v82 = *(_DWORD *)(v81 + 8) & 0x1F;
        if ( v82 )
        {
          if ( v82 == 1 )
          {
            v20 = *(struct DXGADAPTER **)v81;
            goto LABEL_163;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v20 = 0LL;
LABEL_163:
    _InterlockedDecrement((volatile signed __int32 *)(v80 + 16));
    v115 = v20;
    ExReleasePushLockSharedEx(v80, 0LL);
    KeLeaveCriticalRegion();
    v9 = a2;
    goto LABEL_19;
  }
  if ( v17 < *((_DWORD *)v14 + 74) )
  {
    v18 = *((_QWORD *)v14 + 35) + 16LL * v17;
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v18 + 8) & 0x60) && (*(_DWORD *)(v18 + 8) & 0x2000) == 0 )
    {
      v19 = *(_DWORD *)(v18 + 8) & 0x1F;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = *(struct DXGADAPTER **)v18;
          v115 = v20;
          goto LABEL_19;
        }
        WdLogSingleEntry1(2LL, 316LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v115 = 0LL;
  v20 = 0LL;
LABEL_19:
  v21 = (char *)v14 + 248;
  if ( !v20 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v31) = -1073741811;
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    goto LABEL_123;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v20 + 3);
  _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v118, v9, (struct _KTHREAD **)v14, &v114);
    if ( !v114 )
    {
      WdLogSingleEntry2(3LL, v20, v9);
      if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
      LODWORD(v31) = -1073741811;
      goto LABEL_121;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v114 + 8);
    if ( v118 )
    {
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v22 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
    }
  }
  v23 = PsGetCurrentProcess(v22);
  v24 = PsGetProcessDxgProcess(v23);
  v25 = (struct DXGPROCESS *)v24;
  if ( v24 && (*(_DWORD *)(v24 + 424) & 0x80) == 0 )
  {
LABEL_23:
    v26 = v25;
    if ( !v25 )
      goto LABEL_28;
    goto LABEL_24;
  }
  v83 = DXGTHREAD::GetCurrent();
  if ( v83 )
  {
    v26 = (struct DXGPROCESS *)*((_QWORD *)v83 + 3);
    if ( !v26 )
      goto LABEL_23;
  }
  else
  {
    v84 = KeGetCurrentThread();
    v85 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v26 = DXGGLOBAL::SearchDxgThreadList(v85, v84);
    if ( !v26 )
    {
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_23;
    }
  }
LABEL_24:
  v27 = *((_QWORD *)v26 + 11);
  if ( v27 )
  {
    v117 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v27 + 224))(0LL, 0LL, &v117) && !v117 )
    {
      if ( !*((_BYTE *)v20 + 209) )
        goto LABEL_139;
      v87 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v87 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v86);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v87, CurrentProcessSessionId);
      }
      if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
        v73 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1064);
      else
LABEL_139:
        v73 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
      LODWORD(v31) = REMOTE_VSYNC::WaitForVSync(v73);
      goto LABEL_120;
    }
  }
LABEL_28:
  v110 = 0LL;
  v111 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v20, a3, &v110, &v134, &v111, &v135, 0);
  v31 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v20, a3, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)v20,
      a3,
      v31,
      0LL,
      0LL);
    goto LABEL_120;
  }
  v32 = (volatile signed __int64 *)v110;
  v33 = (volatile signed __int64 *)v111;
  if ( !v110 || !v111 )
  {
    WdLogSingleEntry1(1LL, 7320LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7320LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v114
    && (v32 != *(volatile signed __int64 **)(*((_QWORD *)v114 + 2) + 16LL)
     || v33 != *((volatile signed __int64 **)v114 + 235)) )
  {
    WdLogSingleEntry2(3LL, v20, a2);
    LODWORD(v31) = -1073741811;
    goto LABEL_120;
  }
  v138 = 0;
  v141 = (struct DXGADAPTER *)v32;
  v142 = 0;
  v143 = 0LL;
  if ( v32 )
  {
    _InterlockedIncrement64(v32 + 3);
    v32 = (volatile signed __int64 *)v110;
    v33 = (volatile signed __int64 *)v111;
    v140 = -1LL;
  }
  if ( !v33 )
    v33 = v32;
  v146 = (struct DXGADAPTER *)v33;
  v147 = 0;
  v148 = 0LL;
  if ( v33 )
  {
    _InterlockedIncrement64(v33 + 3);
    v32 = (volatile signed __int64 *)v110;
    v145 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v110 + 2), v110);
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v35 = v111;
  if ( v34 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v111 + 2), v111);
  if ( *((_DWORD *)v35 + 40) != 1 )
  {
    v36 = a3;
    goto LABEL_44;
  }
  v70 = v35;
  v71 = v110;
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
    (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v136,
    v110,
    v70);
  if ( *((_DWORD *)v71 + 50) != 1 || *((_DWORD *)v111 + 50) != 1 )
  {
    v72 = -1073741130;
    goto LABEL_135;
  }
  v36 = a3;
  if ( a3 >= *(_DWORD *)(*((_QWORD *)v111 + 365) + 96LL) )
  {
    v72 = -1073741811;
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    goto LABEL_135;
  }
  if ( !DXGADAPTER::IsVSyncAvailable(v111, a3) )
  {
    v72 = -1071775738;
LABEL_135:
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v136);
    v57 = v72;
    goto LABEL_106;
  }
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v136);
LABEL_44:
  if ( v147 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v144, 0LL, 0LL);
  v37 = v146;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v146 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v146 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
      KeWaitForSingleObject((char *)v146 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v146, 0LL);
    v37 = v146;
  }
  v148 = 0LL;
  v147 = 1;
  if ( *((_DWORD *)v37 + 50) != 1 )
    goto LABEL_195;
  if ( v141 != v146 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v139, 0LL);
    if ( *((_DWORD *)v141 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v139);
LABEL_195:
      COREACCESS::Release((COREACCESS *)v144);
      v69 = -1073741130;
      goto LABEL_129;
    }
  }
  v40 = v110;
  v138 = 1;
  if ( !*((_QWORD *)v110 + 366) )
  {
    WdLogSingleEntry1(1LL, 7374LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7374LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v111;
  if ( !*((_QWORD *)v111 + 365) )
  {
    WdLogSingleEntry1(1LL, 7375LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7375LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 )
  {
    if ( *((_DWORD *)v114 + 152) != 1 )
    {
      v69 = -1073741130;
      goto LABEL_129;
    }
    v40 = v110;
    v41 = v111;
  }
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v105 = 0;
  if ( !*((_QWORD *)v41 + 365) )
  {
    WdLogSingleEntry1(1LL, 10280LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10280LL, 0LL, 0LL, 0LL, 0LL);
  }
  v42 = *((_QWORD *)v41 + 365);
  if ( !v42 )
    goto LABEL_128;
  if ( v36 >= *(_DWORD *)(v42 + 96) )
  {
    WdLogSingleEntry1(1LL, 6227LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6227LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = *(_QWORD *)(v42 + 128);
  v112 = 4000LL * v36;
  if ( !*(_BYTE *)(v43 + v112 + 760) )
    goto LABEL_128;
  if ( *((_QWORD *)v41 + 366) )
  {
    if ( v41 != v40 )
    {
      WdLogSingleEntry1(1LL, 7397LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter == pRenderAdapter",
        7397LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v44 = v36;
    if ( (*((_DWORD *)v40 + 698) & 0x10) != 0 )
    {
      if ( v36 >= 0x10 )
      {
LABEL_69:
        v106 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 366) + 736LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)v40 + 366) + 744LL),
               v36) )
        {
LABEL_70:
          v47 = *((_QWORD *)v40 + 366);
          v48 = *((_QWORD *)v14 + 8);
          v49 = *(_QWORD *)(v47 + 736);
          if ( v48 && *(_QWORD *)(v48 + 8LL * (unsigned int)(*(_DWORD *)v49 - 1) + 16) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v49 + 8) + 1064LL))(*(_QWORD *)(v47 + 744));
          goto LABEL_73;
        }
        v89 = *((_QWORD *)v40 + 366);
        if ( v114 )
        {
          v90 = *(_QWORD *)(v89 + 736);
          v91 = *(_QWORD *)(v90 + 8);
          LOBYTE(v90) = 1;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v91 + 560))(
                 *((_QWORD *)v114 + 100),
                 0LL,
                 v90,
                 v36) >= 0 )
          {
            v108 = 1;
            goto LABEL_70;
          }
        }
        else
        {
          LOBYTE(v46) = 1;
          if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v89 + 736) + 8LL)
                                                                       + 552LL))(
                 *(_QWORD *)(v89 + 744),
                 1LL,
                 v46,
                 v36) >= 0 )
          {
            v107 = 1;
            goto LABEL_70;
          }
        }
        DXGADAPTER::DecrementVSyncWaiter(v40, v36, v92);
LABEL_128:
        v69 = -1071775738;
LABEL_129:
        v57 = v69;
        goto LABEL_106;
      }
    }
    else
    {
      v44 = 0;
    }
    v45 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v40 + v44 + 738);
    v40 = v110;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      *(_DWORD *)Alertable = v45;
      *(_DWORD *)WaitMode = v44;
      McTemplateK0pqq_EtwWriteTransfer(v45, &VSyncWaiterChange, v30, v110, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
    }
    goto LABEL_69;
  }
  ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v41 + 365), v36);
LABEL_73:
  if ( v141 != v146 )
    COREACCESS::Release((COREACCESS *)v139);
  if ( !v147 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v144, 0LL, 0LL);
  v147 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v146 + 23) )
    DXGADAPTER::ReleaseCoreResource(v146, v148);
  v50 = 60;
  v148 = 0LL;
  v138 = 0;
  v103 = a7 || *(_BYTE *)(*((_QWORD *)v14 + 8) + 138LL);
  while ( 1 )
  {
    v51 = *((_QWORD *)v41 + 365);
    v52 = *(_QWORD *)(v51 + 16);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v52 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v52 + 168)) )
    {
      WdLogSingleEntry1(1LL, 7364LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceSharedOwner()", 7364LL, 0LL, 0LL, 0LL, 0LL);
    }
    memset(Object, 0, sizeof(Object));
    v53 = v113;
    if ( v113 )
    {
      if ( !Src )
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v57 = -1073741811;
LABEL_212:
        v58 = v105;
        goto LABEL_90;
      }
      memmove(Object, Src, 8LL * v113);
    }
    Object[v53] = (PVOID)(*(_QWORD *)(v51 + 128) + v112 + 904);
    v54 = v113;
    v55 = v113 + 1;
    if ( v113 + 1 > 0x40 )
    {
      WdLogSingleEntry1(1LL, 7394LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Count <= _countof(Objects)", 7394LL, 0LL, 0LL, 0LL, 0LL);
    }
    v56 = KeWaitForMultipleObjects(v55, Object, WaitAny, UserRequest, 0, 0, Timeout, &WaitBlockArray);
    v57 = v56;
    if ( (v56 < 0 || v56 > v54) && v56 != 258 )
      goto LABEL_212;
    v58 = v56;
    v105 = v56;
LABEL_90:
    --v50;
    v59 = *(_QWORD *)(*((_QWORD *)v41 + 365) + 128LL);
    v60 = *(_BYTE *)(v59 + v112 + 960) != 0;
    v61 = v103;
    if ( v60 || v103 || v57 != v113 )
      break;
    if ( !v50 )
      goto LABEL_215;
  }
  if ( v50 )
    goto LABEL_92;
LABEL_215:
  v59 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v111 + 1186);
  if ( (unsigned int)v59 < 2 )
  {
    Src = (void *)1;
    LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2073LL, 0LL, 0LL, 0LL, 1LL);
    v94 = v111;
    LODWORD(v112) = *((_DWORD *)v111 + 101);
    v59 = *((unsigned int *)v111 + 102);
    HIDWORD(v112) = *((_DWORD *)v111 + 102);
    if ( (unsigned int)dword_1C013F918 > 5 && tlgKeywordOn((__int64)&dword_1C013F918, 0x400000400000LL) )
    {
      v123 = *((unsigned __int8 *)v94 + 209);
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(1LL);
      v125 = *((_DWORD *)v94 + 754);
      v126 = *((unsigned __int8 *)v94 + 2870);
      v127 = LiveDumpWithWdLogs2;
      v116[0] = *((_WORD *)v94 + 1410);
      v130 = *((_QWORD *)v94 + 228);
      v131 = (void *)*((_QWORD *)v94 + 227);
      v128 = *((_DWORD *)v94 + 107);
      v129 = *((_DWORD *)v94 + 106);
      v120 = *((_DWORD *)v94 + 105);
      v121 = *((_DWORD *)v94 + 104);
      LODWORD(Timeout) = *((_DWORD *)v94 + 103);
      v132 = v112;
      v133 = 0x1000000LL;
      LOWORD(v113) = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v95,
        byte_1C00A7208,
        v96,
        v97,
        (__int64)&v113,
        (__int64)&v133,
        (__int64)&v132,
        (__int64)&Timeout,
        (__int64)&v121,
        (__int64)&v120,
        (__int64)&v129,
        (__int64)&v128,
        &v131,
        (__int64)&v130,
        (__int64)v116,
        (__int64)&v127,
        (__int64)&v126,
        (__int64)&v125,
        (__int64)&IsDebuggerPresent,
        (__int64)&v123);
    }
    v58 = v105;
    v61 = v103;
  }
LABEL_92:
  v62 = a3;
  v63 = v110;
  if ( v106 )
  {
    v64 = a3;
    if ( (*((_DWORD *)v110 + 698) & 0x10) == 0 )
    {
      v64 = 0;
      goto LABEL_95;
    }
    if ( a3 < 0x10 )
    {
LABEL_95:
      v65 = _InterlockedDecrement((volatile signed __int32 *)v110 + v64 + 738);
      v63 = v110;
      if ( v65 < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, v110, *((unsigned int *)v110 + v64 + 738), 0LL);
        v58 = v105;
        v61 = v103;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        *(_DWORD *)Alertablea = v65;
        LODWORD(WaitModea) = v64;
        McTemplateK0pqq_EtwWriteTransfer(v59, &VSyncWaiterChange, v61, v63, WaitModea, *(_QWORD *)Alertablea);
        v58 = v105;
        v61 = v103;
      }
      v62 = a3;
    }
  }
  if ( v107 )
  {
    v69 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v137, 0LL);
    if ( v69 >= 0 )
    {
      v98 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 366)
                                                                                               + 736LL)
                                                                                   + 8LL)
                                                                       + 552LL))(
              *(_QWORD *)(*((_QWORD *)v63 + 366) + 744LL),
              1LL,
              0LL,
              v62);
      goto LABEL_227;
    }
    goto LABEL_129;
  }
  if ( !v108 )
    goto LABEL_102;
  v57 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v137, 0LL);
  if ( v57 < 0 )
    goto LABEL_106;
  v59 = *((unsigned int *)v114 + 152);
  if ( (_DWORD)v59 == 1 )
  {
    v98 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v110 + 366)
                                                                                            + 736LL)
                                                                                + 8LL)
                                                                    + 560LL))(
            *((_QWORD *)v114 + 100),
            0LL,
            0LL,
            v62);
LABEL_227:
    v57 = v98;
  }
  v58 = v105;
  v61 = v103;
LABEL_102:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(WaitModea) = v60;
    McTemplateK0tt_EtwWriteTransfer(v59, &WaitForVerticalBlankEventInternal, v61, (unsigned __int8)v61, WaitModea);
    v58 = v105;
  }
  if ( v57 >= 0 && v58 )
    LODWORD(v31) = v58;
  else
LABEL_106:
    LODWORD(v31) = v57;
  if ( v138 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v137);
  if ( v146 )
  {
    if ( v147 )
      COREACCESS::Release((COREACCESS *)v144);
    v66 = (DXGGLOBAL **)v146;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v146 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
  }
  if ( v141 )
  {
    if ( v142 )
      COREACCESS::Release((COREACCESS *)v139);
    v67 = (DXGGLOBAL **)v141;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v67[2], (struct DXGADAPTER *)v67);
  }
  v20 = v115;
LABEL_120:
  if ( v114 && _InterlockedExchangeAdd64((volatile signed __int64 *)v114 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v114 + 2), v114);
LABEL_121:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v20);
LABEL_123:
  KeLeaveCriticalRegion();
  return (unsigned int)v31;
}
