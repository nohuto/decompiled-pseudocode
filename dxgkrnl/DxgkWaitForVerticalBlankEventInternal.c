/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C018EE20 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C01D9E00 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C001B478 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001B5E4 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     __chkstk_0 @ 0x1C00270C0 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355555@Z @ 0x1C0045080 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C004686C (McTemplateK0tt_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C017C498 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C01C68E8 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02B69E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v86; // rdx
  __int64 v87; // rcx
  DXGSESSIONMGR *v88; // rdi
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rax
  int v95; // r8d
  int LiveDumpWithWdLogs2; // r15d
  struct DXGADAPTER *v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // eax
  KPROCESSOR_MODE WaitMode[8]; // [rsp+20h] [rbp-100h]
  __int64 WaitModea; // [rsp+20h] [rbp-100h]
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-F8h]
  BOOLEAN Alertablea[8]; // [rsp+28h] [rbp-F8h]
  bool v106; // [rsp+A0h] [rbp-80h]
  NTSTATUS v108; // [rsp+A4h] [rbp-7Ch]
  char v109; // [rsp+A8h] [rbp-78h]
  char v110; // [rsp+A9h] [rbp-77h]
  char v111; // [rsp+AAh] [rbp-76h]
  struct DXGADAPTER *v113; // [rsp+B0h] [rbp-70h] BYREF
  struct DXGADAPTER *v114; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v115; // [rsp+C0h] [rbp-60h]
  unsigned int v116; // [rsp+C8h] [rbp-58h] BYREF
  struct DXGDEVICE *v117; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGADAPTER *v118; // [rsp+D8h] [rbp-48h]
  _WORD v119[2]; // [rsp+E0h] [rbp-40h] BYREF
  int v120; // [rsp+E4h] [rbp-3Ch] BYREF
  struct DXGDEVICE *v121; // [rsp+E8h] [rbp-38h] BYREF
  void *Src; // [rsp+F0h] [rbp-30h]
  int v123; // [rsp+F8h] [rbp-28h] BYREF
  int v124; // [rsp+FCh] [rbp-24h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+100h] [rbp-20h] BYREF
  int v126; // [rsp+108h] [rbp-18h] BYREF
  int IsDebuggerPresent; // [rsp+10Ch] [rbp-14h] BYREF
  int v128; // [rsp+110h] [rbp-10h] BYREF
  int v129; // [rsp+114h] [rbp-Ch] BYREF
  int v130; // [rsp+118h] [rbp-8h] BYREF
  int v131; // [rsp+11Ch] [rbp-4h] BYREF
  int v132; // [rsp+120h] [rbp+0h] BYREF
  __int64 v133; // [rsp+128h] [rbp+8h] BYREF
  void *v134; // [rsp+130h] [rbp+10h] BYREF
  __int64 v135; // [rsp+138h] [rbp+18h] BYREF
  __int64 v136; // [rsp+140h] [rbp+20h] BYREF
  unsigned __int64 v137; // [rsp+148h] [rbp+28h] BYREF
  unsigned __int64 v138; // [rsp+150h] [rbp+30h] BYREF
  _BYTE v139[56]; // [rsp+158h] [rbp+38h] BYREF
  char v140; // [rsp+190h] [rbp+70h] BYREF
  char v141; // [rsp+191h] [rbp+71h]
  _BYTE v142[8]; // [rsp+198h] [rbp+78h] BYREF
  __int64 v143; // [rsp+1A0h] [rbp+80h]
  struct DXGADAPTER *v144; // [rsp+1A8h] [rbp+88h]
  char v145; // [rsp+1B0h] [rbp+90h]
  __int64 v146; // [rsp+1B8h] [rbp+98h]
  _BYTE v147[8]; // [rsp+1D8h] [rbp+B8h] BYREF
  __int64 v148; // [rsp+1E0h] [rbp+C0h]
  struct DXGADAPTER *v149; // [rsp+1E8h] [rbp+C8h]
  char v150; // [rsp+1F0h] [rbp+D0h]
  char *v151; // [rsp+1F8h] [rbp+D8h]
  PVOID Object[64]; // [rsp+220h] [rbp+100h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+420h] [rbp+300h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  Src = a5;
  v9 = a2;
  Timeout = a6;
  v116 = a4;
  v10 = (unsigned int)a1;
  v117 = 0LL;
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
        McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v78);
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
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v20 = 0LL;
LABEL_163:
    _InterlockedDecrement((volatile signed __int32 *)(v80 + 16));
    v118 = v20;
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
          v118 = v20;
          goto LABEL_19;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v118 = 0LL;
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
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v121, v9, (struct _KTHREAD **)v14, &v117);
    if ( !v117 )
    {
      WdLogSingleEntry2(3LL, v20, v9);
      if ( v121 && _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v121 + 2), v121);
      LODWORD(v31) = -1073741811;
      goto LABEL_121;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v117 + 8);
    if ( v121 )
    {
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v22 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v121 + 2), v121);
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
    v120 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v27 + 224))(0LL, 0LL, &v120) && !v120 )
    {
      if ( !*((_BYTE *)v20 + 209) )
        goto LABEL_139;
      v88 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v88 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v87, v86, v89, v90);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v88, CurrentProcessSessionId);
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
  v113 = 0LL;
  v114 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v20, a3, &v113, &v137, &v114, &v138, 0);
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
  v32 = (volatile signed __int64 *)v113;
  v33 = (volatile signed __int64 *)v114;
  if ( !v113 || !v114 )
  {
    WdLogSingleEntry1(1LL, 7317LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7317LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v117
    && (v32 != *(volatile signed __int64 **)(*((_QWORD *)v117 + 2) + 16LL)
     || v33 != *((volatile signed __int64 **)v117 + 235)) )
  {
    WdLogSingleEntry2(3LL, v20, a2);
    LODWORD(v31) = -1073741811;
    goto LABEL_120;
  }
  v141 = 0;
  v144 = (struct DXGADAPTER *)v32;
  v145 = 0;
  v146 = 0LL;
  if ( v32 )
  {
    _InterlockedIncrement64(v32 + 3);
    v32 = (volatile signed __int64 *)v113;
    v33 = (volatile signed __int64 *)v114;
    v143 = -1LL;
  }
  if ( !v33 )
    v33 = v32;
  v149 = (struct DXGADAPTER *)v33;
  v150 = 0;
  v151 = 0LL;
  if ( v33 )
  {
    _InterlockedIncrement64(v33 + 3);
    v32 = (volatile signed __int64 *)v113;
    v148 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v113 + 2), v113);
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v114 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v35 = v114;
  if ( v34 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v114 + 2), v114);
  if ( *((_DWORD *)v35 + 40) != 1 )
  {
    v36 = a3;
    goto LABEL_44;
  }
  v70 = v35;
  v71 = v113;
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
    (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v139,
    v113,
    v70);
  if ( *((_DWORD *)v71 + 50) != 1 || *((_DWORD *)v114 + 50) != 1 )
  {
    v72 = -1073741130;
    goto LABEL_135;
  }
  v36 = a3;
  if ( a3 >= *(_DWORD *)(*((_QWORD *)v114 + 365) + 96LL) )
  {
    v72 = -1073741811;
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    goto LABEL_135;
  }
  if ( !DXGADAPTER::IsVSyncAvailable(v114, a3) )
  {
    v72 = -1071775738;
LABEL_135:
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v139);
    v57 = v72;
    goto LABEL_106;
  }
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v139);
LABEL_44:
  if ( v150 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v147, 0LL, 0LL);
  v37 = v149;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v149 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v149 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (const EVENT_DESCRIPTOR *)"g", v39, 72);
      KeWaitForSingleObject((char *)v149 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v149, 0LL);
    v37 = v149;
  }
  v151 = 0LL;
  v150 = 1;
  if ( *((_DWORD *)v37 + 50) != 1 )
    goto LABEL_195;
  if ( v144 != v149 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v142, 0LL);
    if ( *((_DWORD *)v144 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v142);
LABEL_195:
      COREACCESS::Release((COREACCESS *)v147);
      v69 = -1073741130;
      goto LABEL_129;
    }
  }
  v40 = v113;
  v141 = 1;
  if ( !*((_QWORD *)v113 + 366) )
  {
    WdLogSingleEntry1(1LL, 7371LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7371LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v114;
  if ( !*((_QWORD *)v114 + 365) )
  {
    WdLogSingleEntry1(1LL, 7372LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7372LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 )
  {
    if ( *((_DWORD *)v117 + 152) != 1 )
    {
      v69 = -1073741130;
      goto LABEL_129;
    }
    v40 = v113;
    v41 = v114;
  }
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v108 = 0;
  if ( !*((_QWORD *)v41 + 365) )
  {
    WdLogSingleEntry1(1LL, 10367LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
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
  v115 = 4000LL * v36;
  if ( !*(_BYTE *)(v43 + v115 + 760) )
    goto LABEL_128;
  if ( *((_QWORD *)v41 + 366) )
  {
    if ( v41 != v40 )
    {
      WdLogSingleEntry1(1LL, 7394LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter == pRenderAdapter",
        7394LL,
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
        v109 = 1;
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
        v92 = *((_QWORD *)v40 + 366);
        if ( v117 )
        {
          v93 = *(_QWORD *)(v92 + 736);
          v94 = *(_QWORD *)(v93 + 8);
          LOBYTE(v93) = 1;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v94 + 560))(
                 *((_QWORD *)v117 + 100),
                 0LL,
                 v93,
                 v36) >= 0 )
          {
            v111 = 1;
            goto LABEL_70;
          }
        }
        else
        {
          LOBYTE(v46) = 1;
          if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v92 + 736) + 8LL)
                                                                       + 552LL))(
                 *(_QWORD *)(v92 + 744),
                 1LL,
                 v46,
                 v36) >= 0 )
          {
            v110 = 1;
            goto LABEL_70;
          }
        }
        DXGADAPTER::DecrementVSyncWaiter(v40, v36, v95);
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
    v40 = v113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      *(_DWORD *)Alertable = v45;
      *(_DWORD *)WaitMode = v44;
      McTemplateK0pqq_EtwWriteTransfer(v45, &VSyncWaiterChange, v30, v113, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
    }
    goto LABEL_69;
  }
  ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v41 + 365), v36);
LABEL_73:
  if ( v144 != v149 )
    COREACCESS::Release((COREACCESS *)v142);
  if ( !v150 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v147, 0LL, 0LL);
  v150 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v149 + 23) )
    DXGADAPTER::ReleaseCoreResource(v149, v151);
  v50 = 60;
  v151 = 0LL;
  v141 = 0;
  v106 = a7 || *(_BYTE *)(*((_QWORD *)v14 + 8) + 138LL);
  while ( 1 )
  {
    v51 = *((_QWORD *)v41 + 365);
    v52 = *(_QWORD *)(v51 + 16);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v52 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v52 + 168)) )
    {
      WdLogSingleEntry1(1LL, 7357LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceSharedOwner()", 7357LL, 0LL, 0LL, 0LL, 0LL);
    }
    memset(Object, 0, sizeof(Object));
    v53 = v116;
    if ( v116 )
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
        v58 = v108;
        goto LABEL_90;
      }
      memmove(Object, Src, 8LL * v116);
    }
    Object[v53] = (PVOID)(*(_QWORD *)(v51 + 128) + v115 + 904);
    v54 = v116;
    v55 = v116 + 1;
    if ( v116 + 1 > 0x40 )
    {
      WdLogSingleEntry1(1LL, 7387LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Count <= _countof(Objects)", 7387LL, 0LL, 0LL, 0LL, 0LL);
    }
    v56 = KeWaitForMultipleObjects(v55, Object, WaitAny, UserRequest, 0, 0, Timeout, &WaitBlockArray);
    v57 = v56;
    if ( (v56 < 0 || v56 > v54) && v56 != 258 )
      goto LABEL_212;
    v58 = v56;
    v108 = v56;
LABEL_90:
    --v50;
    v59 = *(_QWORD *)(*((_QWORD *)v41 + 365) + 128LL);
    v60 = *(_BYTE *)(v59 + v115 + 960) != 0;
    v61 = v106;
    if ( v60 || v106 || v57 != v116 )
      break;
    if ( !v50 )
      goto LABEL_215;
  }
  if ( v50 )
    goto LABEL_92;
LABEL_215:
  v59 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v114 + 1186);
  if ( (unsigned int)v59 < 2 )
  {
    Src = (void *)1;
    LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2073LL, 0LL, 0LL, 0LL, 1LL);
    v97 = v114;
    LODWORD(v115) = *((_DWORD *)v114 + 101);
    v59 = *((unsigned int *)v114 + 102);
    HIDWORD(v115) = *((_DWORD *)v114 + 102);
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000400000LL) )
    {
      v126 = *((unsigned __int8 *)v97 + 209);
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(1LL);
      v128 = *((_DWORD *)v97 + 754);
      v129 = *((unsigned __int8 *)v97 + 2870);
      v130 = LiveDumpWithWdLogs2;
      v119[0] = *((_WORD *)v97 + 1410);
      v133 = *((_QWORD *)v97 + 228);
      v134 = (void *)*((_QWORD *)v97 + 227);
      v131 = *((_DWORD *)v97 + 107);
      v132 = *((_DWORD *)v97 + 106);
      v123 = *((_DWORD *)v97 + 105);
      v124 = *((_DWORD *)v97 + 104);
      LODWORD(Timeout) = *((_DWORD *)v97 + 103);
      v135 = v115;
      v136 = 0x1000000LL;
      LOWORD(v116) = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v98,
        byte_1C009DE53,
        v99,
        v100,
        (__int64)&v116,
        (__int64)&v136,
        (__int64)&v135,
        (__int64)&Timeout,
        (__int64)&v124,
        (__int64)&v123,
        (__int64)&v132,
        (__int64)&v131,
        &v134,
        (__int64)&v133,
        (__int64)v119,
        (__int64)&v130,
        (__int64)&v129,
        (__int64)&v128,
        (__int64)&IsDebuggerPresent,
        (__int64)&v126);
    }
    v58 = v108;
    v61 = v106;
  }
LABEL_92:
  v62 = a3;
  v63 = v113;
  if ( v109 )
  {
    v64 = a3;
    if ( (*((_DWORD *)v113 + 698) & 0x10) == 0 )
    {
      v64 = 0;
      goto LABEL_95;
    }
    if ( a3 < 0x10 )
    {
LABEL_95:
      v65 = _InterlockedDecrement((volatile signed __int32 *)v113 + v64 + 738);
      v63 = v113;
      if ( v65 < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, v113, *((unsigned int *)v113 + v64 + 738), 0LL);
        v58 = v108;
        v61 = v106;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        *(_DWORD *)Alertablea = v65;
        LODWORD(WaitModea) = v64;
        McTemplateK0pqq_EtwWriteTransfer(v59, &VSyncWaiterChange, v61, v63, WaitModea, *(_QWORD *)Alertablea);
        v58 = v108;
        v61 = v106;
      }
      v62 = a3;
    }
  }
  if ( v110 )
  {
    v69 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v140, 0LL);
    if ( v69 >= 0 )
    {
      v101 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 366)
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
  if ( !v111 )
    goto LABEL_102;
  v57 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v140, 0LL);
  if ( v57 < 0 )
    goto LABEL_106;
  v59 = *((unsigned int *)v117 + 152);
  if ( (_DWORD)v59 == 1 )
  {
    v101 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v113 + 366)
                                                                                             + 736LL)
                                                                                 + 8LL)
                                                                     + 560LL))(
             *((_QWORD *)v117 + 100),
             0LL,
             0LL,
             v62);
LABEL_227:
    v57 = v101;
  }
  v58 = v108;
  v61 = v106;
LABEL_102:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(WaitModea) = v60;
    McTemplateK0tt_EtwWriteTransfer(v59, &WaitForVerticalBlankEventInternal, v61, (unsigned __int8)v61, WaitModea);
    v58 = v108;
  }
  if ( v57 >= 0 && v58 )
    LODWORD(v31) = v58;
  else
LABEL_106:
    LODWORD(v31) = v57;
  if ( v141 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v140);
  if ( v149 )
  {
    if ( v150 )
      COREACCESS::Release((COREACCESS *)v147);
    v66 = (DXGGLOBAL **)v149;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v149 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
  }
  if ( v144 )
  {
    if ( v145 )
      COREACCESS::Release((COREACCESS *)v142);
    v67 = (DXGGLOBAL **)v144;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v144 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v67[2], (struct DXGADAPTER *)v67);
  }
  v20 = v118;
LABEL_120:
  if ( v117 && _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
LABEL_121:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v20);
LABEL_123:
  KeLeaveCriticalRegion();
  return (unsigned int)v31;
}
