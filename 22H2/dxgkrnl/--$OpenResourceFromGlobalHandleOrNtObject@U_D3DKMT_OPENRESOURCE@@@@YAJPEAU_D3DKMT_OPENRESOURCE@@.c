/*
 * XREFs of ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019E2B8
 * Callers:
 *     DxgkOpenResource @ 0x1C01E0A10 (DxgkOpenResource.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C00029AC (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00037DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007E34 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024EC4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024F28 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00250B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0175EB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A0874 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01C6300 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z@QEAA@XZ @ 0x1C01E610C (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPEN.c)
 */

__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  bool v4; // r15
  struct DXGPROCESS *Current; // rdi
  unsigned int *v6; // r14
  ULONG64 v7; // rax
  struct DXGDEVICE *v8; // r15
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rsi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  char v16; // r8
  unsigned __int64 v17; // rax
  signed int StandardAllocation; // r15d
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  void *v22; // r8
  DXGDEVICE *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // si
  void *v27; // r12
  _QWORD *v28; // r8
  _DWORD *v29; // rdx
  _DWORD *v30; // rdx
  unsigned int i; // r10d
  char *v32; // rcx
  size_t v33; // r8
  char *v34; // rcx
  size_t v35; // r8
  __int64 v37; // r11
  unsigned int *v38; // rsi
  ULONG64 v39; // r9
  _DWORD *v40; // rdx
  _DWORD *v41; // rdx
  _QWORD *v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r15
  unsigned int v45; // eax
  __int64 v46; // rsi
  unsigned int v47; // ecx
  int v48; // ecx
  struct DXGDEVICE *v49; // rax
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  struct DXGPROCESS *v54; // rsi
  unsigned int *v55; // r12
  unsigned int v56; // eax
  __int64 v57; // r10
  int v58; // edx
  struct DXGRESOURCE *v59; // r14
  unsigned int v60; // r8d
  __int64 v61; // rax
  __int64 v62; // r9
  int v63; // edx
  __int64 v64; // rcx
  unsigned int v65; // r15d
  unsigned int v66; // eax
  unsigned int v67; // ecx
  int v68; // ecx
  unsigned int v69; // r8d
  __int64 v70; // rdx
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // rcx
  char *v74; // rcx
  size_t v75; // r8
  char v76; // [rsp+50h] [rbp-3E8h]
  bool v77; // [rsp+51h] [rbp-3E7h]
  struct DXGDEVICE *v78; // [rsp+58h] [rbp-3E0h] BYREF
  struct DXGDEVICE *v79; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v80; // [rsp+68h] [rbp-3D0h]
  unsigned int v81; // [rsp+70h] [rbp-3C8h]
  char v82[8]; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v83; // [rsp+80h] [rbp-3B8h]
  char v84; // [rsp+88h] [rbp-3B0h]
  void *v85; // [rsp+90h] [rbp-3A8h]
  void *Src; // [rsp+98h] [rbp-3A0h]
  void *v87; // [rsp+A0h] [rbp-398h]
  __int64 v88; // [rsp+A8h] [rbp-390h] BYREF
  ULONG64 v89; // [rsp+B0h] [rbp-388h]
  struct DXGPROCESS *v90; // [rsp+B8h] [rbp-380h]
  _BYTE v91[16]; // [rsp+C0h] [rbp-378h] BYREF
  void *v92; // [rsp+D0h] [rbp-368h]
  unsigned int *v93; // [rsp+D8h] [rbp-360h]
  _BYTE v94[16]; // [rsp+E0h] [rbp-358h] BYREF
  char v95[8]; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-340h]
  _BYTE v97[32]; // [rsp+100h] [rbp-338h] BYREF
  _OWORD v98[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v99[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v100[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v101[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+350h] [rbp-E8h]
  __int64 v103[20]; // [rsp+360h] [rbp-D8h] BYREF

  v81 = a2;
  v89 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v77 = v4;
  Current = DXGPROCESS::GetCurrent();
  v90 = Current;
  v85 = 0LL;
  v87 = 0LL;
  Src = 0LL;
  v76 = 0;
  if ( !Current )
  {
    v11 = -1073741811;
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
    return v11;
  }
  memset(v98, 0, 0x48uLL);
  v6 = (unsigned int *)v98;
  if ( v4 )
  {
    v7 = a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v98[0] = *(_OWORD *)v7;
    v98[1] = *(_OWORD *)(v7 + 16);
    v98[2] = *(_OWORD *)(v7 + 32);
    v98[3] = *(_OWORD *)(v7 + 48);
    *(_QWORD *)&v98[4] = *(_QWORD *)(v7 + 64);
  }
  else
  {
    v6 = (unsigned int *)a1;
  }
  v93 = v6;
  v96 = *((_QWORD *)v6 + 7);
  v79 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v78, *v6, (struct _KTHREAD **)Current, &v79);
  v8 = v79;
  if ( !v79 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, *v6, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_158;
  }
  if ( !v6[16] && !v6[12] )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(3LL, v79, -1073741811LL);
    goto LABEL_158;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91,
    v79);
  v83 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  v84 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v103, (__int64)v8, 2, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v103, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(3LL, v8, v10);
LABEL_155:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v103);
    if ( v84 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91);
LABEL_158:
    v49 = v78;
    if ( v78 )
    {
LABEL_159:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
    }
    return v11;
  }
  if ( !a2 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v8, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_155;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v94);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
  if ( (*((_DWORD *)Current + 106) & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
    goto LABEL_12;
  }
  v43 = *((_QWORD *)Current + 76);
  v44 = v43 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v43 + 248));
  v45 = (a2 >> 6) & 0xFFFFFF;
  if ( v45 >= *(_DWORD *)(v43 + 296) )
    goto LABEL_81;
  v46 = *(_QWORD *)(v43 + 280);
  v47 = *(_DWORD *)(v46 + 16LL * v45 + 8);
  if ( a2 >> 30 != ((v47 >> 5) & 3) )
    goto LABEL_81;
  if ( (v47 & 0x2000) != 0 )
    goto LABEL_81;
  v48 = v47 & 0x1F;
  if ( !v48 )
    goto LABEL_81;
  if ( v48 != 2 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_81:
    ObjectA = 0LL;
    goto LABEL_82;
  }
  ObjectA = *(_QWORD *)(v46 + 16LL * v45);
LABEL_82:
  _InterlockedAdd((volatile signed __int32 *)(v44 + 16), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v44, 0LL);
  KeLeaveCriticalRegion();
  v8 = v79;
LABEL_12:
  if ( !ObjectA )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(3LL, v8, v81, -1073741811LL);
LABEL_85:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v94);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v103);
    if ( v84 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91);
    v49 = v78;
    if ( !v78 )
      return v11;
    goto LABEL_159;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v14 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v14 )
    {
      v11 = -1073741811;
      WdLogSingleEntry4(3LL, v79, v81, -1073741811LL, 11201LL);
      goto LABEL_85;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v14 + 1, v14);
  }
  while ( v15 != v14 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v94);
  v88 = ObjectA;
  if ( (*(_DWORD *)(ObjectA + 12) & 0x10) == 0 )
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v97, v90);
    if ( v16 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v103);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v97, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
      v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v103, 0LL);
      StandardAllocation = v50;
      if ( v50 < 0 )
      {
        WdLogSingleEntry2(3LL, v79, v50);
LABEL_55:
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v97);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v88);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v103);
        if ( v84 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91);
        if ( v78 )
        {
LABEL_58:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
        }
        return (unsigned int)StandardAllocation;
      }
    }
    v17 = 80LL * v6[2];
    StandardAllocation = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v17 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, v79, StandardAllocation);
    }
    else
    {
      v19 = 80LL * v6[2];
      if ( !is_mul_ok(v6[2], 0x50uLL) )
        v19 = -1LL;
      v92 = (void *)operator new[](v19, 0x4B677844u, 256LL);
      if ( v92 )
      {
        v20 = v6[16];
        if ( v20 )
        {
          v87 = (void *)operator new[](v20, 0x4B677844u, 258LL);
          if ( !v87 )
          {
            v51 = v6[16];
            goto LABEL_105;
          }
        }
        if ( v6[12] )
        {
          v85 = (void *)operator new[](v6[12], 0x4B677844u, 258LL);
          if ( !v85 )
          {
            v51 = v6[12];
LABEL_105:
            StandardAllocation = -1073741801;
            v23 = v79;
            WdLogSingleEntry3(3LL, v79, v51, -1073741801LL);
LABEL_109:
            if ( v76 )
            {
              v54 = v90;
              DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v99, v90);
              v55 = v93;
              v56 = (v93[17] >> 6) & 0xFFFFFF;
              if ( v56 < *((_DWORD *)v54 + 74)
                && (v57 = *((_QWORD *)v54 + 35), ((v93[17] >> 25) & 0x60) == (*(_BYTE *)(v57 + 16LL * v56 + 8) & 0x60))
                && (*(_DWORD *)(v57 + 16LL * v56 + 8) & 0x2000) == 0
                && (v58 = *(_DWORD *)(v57 + 16LL * v56 + 8) & 0x1F) != 0 )
              {
                if ( v58 != 4 )
                {
                  WdLogSingleEntry1(2LL, 316LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Handle type mismatch",
                    316LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_116;
                }
                v59 = *(struct DXGRESOURCE **)(v57 + 16LL * v56);
              }
              else
              {
LABEL_116:
                v59 = 0LL;
              }
              if ( v59 )
              {
                v60 = v55[17];
                v61 = (v60 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v61 < *((_DWORD *)v54 + 74) )
                {
                  v62 = *((_QWORD *)v54 + 35);
                  v63 = *(_DWORD *)(v62 + 16 * v61 + 8);
                  if ( ((v60 >> 25) & 0x60) == (*(_BYTE *)(v62 + 16 * v61 + 8) & 0x60)
                    && (v63 & 0x2000) == 0
                    && (v63 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v62 + 16LL * ((v60 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v99);
              DXGDEVICE::DestroyAllocationInternal(
                v23,
                0,
                0LL,
                v59,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
            }
LABEL_54:
            operator delete(v87);
            operator delete(v85);
            operator delete(v92);
            operator delete(Src);
            goto LABEL_55;
          }
        }
        v21 = v6[8];
        if ( v21 )
        {
          v22 = (void *)operator new[](v21, 0x4B677844u, 258LL);
          Src = v22;
          if ( !v22 )
          {
            v51 = v6[8];
            goto LABEL_105;
          }
        }
        else
        {
          v22 = Src;
        }
        v23 = v79;
        if ( (*((_BYTE *)v79 + 1901) & 1) != 0
          || (v24 = *((_QWORD *)v79 + 2), *(_QWORD *)(ObjectA + 80) == v24)
          && ((v25 = *((_QWORD *)v79 + 235)) == 0
           || *(_QWORD *)(v25 + 2928)
           || (v64 = *(_QWORD *)(ObjectA + 96)) == 0
           || v64 == v25) )
        {
          v26 = v77;
          if ( v77 )
          {
            *((_QWORD *)v6 + 7) = v87;
            *((_QWORD *)v6 + 5) = v85;
            *((_QWORD *)v6 + 3) = v22;
            *((_QWORD *)v6 + 2) = v92;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v23,
                                 (__int64)v6,
                                 v81,
                                 0LL,
                                 0,
                                 (struct COREDEVICEACCESS *)v103,
                                 0,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation < 0 )
          {
            WdLogSingleEntry1(3LL, 11514LL);
          }
          else
          {
            v76 = 1;
            v27 = v87;
LABEL_35:
            if ( v26 )
            {
              v28 = (_QWORD *)v89;
              v29 = (_DWORD *)(v89 + 68);
              if ( v89 + 68 >= MmUserProbeAddress )
                v29 = (_DWORD *)MmUserProbeAddress;
              *v29 = v6[17];
              v30 = v28 + 8;
              if ( (unsigned __int64)(v28 + 8) >= MmUserProbeAddress )
                v30 = (_DWORD *)MmUserProbeAddress;
              *v30 = v6[16];
              for ( i = 0; i < v6[2]; ++i )
              {
                v37 = 80LL * i;
                v38 = v93;
                v80 = v96 + *(_DWORD *)(*((_QWORD *)v93 + 2) + v37 + 8) - v6[14];
                v39 = v37 + v28[2];
                v40 = (_DWORD *)v39;
                if ( v39 >= MmUserProbeAddress )
                  v40 = (_DWORD *)MmUserProbeAddress;
                *v40 = *(_DWORD *)(v37 + *((_QWORD *)v93 + 2));
                v41 = (_DWORD *)(v39 + 16);
                if ( v39 + 16 >= MmUserProbeAddress )
                  v41 = (_DWORD *)MmUserProbeAddress;
                *v41 = *(_DWORD *)(*((_QWORD *)v38 + 2) + v37 + 16);
                v42 = (_QWORD *)(v39 + 8);
                if ( v39 + 8 >= MmUserProbeAddress )
                  v42 = (_QWORD *)MmUserProbeAddress;
                *v42 = v80;
                v23 = v79;
                v28 = (_QWORD *)v89;
              }
              if ( v6[8] )
              {
                v32 = (char *)v28[3];
                v33 = v6[8];
                if ( (unsigned __int64)&v32[v33] > MmUserProbeAddress || &v32[v33] <= v32 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v32, Src, v33);
                v23 = v79;
                v28 = (_QWORD *)v89;
              }
              if ( v6[12] )
              {
                v74 = (char *)v28[5];
                v75 = v6[12];
                if ( (unsigned __int64)&v74[v75] > MmUserProbeAddress || &v74[v75] <= v74 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v74, v85, v75);
                v23 = v79;
              }
              if ( v6[16] )
              {
                v34 = *(char **)(v89 + 56);
                v35 = v6[16];
                if ( (unsigned __int64)&v34[v35] > MmUserProbeAddress || &v34[v35] <= v34 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v34, v27, v35);
                v23 = v79;
              }
            }
          }
        }
        else
        {
          v65 = *(_DWORD *)(ObjectA + 12);
          if ( (v65 & 0x20) != 0 )
          {
            if ( *(_DWORD *)(ObjectA + 132) != v6[2] )
            {
              v52 = *(unsigned int *)(ObjectA + 132);
              v53 = v6[2];
              goto LABEL_107;
            }
            v66 = v6[8];
            v67 = *(_DWORD *)(ObjectA + 112);
            v81 = v67;
            if ( v66 != v67 )
            {
              v52 = v67;
              v53 = v66;
LABEL_107:
              WdLogSingleEntry4(3LL, v79, v53, v52, -1073741811LL);
LABEL_108:
              StandardAllocation = -1073741811;
              goto LABEL_109;
            }
            v68 = *(_DWORD *)(ObjectA + 216);
            if ( !v68 && *(_DWORD *)(*(_QWORD *)(v24 + 16) + 2096LL) < 0x5000u )
            {
              WdLogSingleEntry2(3LL, v79, -1073741811LL);
              goto LABEL_108;
            }
            v102 = 0LL;
            v101[2] = v68;
            v101[0] = *(_DWORD *)(ObjectA + 208);
            v101[1] = *(_DWORD *)(ObjectA + 212);
            v101[3] = 7;
            memset(v100, 0, 0x1A8uLL);
            v69 = v100[0] & 0xFFFFBEFF | (4 * (v65 & 0x40 | (32 * (v65 & 0x80)))) | 0x41;
            HIDWORD(v100[0]) = *v6;
            LODWORD(v100[2]) = 4;
            v100[3] = v101;
            v100[39] = *(_QWORD *)(ObjectA + 104);
            LODWORD(v100[40]) = v81;
            v70 = *(_QWORD *)(ObjectA + 192);
            if ( (v65 & 0x200) != 0 )
              v100[42] = *(_QWORD *)(ObjectA + 192);
            else
              v100[41] = *(_QWORD *)(ObjectA + 192);
            v100[43] = *(_QWORD *)(ObjectA + 224);
            LODWORD(v100[6]) = *(_DWORD *)(ObjectA + 232);
            v100[44] = v85;
            LODWORD(v100[45]) = v6[12];
            v27 = v87;
            v100[46] = v87;
            LODWORD(v100[47]) = v6[16];
            LODWORD(v100[0]) = v69 ^ (v69 ^ (v65 << 7)) & 0x400 | 0x200;
            v100[52] = *(_QWORD *)(ObjectA + 184);
            if ( (v65 & 0x200) != 0 )
            {
              v100[42] = v70;
              goto LABEL_143;
            }
            if ( (v65 & 0x400) != 0 )
            {
              v100[41] = v70;
LABEL_143:
              v72 = *(_DWORD *)(ObjectA + 204);
              v71 = v69 ^ (v69 ^ (v65 << 7)) & 0x400 | 0x200;
              LODWORD(v100[0]) = v71 ^ ((unsigned __int8)v71 ^ (unsigned __int8)(v65 >> 7)) & 0x10;
              LODWORD(v100[49]) = v72;
            }
            StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                   v79,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v100,
                                   (struct COREDEVICEACCESS *)v103);
            if ( StandardAllocation >= 0 )
            {
              v76 = 1;
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v90, (DXGRESOURCEREFERENCE *)v95, v100[1])
                        + 128LL) = ObjectA;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v95);
              memmove(Src, *(const void **)(ObjectA + 104), v6[8]);
              v6[17] = v100[1];
              v73 = v92;
              *(_DWORD *)v92 = HIDWORD(v100[6]);
              v73[4] = v6[16];
              *((_QWORD *)v73 + 1) = v27;
              *((_QWORD *)v6 + 2) = v73;
              *((_QWORD *)v6 + 3) = Src;
              *((_QWORD *)v6 + 5) = v85;
              *((_QWORD *)v6 + 7) = v27;
              v26 = v77;
              goto LABEL_35;
            }
          }
          else
          {
            StandardAllocation = -1073741811;
            WdLogSingleEntry3(3LL, v79, 0LL, -1073741811LL);
          }
        }
        if ( StandardAllocation < 0 )
          goto LABEL_109;
        goto LABEL_54;
      }
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v79, v6[2], -1073741801LL);
    }
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v97);
    `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v88);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v103);
    if ( v84 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91);
    if ( v78 )
      goto LABEL_58;
    return (unsigned int)StandardAllocation;
  }
  WdLogSingleEntry2(4LL, ObjectA, -1073741823LL);
  `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v88);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v103);
  if ( v84 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v91);
  if ( v78 && _InterlockedExchangeAdd64((volatile signed __int64 *)v78 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v78 + 2), v78);
  return 3221225473LL;
}
