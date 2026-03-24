/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100EC0
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0100DD0 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000195C (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0004AFC (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
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
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003BB30 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C003F0A0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C005F15C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00E0958 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0211808 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0215834 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  int v5; // r14d
  __int64 v6; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  int PairingAdapters; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  volatile signed __int64 *v34; // rdi
  volatile signed __int64 *v35; // rsi
  signed __int64 v36; // rcx
  struct DXGADAPTER *v37; // rdi
  struct DXGADAPTER *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  DXGADAPTER *v41; // rdi
  __int64 *v42; // rdx
  struct DXGADAPTER *v43; // r13
  ADAPTER_DISPLAY **v44; // r12
  ADAPTER_DISPLAY *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r13
  _DWORD *v50; // rsi
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  ADAPTER_DISPLAY *v57; // rsi
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned int v66; // edi
  DXGGLOBAL **v67; // rcx
  DXGGLOBAL **v68; // rcx
  int v70; // edi
  struct DXGTHREAD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // r9d
  __int64 v76; // r15
  __int64 v77; // r9
  int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  struct DXGADAPTER *v89; // r8
  DXGADAPTER *v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // rax
  struct DXGTHREAD *Current; // rax
  unsigned int v104; // eax
  unsigned int v105; // edx
  ADAPTER_DISPLAY *v106; // r10
  _QWORD *v107; // rax
  int v108; // eax
  unsigned __int8 v109; // [rsp+40h] [rbp-C0h] BYREF
  char v110; // [rsp+41h] [rbp-BFh]
  char v111; // [rsp+42h] [rbp-BEh]
  char v112; // [rsp+43h] [rbp-BDh]
  unsigned int v113; // [rsp+44h] [rbp-BCh]
  unsigned int v114; // [rsp+48h] [rbp-B8h]
  char *v115; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v116; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v117; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v118; // [rsp+68h] [rbp-98h]
  struct DXGDEVICE *v119; // [rsp+70h] [rbp-90h] BYREF
  __int64 v120; // [rsp+78h] [rbp-88h]
  int v121; // [rsp+80h] [rbp-80h] BYREF
  int v122; // [rsp+84h] [rbp-7Ch] BYREF
  struct DXGDEVICE *v123; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v124; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v125; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v126[64]; // [rsp+A0h] [rbp-60h] BYREF
  char v127; // [rsp+E0h] [rbp-20h] BYREF
  char v128; // [rsp+E1h] [rbp-1Fh]
  char v129[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v131; // [rsp+F8h] [rbp-8h]
  char v132; // [rsp+100h] [rbp+0h]
  __int64 v133; // [rsp+108h] [rbp+8h]
  char v134[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v135; // [rsp+130h] [rbp+30h]
  struct DXGADAPTER *v136; // [rsp+138h] [rbp+38h]
  char v137; // [rsp+140h] [rbp+40h]
  char *v138; // [rsp+148h] [rbp+48h]

  v4 = (unsigned int)a3;
  v5 = 0;
  v118 = a3;
  v119 = 0LL;
  v113 = a4;
  v114 = a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (v71 = DXGTHREAD::GetCurrent()) != 0LL
    && (v13 = *((_QWORD *)v71 + 1)) != 0
    || (v13 = v12) != 0 )
  {
    if ( *(_BYTE *)(v13 + 346) )
    {
      v121 = 0;
      v122 = 0;
      v14 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*(_QWORD *)(v13 + 88) + 224LL))(&v121, 0LL, &v122);
      if ( v121 && (!v14 || v122) )
      {
        if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
        {
          v74 = WdLogNewEntry5_WdAssertion(v16, v15);
          *(_QWORD *)(v74 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v74);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 208, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v75 = *(_DWORD *)(v13 + 232);
            if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, v75);
          }
          ExAcquirePushLockSharedEx(v13 + 208, 0LL);
        }
        v19 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (*(_BYTE *)(v13 + 347) & 0x20) == 0 )
        {
          if ( v19 < *(_DWORD *)(v13 + 256) )
          {
            v20 = *(_QWORD *)(v13 + 240);
            v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
            if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
              && (v21 & 0x2000) == 0
              && (v21 & 0x1F) != 0 )
            {
              v22 = v21 & 0x1F;
              if ( (_BYTE)v22 == 1 )
              {
                v23 = *(_QWORD *)(v20 + 16LL * v19);
                goto LABEL_20;
              }
              v24 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v22);
              *(_QWORD *)(v24 + 24) = 316LL;
              WdLogEvent5_WdError(v24);
            }
          }
          v23 = 0LL;
LABEL_20:
          if ( v23 )
            _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
          ExReleasePushLockSharedEx(v13 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v23 )
          {
            v81 = WdLogNewEntry5_WdWarning(v26, v25, v27);
            LODWORD(v33) = -1073741811;
            *(_QWORD *)(v81 + 24) = v6;
            *(_QWORD *)(v81 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v81);
            return (unsigned int)v33;
          }
          v28 = v114;
          if ( v114 )
          {
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v123, v114, (struct _KTHREAD **)v13, &v119);
            if ( !v119 )
            {
              v85 = WdLogNewEntry5_WdWarning(v83, v82, v84);
              *(_QWORD *)(v85 + 24) = v23;
              *(_QWORD *)(v85 + 32) = v28;
              WdLogEvent5_WdWarning(v85);
              if ( v123 && _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
              LODWORD(v33) = -1073741811;
              goto LABEL_97;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v119 + 8);
            if ( v123 && _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
          }
          v117 = 0LL;
          v116 = 0LL;
          PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v23, v4, &v117, &v124, &v116, &v125, 0);
          v33 = PairingAdapters;
          if ( PairingAdapters < 0 )
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
            v86[3] = v23;
            v86[4] = v4;
            v86[5] = v33;
            WdLogEvent5_WdError(v86);
LABEL_96:
            if ( v119 && _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v119 + 2), v119);
LABEL_97:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
            return (unsigned int)v33;
          }
          v34 = (volatile signed __int64 *)v117;
          v35 = (volatile signed __int64 *)v116;
          if ( !v117 || !v116 )
          {
            v87 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v87 + 24) = 6484LL;
            WdLogEvent5_WdAssertion(v87);
          }
          if ( v119
            && (v34 != *(volatile signed __int64 **)(*((_QWORD *)v119 + 2) + 16LL)
             || v35 != *((volatile signed __int64 **)v119 + 231)) )
          {
            v88 = WdLogNewEntry5_WdWarning(v119, v30, v32);
            *(_QWORD *)(v88 + 24) = v23;
            *(_QWORD *)(v88 + 32) = v28;
            WdLogEvent5_WdWarning(v88);
            LODWORD(v33) = -1073741811;
            goto LABEL_96;
          }
          v128 = 0;
          v131 = (struct DXGADAPTER *)v34;
          v132 = 0;
          v133 = 0LL;
          if ( v34 )
          {
            _InterlockedIncrement64(v34 + 3);
            v34 = (volatile signed __int64 *)v117;
            v35 = (volatile signed __int64 *)v116;
            v130 = -1LL;
          }
          if ( !v35 )
            v35 = v34;
          v136 = (struct DXGADAPTER *)v35;
          v137 = 0;
          v138 = 0LL;
          if ( v35 )
          {
            _InterlockedIncrement64(v35 + 3);
            v34 = (volatile signed __int64 *)v117;
            v135 = -1LL;
          }
          if ( _InterlockedExchangeAdd64(v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117 + 2), v117);
          v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v37 = v116;
          if ( v36 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v116 + 2), v116);
          if ( *((_DWORD *)v37 + 40) != 1 )
          {
LABEL_39:
            if ( v137 )
            {
              v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v30);
              v94[5] = v134;
              v94[3] = 275LL;
              v94[4] = 4LL;
              v94[6] = 0LL;
              v94[7] = 0LL;
              WdLogEvent5_WdCriticalError(v94);
            }
            v38 = v136;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v136 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v136 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v40, 72);
                KeWaitForSingleObject((char *)v136 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v136, 0LL);
              v38 = v136;
            }
            v138 = 0LL;
            v137 = 1;
            if ( *((_DWORD *)v38 + 50) != 1 )
              goto LABEL_155;
            if ( v131 != v136 )
            {
              COREACCESS::AcquireShared((COREACCESS *)v129, 0LL);
              v38 = (struct DXGADAPTER *)*((unsigned int *)v131 + 50);
              if ( (_DWORD)v38 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v129);
LABEL_155:
                COREACCESS::Release((COREACCESS *)v134);
LABEL_156:
                v70 = -1073741130;
                goto LABEL_103;
              }
            }
            v41 = v117;
            v128 = 1;
            v42 = (__int64 *)((char *)v117 + 2704);
            v115 = (char *)v117 + 2704;
            if ( !*((_QWORD *)v117 + 338) )
            {
              v95 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v95 + 24) = 6538LL;
              WdLogEvent5_WdAssertion(v95);
              v42 = (__int64 *)v115;
            }
            v43 = v116;
            v44 = (ADAPTER_DISPLAY **)((char *)v116 + 2696);
            if ( !*((_QWORD *)v116 + 337) )
            {
              v96 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v96 + 24) = 6539LL;
              WdLogEvent5_WdAssertion(v96);
              v42 = (__int64 *)v115;
            }
            if ( v114 )
            {
              v38 = (struct DXGADAPTER *)*((unsigned int *)v119 + 144);
              if ( (_DWORD)v38 != 1 )
                goto LABEL_156;
              v41 = v117;
              v43 = v116;
            }
            v45 = *v44;
            v110 = 0;
            v109 = 0;
            v111 = 0;
            v112 = 0;
            if ( !v45 )
            {
              v97 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v97 + 24) = 9659LL;
              WdLogEvent5_WdAssertion(v97);
              v45 = *v44;
              v42 = (__int64 *)v115;
              if ( !*v44 )
                goto LABEL_102;
            }
            v46 = v118;
            if ( v118 >= *((_DWORD *)v45 + 20) )
            {
              v98 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v98 + 24) = 6068LL;
              WdLogEvent5_WdAssertion(v98);
              v46 = v118;
              v42 = (__int64 *)v115;
            }
            v47 = 3968 * v46;
            v48 = *((_QWORD *)v45 + 14);
            v120 = v47;
            if ( !*(_BYTE *)(v48 + v47 + 720) )
            {
LABEL_102:
              v70 = -1071775738;
LABEL_103:
              v5 = v70;
LABEL_84:
              LODWORD(v33) = v5;
              if ( v128 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v127);
              if ( v136 )
              {
                if ( v137 )
                  COREACCESS::Release((COREACCESS *)v134);
                v67 = (DXGGLOBAL **)v136;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v136 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v67[2], (struct DXGADAPTER *)v67);
              }
              if ( v131 )
              {
                if ( v132 )
                  COREACCESS::Release((COREACCESS *)v129);
                v68 = (DXGGLOBAL **)v131;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v68[2], (struct DXGADAPTER *)v68);
              }
              goto LABEL_96;
            }
            if ( !*((_QWORD *)v43 + 338) )
            {
              LODWORD(v49) = v118;
              v104 = DXGADAPTER::NumberOfVSyncWaiter(v41, v118);
              ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v106, v105, v113, v104, &v109);
              ADAPTER_DISPLAY::ControlVSyncAdapter(*v44, v49);
              goto LABEL_75;
            }
            if ( v43 != v41 )
            {
              v99 = WdLogNewEntry5_WdAssertion(v47, v42);
              *(_QWORD *)(v99 + 24) = 6561LL;
              WdLogEvent5_WdAssertion(v99);
              v42 = (__int64 *)v115;
            }
            v49 = v118;
            v50 = (_DWORD *)((char *)v41 + 2568);
            v51 = v118;
            if ( (*((_DWORD *)v41 + 642) & 0x10) != 0 )
            {
              if ( v118 >= 0x10 )
                goto LABEL_61;
            }
            else
            {
              v51 = 0;
            }
            _InterlockedIncrement((volatile signed __int32 *)v41 + v51 + 682);
            v41 = v117;
LABEL_61:
            v52 = *v42;
            v110 = 1;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v52 + 616) + 8LL) + 544LL))(
                   *(_QWORD *)(v52 + 624),
                   (unsigned int)v49) )
            {
              goto LABEL_62;
            }
            v100 = *(_QWORD *)v115;
            if ( v119 )
            {
              v101 = *(_QWORD *)(v100 + 616);
              v102 = *(_QWORD *)(v101 + 8);
              LOBYTE(v101) = 1;
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v102 + 560))(
                     *((_QWORD *)v119 + 96),
                     0LL,
                     v101,
                     (unsigned int)v49) >= 0 )
              {
                v112 = 1;
                goto LABEL_62;
              }
            }
            else
            {
              LOBYTE(v54) = 1;
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v100 + 616) + 8LL)
                                                                           + 552LL))(
                     *(_QWORD *)(v100 + 624),
                     1LL,
                     v54,
                     (unsigned int)v49) >= 0 )
              {
                v111 = 1;
LABEL_62:
                v56 = (unsigned int)v49;
                if ( (*v50 & 0x10) != 0 )
                {
                  if ( (unsigned int)v49 >= 0x10 )
                  {
                    v114 = 0;
                    goto LABEL_65;
                  }
                }
                else
                {
                  v56 = 0LL;
                }
                v114 = *((_DWORD *)v41 + (unsigned int)v56 + 682);
LABEL_65:
                v57 = *v44;
                v58 = *((_QWORD *)*v44 + 14) + v120;
                v59 = PsGetCurrentProcess(v56, v53, v54, v55);
                v60 = PsGetProcessDxgProcess(v59);
                v64 = v60;
                if ( v60 && (*(_BYTE *)(v60 + 347) & 0x10) == 0
                  || (Current = DXGTHREAD::GetCurrent()) == 0LL
                  || (v65 = *((_QWORD *)Current + 1)) == 0 )
                {
                  v65 = v64;
                }
                v109 = 1;
                if ( *(_QWORD *)(v58 + 936) && *(_BYTE *)(v65 + 346) )
                {
                  v66 = v113;
                  if ( *((_QWORD *)v57 + 48) )
                  {
                    *(_DWORD *)(v58 + 944) = v113;
                    BLTQUEUE::SetDWMTargetVsync(
                      (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v57 + 48) + 8LL) + 2904 * v49),
                      v66);
                  }
                  else
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0qqqq_EtwWriteTransfer(
                        v114,
                        &EventDWMVsyncCountWait,
                        v63,
                        v113,
                        *(_DWORD *)(v58 + 948),
                        *(_BYTE *)(v58 + 952),
                        v114);
                    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v57, v49, v113, &v109);
                  }
                }
LABEL_75:
                if ( v131 != v136 )
                  COREACCESS::Release((COREACCESS *)v129);
                if ( !v137 )
                {
                  v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v61);
                  v107[5] = v134;
                  v107[3] = 275LL;
                  v107[4] = 4LL;
                  v107[6] = 0LL;
                  v107[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v107);
                }
                v137 = 0;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v136 + 23) )
                  DXGADAPTER::ReleaseCoreResource(v136, v138);
                v138 = 0LL;
                v128 = 0;
                if ( v109 && v110 )
                  DXGADAPTER::DecrementVSyncWaiter(v117, v49);
                if ( v111 )
                {
                  v70 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v127, 0LL);
                  if ( v70 < 0 )
                    goto LABEL_103;
                  v108 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v115 + 616LL)
                                                                                                + 8LL)
                                                                                    + 552LL))(
                           *(_QWORD *)(*(_QWORD *)v115 + 624LL),
                           1LL,
                           0LL,
                           (unsigned int)v49);
                }
                else
                {
                  if ( !v112 )
                    goto LABEL_84;
                  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v127, 0LL);
                  if ( v5 < 0 || *((_DWORD *)v119 + 144) != 1 )
                    goto LABEL_84;
                  v108 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v115 + 616LL)
                                                                                               + 8LL)
                                                                                   + 560LL))(
                           *((_QWORD *)v119 + 96),
                           0LL,
                           0LL,
                           (unsigned int)v49);
                }
                v5 = v108;
                goto LABEL_84;
              }
            }
            DXGADAPTER::DecrementVSyncWaiter(v41, v49);
            goto LABEL_102;
          }
          v89 = v37;
          v90 = v117;
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
            (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126,
            v117,
            v89);
          if ( *((_DWORD *)v90 + 50) == 1 && *((_DWORD *)v116 + 50) == 1 )
          {
            if ( (unsigned int)v4 < *(_DWORD *)(*((_QWORD *)v116 + 337) + 80LL) )
            {
              if ( DXGADAPTER::IsVSyncAvailable(v116, (unsigned int)v4) )
              {
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
                goto LABEL_39;
              }
              v70 = -1071775738;
            }
            else
            {
              v93 = WdLogNewEntry5_WdWarning(v116, v91, v92);
              v70 = -1073741811;
              *(_QWORD *)(v93 + 24) = v4;
              *(_QWORD *)(v93 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v93);
            }
          }
          else
          {
            v70 = -1073741130;
          }
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v126);
          goto LABEL_103;
        }
        v76 = *(_QWORD *)(v13 + 496);
        v115 = (char *)(v76 + 208);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v76 + 208));
        if ( v19 < *(_DWORD *)(v76 + 256) )
        {
          v77 = *(_QWORD *)(v76 + 240);
          v78 = *(_DWORD *)(v77 + 16LL * v19 + 8);
          if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v77 + 16LL * v19 + 8) & 0x60)
            && (v78 & 0x2000) == 0
            && (v78 & 0x1F) != 0 )
          {
            v79 = v78 & 0x1F;
            if ( (_BYTE)v79 == 1 )
            {
              v23 = *(_QWORD *)(v77 + 16LL * v19);
              goto LABEL_124;
            }
            v80 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v79);
            *(_QWORD *)(v80 + 24) = 316LL;
            WdLogEvent5_WdError(v80);
          }
        }
        v23 = 0LL;
LABEL_124:
        ExReleasePushLockSharedEx(v115, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      return 3221225659LL;
    }
    else
    {
      v73 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v73 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v73);
      return 3221225506LL;
    }
  }
  else
  {
    v72 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v72 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v72);
    return 3221225485LL;
  }
}
