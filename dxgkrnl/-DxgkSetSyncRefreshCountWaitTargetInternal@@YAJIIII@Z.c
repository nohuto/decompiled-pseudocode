/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0191990 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0007520 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C001B478 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001B5E4 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0041810 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C0045F18 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C006D53C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02B69E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C02BB070 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGPROCESS *v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edi
  __int64 v15; // r12
  int v16; // edx
  __int64 v17; // r12
  char *v18; // rcx
  int PairingAdapters; // eax
  __int64 v20; // r8
  __int64 v21; // r15
  volatile signed __int64 *v22; // rdi
  volatile signed __int64 *v23; // rsi
  signed __int64 v24; // rcx
  struct DXGADAPTER *v25; // rdi
  struct DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGADAPTER *v29; // rdi
  struct DXGADAPTER *v30; // rsi
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  ADAPTER_DISPLAY *v43; // r15
  unsigned int v44; // edi
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  struct DXGPROCESS *v49; // rsi
  __int64 v50; // rcx
  struct DXGPROCESS *v51; // rax
  unsigned int v52; // edi
  unsigned int v53; // r13d
  struct DXGADAPTER *v54; // rcx
  struct DXGADAPTER *v55; // rdi
  DXGGLOBAL **v56; // rcx
  DXGGLOBAL **v57; // rcx
  unsigned int v59; // r15d
  int v60; // esi
  int v61; // r15d
  struct DXGADAPTER *v62; // r8
  struct DXGADAPTER *v63; // rdi
  int v64; // r15d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v68; // r9d
  __int64 v69; // r12
  __int64 v70; // r15
  __int64 v71; // r12
  int v72; // edx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rax
  int v76; // r8d
  struct DXGTHREAD *v77; // rax
  struct _ETHREAD *v78; // rdi
  KSPIN_LOCK *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // edx
  unsigned int v82; // eax
  unsigned int v83; // edx
  ADAPTER_DISPLAY *v84; // r10
  int v85; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v87; // [rsp+28h] [rbp-D8h]
  char v88; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v89[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v90; // [rsp+54h] [rbp-ACh]
  char v91; // [rsp+58h] [rbp-A8h]
  char v92; // [rsp+59h] [rbp-A7h]
  char v93; // [rsp+5Ah] [rbp-A6h]
  struct DXGADAPTER *v94; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v95; // [rsp+68h] [rbp-98h]
  struct DXGADAPTER *v96; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v97[2]; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v98; // [rsp+80h] [rbp-80h] BYREF
  __int64 v99; // [rsp+88h] [rbp-78h]
  int v100; // [rsp+90h] [rbp-70h] BYREF
  int v101; // [rsp+94h] [rbp-6Ch] BYREF
  struct DXGDEVICE *v102; // [rsp+98h] [rbp-68h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v105; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v106[56]; // [rsp+B8h] [rbp-48h] BYREF
  char v107; // [rsp+F0h] [rbp-10h] BYREF
  char v108; // [rsp+F1h] [rbp-Fh]
  char v109[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v110; // [rsp+100h] [rbp+0h]
  struct DXGADAPTER *v111; // [rsp+108h] [rbp+8h]
  char v112; // [rsp+110h] [rbp+10h]
  __int64 v113; // [rsp+118h] [rbp+18h]
  char v114[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v115; // [rsp+140h] [rbp+40h]
  struct DXGADAPTER *v116; // [rsp+148h] [rbp+48h]
  char v117; // [rsp+150h] [rbp+50h]
  char *v118; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v95 = a4;
  v98 = 0LL;
  v5 = a3;
  v90 = a3;
  v97[0] = a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v10 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v10 )
        goto LABEL_4;
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v10 = v9;
  if ( !v9 )
  {
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
    return 3221225485LL;
  }
LABEL_4:
  if ( (*((_DWORD *)v10 + 106) & 4) != 0 )
  {
    v100 = 0;
    v101 = 0;
    v11 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*((_QWORD *)v10 + 11) + 224LL))(&v100, 0LL, &v101);
    if ( !v100 || v11 && !v101 )
      return 3221225659LL;
    if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v68 = *((_DWORD *)v10 + 68);
        if ( v68 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v68);
      }
      ExAcquirePushLockSharedEx((char *)v10 + 248, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v10 + 66);
    v14 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (*((_DWORD *)v10 + 106) & 0x100) == 0 )
    {
      if ( v14 < *((_DWORD *)v10 + 74) )
      {
        v15 = *((_QWORD *)v10 + 35) + 16LL * v14;
        if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v15 + 8) & 0x60) && (*(_DWORD *)(v15 + 8) & 0x2000) == 0 )
        {
          v16 = *(_DWORD *)(v15 + 8) & 0x1F;
          if ( v16 )
          {
            if ( v16 == 1 )
            {
              v17 = *(_QWORD *)v15;
              goto LABEL_20;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v17 = 0LL;
LABEL_20:
      v18 = (char *)v10 + 248;
      if ( !v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
        ExReleasePushLockSharedEx(v18, 0LL);
        KeLeaveCriticalRegion();
        LODWORD(v21) = -1073741811;
        WdLogSingleEntry2(3LL, v6, -1073741811LL);
        return (unsigned int)v21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24));
      _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
      ExReleasePushLockSharedEx(v18, 0LL);
      KeLeaveCriticalRegion();
      if ( v97[0] )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v102, v97[0], (struct _KTHREAD **)v10, &v98);
        if ( !v98 )
        {
          WdLogSingleEntry2(3LL, v17, v97[0]);
          if ( v102 && _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v102 + 2), v102);
          LODWORD(v21) = -1073741811;
          goto LABEL_102;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v98 + 8);
        if ( v102 && _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v102 + 2), v102);
      }
      v94 = 0LL;
      v96 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v17, v5, &v94, &v104, &v96, &v105, 0);
      v21 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry3(2LL, v17, v90, PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
          v17,
          v90,
          v21,
          0LL,
          0LL);
LABEL_101:
        if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
LABEL_102:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v17 + 16), (struct DXGADAPTER *)v17);
        return (unsigned int)v21;
      }
      v22 = (volatile signed __int64 *)v94;
      v23 = (volatile signed __int64 *)v96;
      if ( !v94 || !v96 )
      {
        WdLogSingleEntry1(1LL, 6996LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
          6996LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v98
        && (v22 != *(volatile signed __int64 **)(*((_QWORD *)v98 + 2) + 16LL)
         || v23 != *((volatile signed __int64 **)v98 + 235)) )
      {
        WdLogSingleEntry2(3LL, v17, v97[0]);
        LODWORD(v21) = -1073741811;
        goto LABEL_101;
      }
      v108 = 0;
      v111 = (struct DXGADAPTER *)v22;
      v112 = 0;
      v113 = 0LL;
      if ( v22 )
      {
        _InterlockedIncrement64(v22 + 3);
        v22 = (volatile signed __int64 *)v94;
        v23 = (volatile signed __int64 *)v96;
        v110 = -1LL;
      }
      if ( !v23 )
        v23 = v22;
      v116 = (struct DXGADAPTER *)v23;
      v117 = 0;
      v118 = 0LL;
      if ( v23 )
      {
        _InterlockedIncrement64(v23 + 3);
        v22 = (volatile signed __int64 *)v94;
        v115 = -1LL;
      }
      if ( _InterlockedExchangeAdd64(v22 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v94 + 2), v94);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v25 = v96;
      if ( v24 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v96 + 2), v96);
      if ( *((_DWORD *)v25 + 40) != 1 )
        goto LABEL_37;
      v62 = v25;
      v63 = v94;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v106,
        v94,
        v62);
      if ( *((_DWORD *)v63 + 50) == 1 && *((_DWORD *)v96 + 50) == 1 )
      {
        if ( v90 < *(_DWORD *)(*((_QWORD *)v96 + 365) + 96LL) )
        {
          if ( !DXGADAPTER::IsVSyncAvailable(v96, v90) )
          {
            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v106);
            v4 = -1071775738;
            goto LABEL_89;
          }
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v106);
LABEL_37:
          if ( v117 )
            WdLogSingleEntry5(0LL, 275LL, 4LL, v114, 0LL, 0LL);
          v26 = v116;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v27, (const EVENT_DESCRIPTOR *)"g", v28, 72);
              KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v116, 0LL);
            v26 = v116;
          }
          v118 = 0LL;
          v117 = 1;
          if ( *((_DWORD *)v26 + 50) != 1 )
            goto LABEL_165;
          if ( v111 != v116 )
          {
            COREACCESS::AcquireShared((COREACCESS *)v109, 0LL);
            if ( *((_DWORD *)v111 + 50) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v109);
LABEL_165:
              COREACCESS::Release((COREACCESS *)v114);
              v61 = -1073741130;
              goto LABEL_113;
            }
          }
          v29 = v94;
          v108 = 1;
          if ( !*((_QWORD *)v94 + 366) )
          {
            WdLogSingleEntry1(1LL, 7050LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pRenderAdapter->IsRenderAdapter()",
              7050LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v30 = v96;
          if ( !*((_QWORD *)v96 + 365) )
          {
            WdLogSingleEntry1(1LL, 7051LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              7051LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( v97[0] )
          {
            if ( *((_DWORD *)v98 + 152) != 1 )
            {
              v61 = -1073741130;
              goto LABEL_113;
            }
            v29 = v94;
            v30 = v96;
          }
          v91 = 0;
          v89[0] = 0;
          v92 = 0;
          v93 = 0;
          if ( !*((_QWORD *)v30 + 365) )
          {
            WdLogSingleEntry1(1LL, 10367LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
          }
          v31 = *((_QWORD *)v30 + 365);
          if ( !v31 )
            goto LABEL_112;
          v32 = v90;
          if ( v90 >= *(_DWORD *)(v31 + 96) )
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
            v32 = v90;
          }
          v33 = 4000 * v32;
          v99 = v32;
          v34 = *(_QWORD *)(v31 + 128);
          v103 = v33;
          if ( !*(_BYTE *)(v34 + v33 + 760) )
            goto LABEL_112;
          if ( !*((_QWORD *)v30 + 366) )
          {
            v53 = v90;
            v82 = DXGADAPTER::NumberOfVSyncWaiter(v29, v90);
            ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v84, v83, v95, v82, v89);
            ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v30 + 365), v53);
            goto LABEL_79;
          }
          if ( v30 != v29 )
          {
            WdLogSingleEntry1(1LL, 7073LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter == pRenderAdapter",
              7073LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_QWORD *)v97 = (char *)v29 + 2792;
          v35 = v90;
          if ( (*((_DWORD *)v29 + 698) & 0x10) != 0 )
          {
            if ( v90 >= 0x10 )
            {
LABEL_62:
              v37 = *((_QWORD *)v29 + 366);
              v91 = 1;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v37 + 736) + 8LL) + 544LL))(
                     *(_QWORD *)(v37 + 744),
                     v90) )
              {
LABEL_63:
                v39 = *((_QWORD *)v29 + 366);
                v40 = *((_QWORD *)v10 + 8);
                v41 = *(_QWORD *)(v39 + 736);
                if ( v40 && *(_QWORD *)(v40 + 8LL * (unsigned int)(*(_DWORD *)v41 - 1) + 16) )
                  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v41 + 8) + 1064LL))(*(_QWORD *)(v39 + 744));
                v42 = v90;
                v43 = (ADAPTER_DISPLAY *)*((_QWORD *)v30 + 365);
                if ( (**(_DWORD **)v97 & 0x10) != 0 )
                {
                  if ( v90 >= 0x10 )
                  {
                    v44 = 0;
                    goto LABEL_69;
                  }
                }
                else
                {
                  v42 = 0LL;
                }
                v44 = *((_DWORD *)v29 + (unsigned int)v42 + 738);
LABEL_69:
                v45 = *((_QWORD *)v43 + 16) + v103;
                v97[0] = v44;
                v46 = PsGetCurrentProcess(v42);
                v47 = PsGetProcessDxgProcess(v46);
                v49 = (struct DXGPROCESS *)v47;
                if ( !v47 || (v50 = *(_DWORD *)(v47 + 424) >> 7, (*(_DWORD *)(v47 + 424) & 0x80) != 0) )
                {
                  v77 = DXGTHREAD::GetCurrent();
                  if ( v77 )
                  {
                    v51 = (struct DXGPROCESS *)*((_QWORD *)v77 + 3);
                    if ( v51 )
                      goto LABEL_72;
                  }
                  else
                  {
                    v78 = KeGetCurrentThread();
                    v79 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
                    v51 = DXGGLOBAL::SearchDxgThreadList(v79, v78);
                    if ( v51 )
                    {
                      LOBYTE(v44) = v97[0];
                      goto LABEL_72;
                    }
                    WdLogSingleEntry1(2LL, 2923LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to find DXGPROCESS",
                      2923LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    LOBYTE(v44) = v97[0];
                  }
                }
                v51 = v49;
LABEL_72:
                v89[0] = 1;
                if ( *(_QWORD *)(v45 + 928) && (*((_DWORD *)v51 + 106) & 4) != 0 )
                {
                  if ( !*((_QWORD *)v43 + 56) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    {
                      v88 = v44;
                      v52 = v95;
                      McTemplateK0qqqqq_EtwWriteTransfer(
                        v50,
                        &EventDWMVsyncCountWait,
                        v48,
                        v95,
                        *(_DWORD *)(v45 + 940),
                        *(_BYTE *)(v45 + 944),
                        v88,
                        4);
                    }
                    else
                    {
                      v52 = v95;
                    }
                    v53 = v90;
                    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v43, v90, v52, v89);
LABEL_79:
                    if ( v111 != v116 )
                      COREACCESS::Release((COREACCESS *)v109);
                    if ( !v117 )
                      WdLogSingleEntry5(0LL, 275LL, 4LL, v114, 0LL, 0LL);
                    v117 = 0;
                    v54 = v116;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 23) )
                      DXGADAPTER::ReleaseCoreResource(v116, v118);
                    v118 = 0LL;
                    v108 = 0;
                    if ( !v89[0] || !v91 )
                    {
                      v55 = v94;
                      goto LABEL_87;
                    }
                    v55 = v94;
                    v59 = v53;
                    if ( (*((_DWORD *)v94 + 698) & 0x10) != 0 )
                    {
                      if ( v53 >= 0x10 )
                        goto LABEL_87;
                    }
                    else
                    {
                      v59 = 0;
                    }
                    v60 = _InterlockedDecrement((volatile signed __int32 *)v94 + v59 + 738);
                    v55 = v94;
                    if ( v60 < 0 )
                      WdLogSingleEntry5(0LL, 275LL, 37LL, v94, *((unsigned int *)v94 + v59 + 738), 0LL);
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                    {
                      LODWORD(v87) = v60;
                      LODWORD(Timeout) = v59;
                      McTemplateK0pqq_EtwWriteTransfer((__int64)v54, &VSyncWaiterChange, v48, v55, Timeout, v87);
                    }
LABEL_87:
                    if ( v92 )
                    {
                      v61 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v107, 0LL);
                      if ( v61 < 0 )
                        goto LABEL_113;
                      v85 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 366) + 736LL) + 8LL)
                                                                                       + 552LL))(
                              *(_QWORD *)(*((_QWORD *)v55 + 366) + 744LL),
                              1LL,
                              0LL,
                              v53);
                    }
                    else
                    {
                      if ( !v93 )
                        goto LABEL_89;
                      v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v107, 0LL);
                      if ( v4 < 0 || *((_DWORD *)v98 + 152) != 1 )
                        goto LABEL_89;
                      v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v94 + 366) + 736LL)
                                                                                                  + 8LL)
                                                                                      + 560LL))(
                              *((_QWORD *)v98 + 100),
                              0LL,
                              0LL,
                              v53);
                    }
                    v4 = v85;
                    goto LABEL_89;
                  }
                  v80 = 2920 * v99;
                  v81 = v95;
                  *(_DWORD *)(v45 + 936) = v95;
                  BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v43 + 56) + 8LL) + v80), v81);
                }
                v53 = v90;
                goto LABEL_79;
              }
              v73 = *((_QWORD *)v29 + 366);
              if ( v98 )
              {
                v74 = *(_QWORD *)(v73 + 736);
                v75 = *(_QWORD *)(v74 + 8);
                LOBYTE(v74) = 1;
                if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v75 + 560))(
                       *((_QWORD *)v98 + 100),
                       0LL,
                       v74,
                       v90) >= 0 )
                {
                  v93 = 1;
                  goto LABEL_63;
                }
              }
              else
              {
                LOBYTE(v38) = 1;
                if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v73 + 736) + 8LL)
                                                                             + 552LL))(
                       *(_QWORD *)(v73 + 744),
                       1LL,
                       v38,
                       v90) >= 0 )
                {
                  v92 = 1;
                  goto LABEL_63;
                }
              }
              DXGADAPTER::DecrementVSyncWaiter(v29, v90, v76);
LABEL_112:
              v61 = -1071775738;
LABEL_113:
              v4 = v61;
LABEL_89:
              LODWORD(v21) = v4;
              if ( v108 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v107);
              if ( v116 )
              {
                if ( v117 )
                  COREACCESS::Release((COREACCESS *)v114);
                v56 = (DXGGLOBAL **)v116;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v56[2], (struct DXGADAPTER *)v56);
              }
              if ( v111 )
              {
                if ( v112 )
                  COREACCESS::Release((COREACCESS *)v109);
                v57 = (DXGGLOBAL **)v111;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v111 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v57[2], (struct DXGADAPTER *)v57);
              }
              goto LABEL_101;
            }
          }
          else
          {
            v35 = 0;
          }
          v36 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v29 + v35 + 738);
          v29 = v94;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            LODWORD(v87) = v36;
            LODWORD(Timeout) = v35;
            McTemplateK0pqq_EtwWriteTransfer(v36, &VSyncWaiterChange, v20, v94, Timeout, v87);
          }
          goto LABEL_62;
        }
        v64 = -1073741811;
        WdLogSingleEntry2(3LL, v90, -1073741811LL);
      }
      else
      {
        v64 = -1073741130;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v106);
      v4 = v64;
      goto LABEL_89;
    }
    v69 = *((_QWORD *)v10 + 76);
    v70 = v69 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v69 + 248));
    if ( v14 < *(_DWORD *)(v69 + 296) )
    {
      v71 = 16LL * v14 + *(_QWORD *)(v69 + 280);
      if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v71 + 8) & 0x60) && (*(_DWORD *)(v71 + 8) & 0x2000) == 0 )
      {
        v72 = *(_DWORD *)(v71 + 8) & 0x1F;
        if ( v72 )
        {
          if ( v72 == 1 )
          {
            v17 = *(_QWORD *)v71;
            goto LABEL_142;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_142:
    _InterlockedDecrement((volatile signed __int32 *)(v70 + 16));
    ExReleasePushLockSharedEx(v70, 0LL);
    KeLeaveCriticalRegion();
    v5 = v90;
    goto LABEL_20;
  }
  WdLogSingleEntry1(3LL, -1073741790LL);
  return 3221225506LL;
}
