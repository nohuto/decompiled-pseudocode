/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C014DA60
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C014D970 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C016B8C0 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000195C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000DA1C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0025AD8 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0025BA4 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00DF460 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00E0958 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0211808 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0215BE0 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C0284EFC (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _KEVENT **a5)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v6; // r13
  int v7; // esi
  __int64 v8; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  signed __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int PairingAdapters; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  volatile signed __int64 *v44; // rdi
  volatile signed __int64 *v45; // rsi
  signed __int64 v46; // rcx
  struct DXGADAPTER *v47; // rdi
  struct DXGADAPTER *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  DXGADAPTER *v51; // rsi
  char *v52; // rdx
  struct DXGADAPTER *v53; // r12
  ADAPTER_DISPLAY **v54; // r8
  ADAPTER_DISPLAY *v55; // r13
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // r13d
  unsigned int v60; // ecx
  char v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rcx
  ADAPTER_DISPLAY *v64; // rcx
  __int64 v65; // rax
  union _LARGE_INTEGER v66; // rax
  unsigned int v67; // r8d
  DXGADAPTER *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rsi
  DXGGLOBAL **v71; // rcx
  DXGGLOBAL **v72; // rcx
  BLTQUEUE **v74; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v79; // rax
  int v80; // r9d
  __int64 v81; // r15
  __int64 v82; // r9
  int v83; // edx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  struct DXGTHREAD *v88; // rax
  DXGSESSIONMGR *v89; // rdi
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  struct DXGADAPTER *v94; // r8
  DXGADAPTER *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  unsigned int v107; // eax
  _QWORD *v108; // rax
  DXGADAPTER *v109; // rcx
  int v110; // eax
  char v111; // [rsp+40h] [rbp-C0h]
  char v112; // [rsp+41h] [rbp-BFh]
  unsigned int v113; // [rsp+44h] [rbp-BCh]
  unsigned int v114; // [rsp+44h] [rbp-BCh]
  DXGADAPTER *v115; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v116; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v117; // [rsp+58h] [rbp-A8h]
  char *v118; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v119; // [rsp+68h] [rbp-98h] BYREF
  __int64 v120; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY **v121; // [rsp+78h] [rbp-88h]
  int v122; // [rsp+80h] [rbp-80h] BYREF
  struct DXGDEVICE *v123; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v124; // [rsp+90h] [rbp-70h]
  struct _KEVENT **v125; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v127; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v128; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v129[56]; // [rsp+B8h] [rbp-48h] BYREF
  char v130; // [rsp+F0h] [rbp-10h] BYREF
  char v131; // [rsp+F1h] [rbp-Fh]
  char v132[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v133; // [rsp+100h] [rbp+0h]
  struct DXGADAPTER *v134; // [rsp+108h] [rbp+8h]
  char v135; // [rsp+110h] [rbp+10h]
  __int64 v136; // [rsp+118h] [rbp+18h]
  char v137[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v138; // [rsp+140h] [rbp+40h]
  struct DXGADAPTER *v139; // [rsp+148h] [rbp+48h]
  char v140; // [rsp+150h] [rbp+50h]
  char *v141; // [rsp+158h] [rbp+58h]

  SessionDataForSpecifiedSession = 0LL;
  v6 = (unsigned int)a3;
  v7 = a4;
  v117 = a3;
  v125 = a5;
  v119 = 0LL;
  v124 = a4;
  v113 = a2;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v14;
    if ( !v14 )
    {
      v76 = WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v43) = -1073741811;
      *(_QWORD *)(v76 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v76);
      return (unsigned int)v43;
    }
  }
  if ( !v7 || *(_BYTE *)(v15 + 346) || g_OSTestSigningEnabled && (*(_BYTE *)(v15 + 348) & 2) != 0 )
  {
    KeEnterCriticalRegion();
    if ( !(_DWORD)v8 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      Global = DXGGLOBAL::GetGlobal(v17, v16);
      LODWORD(v43) = REMOTE_VSYNC::WaitForVSync((BLTQUEUE **)Global + 108);
LABEL_102:
      KeLeaveCriticalRegion();
      return (unsigned int)v43;
    }
    if ( v15 != -208 && *(struct _KTHREAD **)(v15 + 216) == KeGetCurrentThread() )
    {
      v79 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v79 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v79);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v80 = *(_DWORD *)(v15 + 232);
        if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v80);
      }
      ExAcquirePushLockSharedEx(v15 + 208, 0LL);
    }
    v20 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v15 + 347) & 0x20) == 0 )
    {
      if ( v20 < *(_DWORD *)(v15 + 256) )
      {
        v21 = *(_QWORD *)(v15 + 240);
        v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
        if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          v23 = v22 & 0x1F;
          if ( (_BYTE)v23 == 1 )
          {
            v24 = *(_QWORD *)(v21 + 16LL * v20);
            goto LABEL_19;
          }
          v25 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v23);
          *(_QWORD *)(v25 + 24) = 316LL;
          WdLogEvent5_WdError(v25);
        }
      }
      v24 = 0LL;
LABEL_19:
      if ( v24 )
        _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
      ExReleasePushLockSharedEx(v15 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v24 )
      {
        v86 = WdLogNewEntry5_WdWarning(v27, v26, v28);
        LODWORD(v43) = -1073741811;
        *(_QWORD *)(v86 + 24) = v8;
        *(_QWORD *)(v86 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v86);
        goto LABEL_102;
      }
      if ( v113 )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v123, v113, (struct _KTHREAD **)v15, &v119);
        if ( !v119 )
        {
          v87 = WdLogNewEntry5_WdWarning(v27, v26, v28);
          *(_QWORD *)(v87 + 24) = v24;
          *(_QWORD *)(v87 + 32) = v113;
          WdLogEvent5_WdWarning(v87);
          if ( v123 && _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
          LODWORD(v43) = -1073741811;
          goto LABEL_100;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v119 + 8);
        if ( v123 )
        {
          v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v27 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
        }
      }
      v30 = PsGetCurrentProcess(v27, v26, v28, v29);
      v31 = PsGetProcessDxgProcess(v30);
      v34 = v31;
      if ( (!v31 || (*(_BYTE *)(v31 + 347) & 0x10) != 0)
        && (v88 = DXGTHREAD::GetCurrent(v33, v32)) != 0LL
        && (v35 = *((_QWORD *)v88 + 1)) != 0
        || (v35 = v34) != 0 )
      {
        v36 = *(_QWORD *)(v35 + 88);
        if ( v36 )
        {
          v122 = 0;
          if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v36 + 224))(0LL, 0LL, &v122) )
          {
            if ( !v122 )
            {
              if ( !*(_BYTE *)(v24 + 209) )
                goto LABEL_109;
              v89 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v38, v37) + 102);
              if ( v89 )
              {
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38, v37);
                SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                   v89,
                                                   CurrentProcessSessionId);
              }
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4730) )
                v74 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal(v38, v37) + 936);
              else
LABEL_109:
                v74 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal(v38, v37) + 864);
              LODWORD(v43) = REMOTE_VSYNC::WaitForVSync(v74);
              goto LABEL_99;
            }
          }
        }
      }
      v115 = 0LL;
      v116 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(
                          (struct DXGADAPTER *)v24,
                          (unsigned int)v6,
                          &v115,
                          &v127,
                          &v116,
                          &v128,
                          0);
      v43 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
        v91[3] = v24;
        v91[4] = v6;
        v91[5] = v43;
        WdLogEvent5_WdError(v91);
LABEL_99:
        if ( v119 && _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v119 + 2), v119);
LABEL_100:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v24 + 16), (struct DXGADAPTER *)v24);
        goto LABEL_102;
      }
      v44 = (volatile signed __int64 *)v115;
      v45 = (volatile signed __int64 *)v116;
      if ( !v115 || !v116 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v92 + 24) = 6799LL;
        WdLogEvent5_WdAssertion(v92);
      }
      if ( v119
        && (v44 != *(volatile signed __int64 **)(*((_QWORD *)v119 + 2) + 16LL)
         || v45 != *((volatile signed __int64 **)v119 + 231)) )
      {
        v93 = WdLogNewEntry5_WdWarning(v119, v40, v42);
        *(_QWORD *)(v93 + 24) = v24;
        *(_QWORD *)(v93 + 32) = v113;
        WdLogEvent5_WdWarning(v93);
        LODWORD(v43) = -1073741811;
        goto LABEL_99;
      }
      v131 = 0;
      v134 = (struct DXGADAPTER *)v44;
      v135 = 0;
      v136 = 0LL;
      if ( v44 )
      {
        _InterlockedIncrement64(v44 + 3);
        v44 = (volatile signed __int64 *)v115;
        v45 = (volatile signed __int64 *)v116;
        v133 = -1LL;
      }
      if ( !v45 )
        v45 = v44;
      v139 = (struct DXGADAPTER *)v45;
      v140 = 0;
      v141 = 0LL;
      if ( v45 )
      {
        _InterlockedIncrement64(v45 + 3);
        v44 = (volatile signed __int64 *)v115;
        v138 = -1LL;
      }
      if ( _InterlockedExchangeAdd64(v44 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
      v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v47 = v116;
      if ( v46 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v116 + 2), v116);
      if ( *((_DWORD *)v47 + 40) != 1 )
      {
LABEL_43:
        if ( v140 )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v40);
          v99[5] = v137;
          v99[3] = 275LL;
          v99[4] = 4LL;
          v99[6] = 0LL;
          v99[7] = 0LL;
          WdLogEvent5_WdCriticalError(v99);
        }
        v48 = v139;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v139 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v139 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v49, &EventBlockThread, v50, 72);
            KeWaitForSingleObject((char *)v139 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v139, 0LL);
          v48 = v139;
        }
        v141 = 0LL;
        v140 = 1;
        if ( *((_DWORD *)v48 + 50) != 1 )
          goto LABEL_170;
        if ( v134 != v139 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v132, 0LL);
          v48 = (struct DXGADAPTER *)*((unsigned int *)v134 + 50);
          if ( (_DWORD)v48 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v132);
LABEL_170:
            COREACCESS::Release((COREACCESS *)v137);
LABEL_171:
            LODWORD(v43) = -1073741130;
            goto LABEL_87;
          }
        }
        v51 = v115;
        LODWORD(v43) = 0;
        v131 = 1;
        v52 = (char *)v115 + 2704;
        v118 = (char *)v115 + 2704;
        if ( !*((_QWORD *)v115 + 338) )
        {
          v100 = WdLogNewEntry5_WdAssertion(v48, v52);
          *(_QWORD *)(v100 + 24) = 6853LL;
          WdLogEvent5_WdAssertion(v100);
          v52 = v118;
        }
        v53 = v116;
        v54 = (ADAPTER_DISPLAY **)((char *)v116 + 2696);
        v121 = (ADAPTER_DISPLAY **)((char *)v116 + 2696);
        if ( !*((_QWORD *)v116 + 337) )
        {
          v101 = WdLogNewEntry5_WdAssertion(v48, v52);
          *(_QWORD *)(v101 + 24) = 6854LL;
          WdLogEvent5_WdAssertion(v101);
          v54 = v121;
          v52 = v118;
        }
        if ( v113 )
        {
          v48 = (struct DXGADAPTER *)*((unsigned int *)v119 + 144);
          if ( (_DWORD)v48 != 1 )
            goto LABEL_171;
          v51 = v115;
          v53 = v116;
        }
        v55 = *v54;
        v111 = 0;
        v112 = 0;
        v114 = 0;
        if ( !*v54 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v48, v52);
          *(_QWORD *)(v102 + 24) = 9659LL;
          WdLogEvent5_WdAssertion(v102);
          v54 = v121;
          v52 = v118;
          v55 = *v121;
          if ( !*v121 )
            goto LABEL_104;
        }
        v56 = v117;
        if ( v117 >= *((_DWORD *)v55 + 20) )
        {
          v103 = WdLogNewEntry5_WdAssertion(v48, v52);
          *(_QWORD *)(v103 + 24) = 6068LL;
          WdLogEvent5_WdAssertion(v103);
          v54 = v121;
          v56 = v117;
          v52 = v118;
        }
        v57 = 3968 * v56;
        v58 = *((_QWORD *)v55 + 14);
        v120 = v57;
        if ( !*(_BYTE *)(v58 + v57 + 720) )
          goto LABEL_104;
        if ( !*((_QWORD *)v53 + 338) )
        {
          v59 = v117;
          ADAPTER_DISPLAY::ControlVSyncAdapter(*v54, v117);
          v61 = 0;
          goto LABEL_66;
        }
        if ( v53 != v51 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v57, v52);
          *(_QWORD *)(v104 + 24) = 6876LL;
          WdLogEvent5_WdAssertion(v104);
          v52 = v118;
        }
        v59 = v117;
        v60 = v117;
        if ( (*((_DWORD *)v51 + 642) & 0x10) != 0 )
        {
          if ( v117 >= 0x10 )
            goto LABEL_65;
        }
        else
        {
          v60 = 0;
        }
        _InterlockedIncrement((volatile signed __int32 *)v51 + v60 + 682);
        v51 = v115;
LABEL_65:
        v61 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v52 + 616LL) + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*(_QWORD *)v52 + 624LL),
               v59) )
        {
          goto LABEL_66;
        }
        v105 = *(_QWORD *)v118;
        if ( v119 )
        {
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v105 + 616) + 8LL)
                                                                      + 560LL))(
                 *((_QWORD *)v119 + 96),
                 0LL,
                 1LL,
                 v59) >= 0 )
          {
            v112 = 1;
            goto LABEL_66;
          }
          goto LABEL_181;
        }
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v105 + 616) + 8LL) + 552LL))(
               *(_QWORD *)(v105 + 624),
               1LL,
               1LL,
               v59) < 0 )
        {
LABEL_181:
          DXGADAPTER::DecrementVSyncWaiter(v51, v59);
LABEL_104:
          LODWORD(v43) = -1071775738;
LABEL_87:
          if ( v131 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v130);
          if ( v139 )
          {
            if ( v140 )
              COREACCESS::Release((COREACCESS *)v137);
            v71 = (DXGGLOBAL **)v139;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v71[2], (struct DXGADAPTER *)v71);
          }
          if ( v134 )
          {
            if ( v135 )
              COREACCESS::Release((COREACCESS *)v132);
            v72 = (DXGGLOBAL **)v134;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v72[2], (struct DXGADAPTER *)v72);
          }
          goto LABEL_99;
        }
        v111 = 1;
LABEL_66:
        if ( v134 != v139 )
          COREACCESS::Release((COREACCESS *)v132);
        if ( !v140 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v62);
          v106[5] = v137;
          v106[3] = 275LL;
          v106[4] = 4LL;
          v106[6] = 0LL;
          v106[7] = 0LL;
          WdLogEvent5_WdCriticalError(v106);
        }
        v140 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v139 + 23) )
          DXGADAPTER::ReleaseCoreResource(v139, v141);
        v141 = 0LL;
        v131 = 0;
        v64 = *v121;
        if ( v124 )
        {
          v107 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v64, v59, 1, v124, v125);
          LODWORD(v43) = v107;
          if ( v107 > 0x3E )
          {
            v67 = 0;
          }
          else
          {
            v67 = v107;
            v114 = v107;
          }
        }
        else
        {
          v65 = *((_QWORD *)v64 + 2);
          if ( *(_QWORD *)(v65 + 2696) && *(_QWORD *)(v65 + 600) )
            v66.QuadPart = -1000000LL;
          else
            v66.QuadPart = -5000000LL;
          Timeout = v66;
          KeWaitForSingleObject((PVOID)(*((_QWORD *)v64 + 14) + v120 + 912), UserRequest, 0, 0, &Timeout);
          v67 = 0;
        }
        if ( v61 )
        {
          v68 = v115;
          v69 = v59;
          if ( (*((_DWORD *)v115 + 642) & 0x10) != 0 )
          {
            if ( v59 >= 0x10 )
              goto LABEL_82;
          }
          else
          {
            v69 = 0LL;
          }
          v70 = (unsigned int)v69;
          if ( _InterlockedDecrement((volatile signed __int32 *)v115 + (unsigned int)v69 + 682) < 0 )
          {
            v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
            v109 = v115;
            v108[5] = v115;
            v108[3] = 275LL;
            v108[4] = 37LL;
            v108[6] = *((unsigned int *)v109 + v70 + 682);
            v108[7] = 0LL;
            WdLogEvent5_WdCriticalError(v108);
            v67 = v114;
          }
        }
LABEL_82:
        if ( v111 )
        {
          LODWORD(v43) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v130, 0LL);
          if ( (int)v43 < 0 )
            goto LABEL_87;
          v110 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v118 + 616LL)
                                                                                        + 8LL)
                                                                            + 552LL))(
                   *(_QWORD *)(*(_QWORD *)v118 + 624LL),
                   1LL,
                   0LL,
                   v59);
        }
        else
        {
          if ( !v112 )
          {
LABEL_84:
            if ( (int)v43 >= 0 && v67 )
              LODWORD(v43) = v67;
            goto LABEL_87;
          }
          LODWORD(v43) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v130, 0LL);
          if ( (int)v43 < 0 )
            goto LABEL_87;
          if ( *((_DWORD *)v119 + 144) != 1 )
          {
LABEL_197:
            v67 = v114;
            goto LABEL_84;
          }
          v110 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v118 + 616LL)
                                                                                       + 8LL)
                                                                           + 560LL))(
                   *((_QWORD *)v119 + 96),
                   0LL,
                   0LL,
                   v59);
        }
        LODWORD(v43) = v110;
        goto LABEL_197;
      }
      v94 = v47;
      v95 = v115;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129,
        v115,
        v94);
      if ( *((_DWORD *)v95 + 50) == 1 && *((_DWORD *)v116 + 50) == 1 )
      {
        if ( (unsigned int)v6 < *(_DWORD *)(*((_QWORD *)v116 + 337) + 80LL) )
        {
          if ( DXGADAPTER::IsVSyncAvailable(v116, (unsigned int)v6) )
          {
            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129);
            goto LABEL_43;
          }
          LODWORD(v43) = -1071775738;
        }
        else
        {
          v98 = WdLogNewEntry5_WdWarning(v116, v96, v97);
          LODWORD(v43) = -1073741811;
          *(_QWORD *)(v98 + 24) = v6;
          *(_QWORD *)(v98 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v98);
        }
      }
      else
      {
        LODWORD(v43) = -1073741130;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129);
      goto LABEL_87;
    }
    v81 = *(_QWORD *)(v15 + 496);
    v121 = (ADAPTER_DISPLAY **)(v81 + 208);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v81 + 208));
    if ( v20 < *(_DWORD *)(v81 + 256) )
    {
      v82 = *(_QWORD *)(v81 + 240);
      v83 = *(_DWORD *)(v82 + 16LL * v20 + 8);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v82 + 16LL * v20 + 8) & 0x60)
        && (v83 & 0x2000) == 0
        && (v83 & 0x1F) != 0 )
      {
        v84 = v83 & 0x1F;
        if ( (_BYTE)v84 == 1 )
        {
          v24 = *(_QWORD *)(v82 + 16LL * v20);
          goto LABEL_132;
        }
        v85 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v84);
        *(_QWORD *)(v85 + 24) = 316LL;
        WdLogEvent5_WdError(v85);
      }
    }
    v24 = 0LL;
LABEL_132:
    ExReleasePushLockSharedEx(v121, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  v77 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v77 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v77);
  return 3221225506LL;
}
