/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0121F7C
 * Callers:
 *     DxgkOpenResource @ 0x1C015C5D0 (DxgkOpenResource.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0008744 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025DE8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01227D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0134E10 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C0227FA8 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_2_--ENSURE_SHARED_RESOURCE_DERE.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r13
  char v11; // r12
  DXGSHAREDRESOURCE *v12; // rsi
  ULONG64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r14
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct DXGGLOBAL *Global; // rdi
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // r15
  __int64 v35; // r15
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  SIZE_T v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // eax
  __int64 v53; // rdx
  PVOID v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // rax
  void *v58; // r15
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int StandardAllocation; // r14d
  _QWORD *v63; // r8
  _DWORD *v64; // rdx
  _DWORD *v65; // rdx
  unsigned int v66; // r10d
  __int64 v67; // r12
  char *v68; // rcx
  size_t v69; // r8
  char *v70; // rcx
  size_t v71; // r8
  __int64 v73; // r11
  ULONG64 v74; // r9
  _DWORD *v75; // rdx
  _DWORD *v76; // rdx
  _QWORD *v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // esi
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rcx
  unsigned int v95; // r9d
  unsigned int v96; // ecx
  __int64 v97; // r8
  int v98; // edx
  __int64 v99; // rdx
  __int64 v100; // rax
  struct DXGRESOURCE *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  unsigned int v105; // r14d
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  unsigned int v109; // r8d
  __int64 v110; // rdx
  int v111; // ecx
  int v112; // eax
  __int64 v113; // rdx
  _DWORD *v114; // rcx
  _QWORD *v115; // rax
  char *v116; // rcx
  size_t v117; // r8
  __int64 v118; // rax
  bool v119; // [rsp+50h] [rbp-3E8h]
  struct DXGDEVICE *v120; // [rsp+58h] [rbp-3E0h] BYREF
  struct DXGDEVICE *v121; // [rsp+60h] [rbp-3D8h] BYREF
  struct DXGPROCESS *v122; // [rsp+68h] [rbp-3D0h]
  unsigned int v123; // [rsp+70h] [rbp-3C8h]
  int v124; // [rsp+74h] [rbp-3C4h]
  char v125[8]; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v126; // [rsp+80h] [rbp-3B8h]
  char v127; // [rsp+88h] [rbp-3B0h]
  void *v128; // [rsp+90h] [rbp-3A8h]
  void *v129; // [rsp+98h] [rbp-3A0h]
  void *Src; // [rsp+A0h] [rbp-398h]
  DXGSHAREDRESOURCE *v131[3]; // [rsp+A8h] [rbp-390h] BYREF
  ULONG64 v132; // [rsp+C0h] [rbp-378h]
  _BYTE v133[16]; // [rsp+C8h] [rbp-370h] BYREF
  void *v134; // [rsp+D8h] [rbp-360h]
  _BYTE v135[16]; // [rsp+E0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v136; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v137; // [rsp+F8h] [rbp-340h]
  __int64 v138; // [rsp+100h] [rbp-338h]
  _BYTE v139[24]; // [rsp+108h] [rbp-330h] BYREF
  _OWORD v140[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v141[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v142[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v143[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v144; // [rsp+350h] [rbp-E8h]
  _BYTE v145[160]; // [rsp+360h] [rbp-D8h] BYREF

  v123 = a2;
  v132 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v119 = v4;
  Current = DXGPROCESS::GetCurrent(1LL, v5, v6, v7);
  v131[1] = Current;
  v122 = Current;
  v129 = 0LL;
  v128 = 0LL;
  Src = 0LL;
  v11 = 0;
  if ( !Current )
  {
    v81 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v81 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v81);
    return 3221225485LL;
  }
  memset(v140, 0, 0x48uLL);
  v12 = (DXGSHAREDRESOURCE *)v140;
  if ( v4 )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v140[0] = *(_OWORD *)v13;
    v140[1] = *(_OWORD *)(v13 + 16);
    v140[2] = *(_OWORD *)(v13 + 32);
    v140[3] = *(_OWORD *)(v13 + 48);
    *(_QWORD *)&v140[4] = *(_QWORD *)(v13 + 64);
  }
  else
  {
    v12 = (DXGSHAREDRESOURCE *)a1;
  }
  v131[2] = v12;
  v137 = *((_QWORD *)v12 + 7);
  v121 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v120,
    *(unsigned int *)v12,
    (struct _KTHREAD **)Current,
    &v121);
  v17 = v121;
  if ( !v121 )
  {
    v82 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v82 + 24) = *(unsigned int *)v12;
    *(_QWORD *)(v82 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v82);
LABEL_155:
    if ( v120 && _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v12 + 16) && !*((_DWORD *)v12 + 12) )
  {
    v83 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v83 + 24) = v17;
    *(_QWORD *)(v83 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v83);
    goto LABEL_155;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133,
    v121);
  v126 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v127 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v145, (__int64)v17, 2, v18, 0);
  v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v145, 0LL);
  v23 = v19;
  if ( v19 < 0 )
  {
    v84 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v84 + 24) = v17;
    *(_QWORD *)(v84 + 32) = v23;
    WdLogEvent5_WdWarning(v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
    if ( v127 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
    if ( v120 && _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
    return (unsigned int)v23;
  }
  if ( !a2 )
  {
    v118 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v118 + 24) = v17;
    *(_QWORD *)(v118 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v118);
LABEL_152:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
    if ( v127 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
    goto LABEL_155;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v135, v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v135);
  Global = DXGGLOBAL::GetGlobal(v25, v24);
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Global + 33) != CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(CurrentThread, v26);
    *(_QWORD *)(v30 + 24) = 1114LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = (v123 >> 6) & 0xFFFFFF;
  v32 = v123 >> 30;
  if ( (unsigned int)v31 >= *((_DWORD *)Global + 76)
    || (v33 = (unsigned int)v31,
        v28 = *((_QWORD *)Global + 36),
        v31 = *(unsigned int *)(v28 + 16LL * (unsigned int)v31 + 8),
        (_DWORD)v32 != (((unsigned int)v31 >> 5) & 3))
    || (v31 & 0x2000) != 0
    || (v31 & 0x1F) == 0 )
  {
LABEL_74:
    v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v32, v28);
LABEL_75:
    v78[3] = v121;
    v79 = v123;
    v78[5] = -1073741811LL;
    v78[4] = v79;
    WdLogEvent5_WdWarning(v78);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v135, v80);
    goto LABEL_152;
  }
  v34 = 2 * v33;
  v31 &= 0x1Fu;
  if ( (_BYTE)v31 != 2 )
  {
    v85 = WdLogNewEntry5_WdError(v31, v32);
    *(_QWORD *)(v85 + 24) = 316LL;
    WdLogEvent5_WdError(v85);
    goto LABEL_74;
  }
  v35 = *(_QWORD *)(v28 + 8 * v34);
  if ( !v35 )
    goto LABEL_74;
  _m_prefetchw((const void *)(v35 + 68));
  v36 = *(_DWORD *)(v35 + 68);
  do
  {
    if ( !v36 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v32, v28);
      v78[6] = 10873LL;
      goto LABEL_75;
    }
    v31 = (unsigned int)(v36 + 1);
    v37 = v36;
    v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 68), v31, v36);
  }
  while ( v37 != v36 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v135, v32);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v135, v38);
  v131[0] = (DXGSHAREDRESOURCE *)v35;
  if ( (*(_DWORD *)(v35 + 12) & 0x10) != 0 )
  {
    v86 = WdLogNewEntry5_WdEvent(v40, v39);
    *(_QWORD *)(v86 + 24) = v35;
    v87 = -1073741823;
    *(_QWORD *)(v86 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v86);
  }
  else
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v139, Current);
    if ( (_BYTE)v42 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v145, v41);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v139, 1LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
      v124 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v145, 0LL);
      if ( v124 < 0 )
      {
        v91 = WdLogNewEntry5_WdWarning(v90, v89, v42);
        *(_QWORD *)(v91 + 24) = v121;
        v87 = v124;
        *(_QWORD *)(v91 + 32) = v124;
        WdLogEvent5_WdWarning(v91);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v139);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v131);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
        if ( v127 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
        if ( v120 )
          goto LABEL_93;
        return v87;
      }
    }
    v43 = *((unsigned int *)v12 + 2);
    if ( 80 * v43 <= 0xFFFFFFFF )
    {
      v44 = 80LL * *((unsigned int *)v12 + 2);
      if ( !is_mul_ok(v43, 0x50uLL) )
        v44 = -1LL;
      v134 = operator new[](v44, 0x4B677844u, PagedPool);
      if ( !v134 )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
        v92[3] = v121;
        v92[4] = *((unsigned int *)v12 + 2);
        StandardAllocation = -1073741801;
        v92[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v92);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v139);
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v131);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
        if ( v127 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
        if ( v120 )
          goto LABEL_64;
        return (unsigned int)StandardAllocation;
      }
      v48 = *((_DWORD *)v12 + 16);
      if ( v48 )
      {
        v128 = operator new[](v48, 0x4B677844u, PagedPool);
        if ( !v128 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51);
          v93[3] = v121;
          v94 = *((unsigned int *)v12 + 16);
          goto LABEL_107;
        }
      }
      if ( *((_DWORD *)v12 + 12) )
      {
        v129 = operator new[](*((unsigned int *)v12 + 12), 0x4B677844u, PagedPool);
        if ( !v129 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdWarning(v103, v102, v104);
          v93[3] = v121;
          v94 = *((unsigned int *)v12 + 12);
LABEL_107:
          v93[4] = v94;
          StandardAllocation = -1073741801;
          v93[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v93);
LABEL_108:
          if ( v11 )
          {
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
              (DXGHANDLETABLELOCKEXCLUSIVE *)v141,
              (struct _KTHREAD **)Current);
            v95 = *((_DWORD *)v12 + 17);
            v96 = (v95 >> 6) & 0xFFFFFF;
            if ( v96 < *((_DWORD *)v122 + 64)
              && (v97 = *((_QWORD *)Current + 30),
                  v98 = *(_DWORD *)(v97 + 16LL * v96 + 8),
                  ((v95 >> 25) & 0x60) == (v98 & 0x60))
              && (v98 & 0x2000) == 0
              && (v98 & 0x1F) != 0 )
            {
              v99 = v98 & 0x1F;
              if ( (_BYTE)v99 != 4 )
              {
                v100 = WdLogNewEntry5_WdError((v95 >> 25) & 0x60, v99);
                *(_QWORD *)(v100 + 24) = 316LL;
                WdLogEvent5_WdError(v100);
                goto LABEL_115;
              }
              v101 = *(struct DXGRESOURCE **)(v97 + 16LL * v96);
              if ( v101 )
                *(_DWORD *)(v97 + 16LL * ((v95 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            else
            {
LABEL_115:
              v101 = 0LL;
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
            DXGDEVICE::DestroyAllocationInternal(v121, 0, 0LL, v101, 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
LABEL_58:
          operator delete[](v128);
          operator delete[](v129);
          operator delete[](v134);
          operator delete[](Src);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v139);
          if ( v131[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v131[0] + 17, 0xFFFFFFFF) == 1 )
            DXGSHAREDRESOURCE::Destroy(v131[0], 0LL, 0);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
          if ( v127 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
          if ( v120 )
          {
LABEL_64:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
          }
          return (unsigned int)StandardAllocation;
        }
      }
      v52 = *((_DWORD *)v12 + 8);
      if ( v52 )
      {
        v54 = operator new[](v52, 0x4B677844u, PagedPool);
        Src = v54;
        if ( !v54 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v53, v55);
          v93[3] = v121;
          v94 = *((unsigned int *)v12 + 8);
          goto LABEL_107;
        }
      }
      else
      {
        v54 = Src;
      }
      if ( (*((_BYTE *)v121 + 1869) & 1) != 0
        || (v56 = *((_QWORD *)v17 + 2), *(_QWORD *)(v35 + 80) == v56)
        && ((v57 = *((_QWORD *)v121 + 231)) == 0 || *(_QWORD *)(v57 + 2704) || *(_QWORD *)(v35 + 96) == v57) )
      {
        v58 = v128;
        if ( v119 )
        {
          *((_QWORD *)v12 + 7) = v128;
          *((_QWORD *)v12 + 5) = v129;
          *((_QWORD *)v12 + 3) = v54;
          *((_QWORD *)v12 + 2) = v134;
        }
        StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                               v121,
                               0,
                               (struct COREDEVICEACCESS *)v145,
                               0,
                               0LL,
                               0LL,
                               0LL);
        if ( StandardAllocation >= 0 )
        {
LABEL_39:
          v11 = 1;
          if ( v119 )
          {
            v63 = (_QWORD *)v132;
            v64 = (_DWORD *)(v132 + 68);
            if ( v132 + 68 >= MmUserProbeAddress )
              v64 = (_DWORD *)MmUserProbeAddress;
            *v64 = *((_DWORD *)v12 + 17);
            v65 = v63 + 8;
            if ( (unsigned __int64)(v63 + 8) >= MmUserProbeAddress )
              v65 = (_DWORD *)MmUserProbeAddress;
            *v65 = *((_DWORD *)v12 + 16);
            v66 = 0;
            v67 = v137;
            while ( v66 < *((_DWORD *)v12 + 2) )
            {
              v73 = 80LL * v66;
              v138 = v67 + (unsigned int)(*(_DWORD *)(*((_QWORD *)v12 + 2) + v73 + 8) - *((_DWORD *)v12 + 14));
              v74 = v73 + v63[2];
              v75 = (_DWORD *)v74;
              if ( v74 >= MmUserProbeAddress )
                v75 = (_DWORD *)MmUserProbeAddress;
              *v75 = *(_DWORD *)(v73 + *((_QWORD *)v12 + 2));
              v76 = (_DWORD *)(v74 + 16);
              if ( v74 + 16 >= MmUserProbeAddress )
                v76 = (_DWORD *)MmUserProbeAddress;
              *v76 = *(_DWORD *)(*((_QWORD *)v12 + 2) + v73 + 16);
              v77 = (_QWORD *)(v74 + 8);
              if ( v74 + 8 >= MmUserProbeAddress )
                v77 = (_QWORD *)MmUserProbeAddress;
              *v77 = v138;
              ++v66;
              v63 = (_QWORD *)v132;
            }
            if ( *((_DWORD *)v12 + 8) )
            {
              v68 = (char *)v63[3];
              v69 = *((unsigned int *)v12 + 8);
              if ( (unsigned __int64)&v68[v69] > MmUserProbeAddress || &v68[v69] <= v68 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v68, Src, v69);
              v63 = (_QWORD *)v132;
            }
            if ( *((_DWORD *)v12 + 12) )
            {
              v116 = (char *)v63[5];
              v117 = *((unsigned int *)v12 + 12);
              if ( (unsigned __int64)&v116[v117] > MmUserProbeAddress || &v116[v117] <= v116 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v116, v129, v117);
            }
            v11 = 1;
            if ( *((_DWORD *)v12 + 16) )
            {
              v70 = *(char **)(v132 + 56);
              v71 = *((unsigned int *)v12 + 16);
              if ( (unsigned __int64)&v70[v71] > MmUserProbeAddress || &v70[v71] <= v70 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v70, v58, v71);
              v11 = 1;
            }
          }
          goto LABEL_57;
        }
        v115 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
        v115[3] = 11183LL;
      }
      else
      {
        v105 = *(_DWORD *)(v35 + 12);
        if ( (v105 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(v35 + 132) != *((_DWORD *)v12 + 2) )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v121, v56);
            v106[3] = v121;
            v106[4] = *((unsigned int *)v12 + 2);
            v107 = *(unsigned int *)(v35 + 132);
            goto LABEL_125;
          }
          v124 = *(_DWORD *)(v35 + 112);
          if ( *((_DWORD *)v12 + 8) == v124 )
          {
            v108 = *(unsigned int *)(v35 + 216);
            if ( (_DWORD)v108 || *(_DWORD *)(*(_QWORD *)(v56 + 16) + 1872LL) >= 0x5000u )
            {
              v144 = 0LL;
              v143[2] = v108;
              v143[0] = *(_DWORD *)(v35 + 208);
              v143[1] = *(_DWORD *)(v35 + 212);
              v143[3] = 7;
              memset(v142, 0, 0x1A8uLL);
              v109 = v142[0] & 0xFFFFBEFF | (4 * (v105 & 0x40 | (32 * (v105 & 0x80)))) | 0x41;
              HIDWORD(v142[0]) = *(_DWORD *)v12;
              LODWORD(v142[2]) = 4;
              v142[3] = v143;
              v142[39] = *(_QWORD *)(v35 + 104);
              LODWORD(v142[40]) = v124;
              v110 = *(_QWORD *)(v35 + 192);
              if ( (v105 & 0x200) != 0 )
                v142[42] = *(_QWORD *)(v35 + 192);
              else
                v142[41] = *(_QWORD *)(v35 + 192);
              v142[43] = *(_QWORD *)(v35 + 224);
              LODWORD(v142[6]) = *(_DWORD *)(v35 + 232);
              v142[44] = v129;
              LODWORD(v142[45]) = *((_DWORD *)v12 + 12);
              v142[46] = v128;
              LODWORD(v142[47]) = *((_DWORD *)v12 + 16);
              LODWORD(v142[0]) = v109 ^ (v109 ^ (v105 << 7)) & 0x400 | 0x200;
              v142[52] = *(_QWORD *)(v35 + 184);
              if ( (v105 & 0x200) != 0 )
              {
                v142[42] = v110;
                goto LABEL_138;
              }
              if ( (v105 & 0x400) != 0 )
              {
                v142[41] = v110;
LABEL_138:
                v112 = *(_DWORD *)(v35 + 204);
                v111 = v109 ^ (v109 ^ (v105 << 7)) & 0x400 | 0x200;
                LODWORD(v142[0]) = v111 ^ ((unsigned __int8)v111 ^ (unsigned __int8)(v105 >> 7)) & 0x10;
                LODWORD(v142[49]) = v112;
              }
              StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                     (struct _DXGK_ALLOCATIONINFO *)v121,
                                     (struct _D3DKM_CREATESTANDARDALLOCATION *)v142,
                                     (struct COREDEVICEACCESS *)v145);
              if ( StandardAllocation >= 0 )
              {
                *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe(
                                         (__int64)Current,
                                         (DXGRESOURCEREFERENCE *)&v136,
                                         v142[1])
                          + 120LL) = v35;
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v136, v113);
                memmove(Src, *(const void **)(v35 + 104), *((unsigned int *)v12 + 8));
                *((_DWORD *)v12 + 17) = v142[1];
                v114 = v134;
                *(_DWORD *)v134 = HIDWORD(v142[6]);
                v114[4] = *((_DWORD *)v12 + 16);
                v58 = v128;
                *((_QWORD *)v114 + 1) = v128;
                *((_QWORD *)v12 + 2) = v114;
                *((_QWORD *)v12 + 3) = Src;
                *((_QWORD *)v12 + 5) = v129;
                *((_QWORD *)v12 + 7) = v58;
                goto LABEL_39;
              }
LABEL_57:
              if ( StandardAllocation < 0 )
                goto LABEL_108;
              goto LABEL_58;
            }
            v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v108, v56);
            v106[3] = v121;
            v106[4] = -1073741811LL;
          }
          else
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v121, v56);
            v106[3] = v121;
            v106[4] = *((unsigned int *)v12 + 8);
            v107 = *(unsigned int *)(v35 + 112);
LABEL_125:
            v106[5] = v107;
            v106[6] = -1073741811LL;
          }
          WdLogEvent5_WdWarning(v106);
          StandardAllocation = -1073741811;
          goto LABEL_108;
        }
        StandardAllocation = -1073741811;
        v115 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v121, v56);
        v115[3] = v121;
        v115[4] = 0LL;
        v115[5] = -1073741811LL;
      }
      WdLogEvent5_WdWarning(v115);
      goto LABEL_57;
    }
    v88 = WdLogNewEntry5_WdWarning(v43, 0xFFFFFFFFLL, v42);
    *(_QWORD *)(v88 + 24) = v121;
    v87 = -1073741675;
    *(_QWORD *)(v88 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v88);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v139);
  }
  OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(v131);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v145);
  if ( v127 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v133);
  if ( v120 )
  {
LABEL_93:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v120 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v120 + 2), v120);
  }
  return v87;
}
