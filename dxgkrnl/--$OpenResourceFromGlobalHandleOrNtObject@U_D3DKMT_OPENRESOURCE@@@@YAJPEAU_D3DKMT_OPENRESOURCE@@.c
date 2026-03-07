__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(ULONG64 a1, unsigned int a2)
{
  bool v4; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int *v7; // r14
  ULONG64 v8; // rax
  struct DXGDEVICE *v9; // r15
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rsi
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  char v17; // r8
  unsigned __int64 v18; // rax
  signed int StandardAllocation; // r15d
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  void *v23; // r8
  DXGDEVICE *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rax
  bool v27; // si
  void *v28; // r12
  _QWORD *v29; // r8
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  unsigned int i; // r10d
  char *v33; // rcx
  size_t v34; // r8
  char *v35; // rcx
  size_t v36; // r8
  __int64 v38; // r11
  unsigned int *v39; // rsi
  ULONG64 v40; // r9
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  _QWORD *v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned int v46; // eax
  __int64 v47; // rsi
  unsigned int v48; // ecx
  int v49; // ecx
  struct DXGDEVICE *v50; // rax
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  struct DXGPROCESS *v55; // rsi
  unsigned int *v56; // r12
  unsigned int v57; // eax
  __int64 v58; // r10
  int v59; // edx
  struct DXGRESOURCE *v60; // r14
  unsigned int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // r9
  int v64; // edx
  __int64 v65; // rcx
  unsigned int v66; // r15d
  unsigned int v67; // eax
  unsigned int v68; // ecx
  int v69; // ecx
  unsigned int v70; // r8d
  __int64 v71; // rdx
  int v72; // ecx
  int v73; // eax
  _DWORD *v74; // rcx
  char *v75; // rcx
  size_t v76; // r8
  char v77; // [rsp+50h] [rbp-3E8h]
  bool v78; // [rsp+51h] [rbp-3E7h]
  struct DXGDEVICE *v79; // [rsp+58h] [rbp-3E0h] BYREF
  struct DXGDEVICE *v80; // [rsp+60h] [rbp-3D8h] BYREF
  __int64 v81; // [rsp+68h] [rbp-3D0h]
  unsigned int v82; // [rsp+70h] [rbp-3C8h]
  char v83[8]; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v84; // [rsp+80h] [rbp-3B8h]
  char v85; // [rsp+88h] [rbp-3B0h]
  void *v86; // [rsp+90h] [rbp-3A8h]
  void *Src; // [rsp+98h] [rbp-3A0h]
  void *v88; // [rsp+A0h] [rbp-398h]
  __int64 v89; // [rsp+A8h] [rbp-390h] BYREF
  ULONG64 v90; // [rsp+B0h] [rbp-388h]
  struct DXGPROCESS *v91; // [rsp+B8h] [rbp-380h]
  _BYTE v92[16]; // [rsp+C0h] [rbp-378h] BYREF
  void *v93; // [rsp+D0h] [rbp-368h]
  unsigned int *v94; // [rsp+D8h] [rbp-360h]
  _BYTE v95[16]; // [rsp+E0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v96; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v97; // [rsp+F8h] [rbp-340h]
  _BYTE v98[32]; // [rsp+100h] [rbp-338h] BYREF
  _OWORD v99[5]; // [rsp+120h] [rbp-318h] BYREF
  _BYTE v100[32]; // [rsp+170h] [rbp-2C8h] BYREF
  _QWORD v101[54]; // [rsp+190h] [rbp-2A8h] BYREF
  _DWORD v102[4]; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v103; // [rsp+350h] [rbp-E8h]
  _BYTE v104[160]; // [rsp+360h] [rbp-D8h] BYREF

  v82 = a2;
  v90 = a1;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v78 = v4;
  Current = DXGPROCESS::GetCurrent(v5);
  v91 = Current;
  v86 = 0LL;
  v88 = 0LL;
  Src = 0LL;
  v77 = 0;
  if ( !Current )
  {
    v12 = -1073741811;
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
    return v12;
  }
  memset(v99, 0, 0x48uLL);
  v7 = (unsigned int *)v99;
  if ( v4 )
  {
    v8 = a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v99[0] = *(_OWORD *)v8;
    v99[1] = *(_OWORD *)(v8 + 16);
    v99[2] = *(_OWORD *)(v8 + 32);
    v99[3] = *(_OWORD *)(v8 + 48);
    *(_QWORD *)&v99[4] = *(_QWORD *)(v8 + 64);
  }
  else
  {
    v7 = (unsigned int *)a1;
  }
  v94 = v7;
  v97 = *((_QWORD *)v7 + 7);
  v80 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v79, *v7, (struct _KTHREAD **)Current, &v80);
  v9 = v80;
  if ( !v80 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, *v7, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_158;
  }
  if ( !v7[16] && !v7[12] )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(3LL, v80, -1073741811LL);
    goto LABEL_158;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92,
    v80);
  v84 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  v85 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, (__int64)v9, 2, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, v9, v11);
LABEL_155:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
LABEL_158:
    v50 = v79;
    if ( v79 )
    {
LABEL_159:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
    }
    return v12;
  }
  if ( !a2 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v9, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_155;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v95);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
  if ( (*((_DWORD *)Current + 106) & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, a2, 2);
    goto LABEL_12;
  }
  v44 = *((_QWORD *)Current + 76);
  v45 = v44 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v44 + 248));
  v46 = (a2 >> 6) & 0xFFFFFF;
  if ( v46 >= *(_DWORD *)(v44 + 296) )
    goto LABEL_81;
  v47 = *(_QWORD *)(v44 + 280);
  v48 = *(_DWORD *)(v47 + 16LL * v46 + 8);
  if ( a2 >> 30 != ((v48 >> 5) & 3) )
    goto LABEL_81;
  if ( (v48 & 0x2000) != 0 )
    goto LABEL_81;
  v49 = v48 & 0x1F;
  if ( !v49 )
    goto LABEL_81;
  if ( v49 != 2 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_81:
    ObjectA = 0LL;
    goto LABEL_82;
  }
  ObjectA = *(_QWORD *)(v47 + 16LL * v46);
LABEL_82:
  _InterlockedAdd((volatile signed __int32 *)(v45 + 16), 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v45, 0LL);
  KeLeaveCriticalRegion();
  v9 = v80;
LABEL_12:
  if ( !ObjectA )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(3LL, v9, v82, -1073741811LL);
LABEL_85:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v95);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
    v50 = v79;
    if ( !v79 )
      return v12;
    goto LABEL_159;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v15 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v15 )
    {
      v12 = -1073741811;
      WdLogSingleEntry4(3LL, v80, v82, -1073741811LL, 11161LL);
      goto LABEL_85;
    }
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v15 + 1, v15);
  }
  while ( v16 != v15 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v95);
  v89 = ObjectA;
  if ( (*(_DWORD *)(ObjectA + 12) & 0x10) == 0 )
  {
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v98, v91);
    if ( v17 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v104);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v98, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
      v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104, 0LL);
      StandardAllocation = v51;
      if ( v51 < 0 )
      {
        WdLogSingleEntry2(3LL, v80, v51);
LABEL_55:
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
        if ( v85 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
        if ( v79 )
        {
LABEL_58:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
        }
        return (unsigned int)StandardAllocation;
      }
    }
    v18 = 80LL * v7[2];
    StandardAllocation = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v18 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, v80, StandardAllocation);
    }
    else
    {
      v20 = 80LL * v7[2];
      if ( !is_mul_ok(v7[2], 0x50uLL) )
        v20 = -1LL;
      v93 = (void *)operator new[](v20, 0x4B677844u, 256LL);
      if ( v93 )
      {
        v21 = v7[16];
        if ( v21 )
        {
          v88 = (void *)operator new[](v21, 0x4B677844u, 258LL);
          if ( !v88 )
          {
            v52 = v7[16];
            goto LABEL_105;
          }
        }
        if ( v7[12] )
        {
          v86 = (void *)operator new[](v7[12], 0x4B677844u, 258LL);
          if ( !v86 )
          {
            v52 = v7[12];
LABEL_105:
            StandardAllocation = -1073741801;
            v24 = v80;
            WdLogSingleEntry3(3LL, v80, v52, -1073741801LL);
LABEL_109:
            if ( v77 )
            {
              v55 = v91;
              DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v100, v91);
              v56 = v94;
              v57 = (v94[17] >> 6) & 0xFFFFFF;
              if ( v57 < *((_DWORD *)v55 + 74)
                && (v58 = *((_QWORD *)v55 + 35), ((v94[17] >> 25) & 0x60) == (*(_BYTE *)(v58 + 16LL * v57 + 8) & 0x60))
                && (*(_DWORD *)(v58 + 16LL * v57 + 8) & 0x2000) == 0
                && (v59 = *(_DWORD *)(v58 + 16LL * v57 + 8) & 0x1F) != 0 )
              {
                if ( v59 != 4 )
                {
                  WdLogSingleEntry1(2LL, 267LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Handle type mismatch",
                    267LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_116;
                }
                v60 = *(struct DXGRESOURCE **)(v58 + 16LL * v57);
              }
              else
              {
LABEL_116:
                v60 = 0LL;
              }
              if ( v60 )
              {
                v61 = v56[17];
                v62 = (v61 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v62 < *((_DWORD *)v55 + 74) )
                {
                  v63 = *((_QWORD *)v55 + 35);
                  v64 = *(_DWORD *)(v63 + 16 * v62 + 8);
                  if ( ((v61 >> 25) & 0x60) == (*(_BYTE *)(v63 + 16 * v62 + 8) & 0x60)
                    && (v64 & 0x2000) == 0
                    && (v64 & 0x1F) != 0 )
                  {
                    *(_DWORD *)(v63 + 16LL * ((v61 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                  }
                }
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v100);
              DXGDEVICE::DestroyAllocationInternal(
                v24,
                0,
                0LL,
                v60,
                0LL,
                (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
            }
LABEL_54:
            operator delete(v88);
            operator delete(v86);
            operator delete(v93);
            operator delete(Src);
            goto LABEL_55;
          }
        }
        v22 = v7[8];
        if ( v22 )
        {
          v23 = (void *)operator new[](v22, 0x4B677844u, 258LL);
          Src = v23;
          if ( !v23 )
          {
            v52 = v7[8];
            goto LABEL_105;
          }
        }
        else
        {
          v23 = Src;
        }
        v24 = v80;
        if ( (*((_BYTE *)v80 + 1901) & 1) != 0
          || (v25 = *((_QWORD *)v80 + 2), *(_QWORD *)(ObjectA + 80) == v25)
          && ((v26 = *((_QWORD *)v80 + 235)) == 0
           || *(_QWORD *)(v26 + 2928)
           || (v65 = *(_QWORD *)(ObjectA + 96)) == 0
           || v65 == v26) )
        {
          v27 = v78;
          if ( v78 )
          {
            *((_QWORD *)v7 + 7) = v88;
            *((_QWORD *)v7 + 5) = v86;
            *((_QWORD *)v7 + 3) = v23;
            *((_QWORD *)v7 + 2) = v93;
          }
          StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                                 v24,
                                 0,
                                 (struct COREDEVICEACCESS *)v104,
                                 0,
                                 0LL,
                                 0LL,
                                 0LL);
          if ( StandardAllocation < 0 )
          {
            WdLogSingleEntry1(3LL, 11474LL);
          }
          else
          {
            v77 = 1;
            v28 = v88;
LABEL_35:
            if ( v27 )
            {
              v29 = (_QWORD *)v90;
              v30 = (_DWORD *)(v90 + 68);
              if ( v90 + 68 >= MmUserProbeAddress )
                v30 = (_DWORD *)MmUserProbeAddress;
              *v30 = v7[17];
              v31 = v29 + 8;
              if ( (unsigned __int64)(v29 + 8) >= MmUserProbeAddress )
                v31 = (_DWORD *)MmUserProbeAddress;
              *v31 = v7[16];
              for ( i = 0; i < v7[2]; ++i )
              {
                v38 = 80LL * i;
                v39 = v94;
                v81 = v97 + *(_DWORD *)(*((_QWORD *)v94 + 2) + v38 + 8) - v7[14];
                v40 = v38 + v29[2];
                v41 = (_DWORD *)v40;
                if ( v40 >= MmUserProbeAddress )
                  v41 = (_DWORD *)MmUserProbeAddress;
                *v41 = *(_DWORD *)(v38 + *((_QWORD *)v94 + 2));
                v42 = (_DWORD *)(v40 + 16);
                if ( v40 + 16 >= MmUserProbeAddress )
                  v42 = (_DWORD *)MmUserProbeAddress;
                *v42 = *(_DWORD *)(*((_QWORD *)v39 + 2) + v38 + 16);
                v43 = (_QWORD *)(v40 + 8);
                if ( v40 + 8 >= MmUserProbeAddress )
                  v43 = (_QWORD *)MmUserProbeAddress;
                *v43 = v81;
                v24 = v80;
                v29 = (_QWORD *)v90;
              }
              if ( v7[8] )
              {
                v33 = (char *)v29[3];
                v34 = v7[8];
                if ( (unsigned __int64)&v33[v34] > MmUserProbeAddress || &v33[v34] <= v33 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v33, Src, v34);
                v24 = v80;
                v29 = (_QWORD *)v90;
              }
              if ( v7[12] )
              {
                v75 = (char *)v29[5];
                v76 = v7[12];
                if ( (unsigned __int64)&v75[v76] > MmUserProbeAddress || &v75[v76] <= v75 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v75, v86, v76);
                v24 = v80;
              }
              if ( v7[16] )
              {
                v35 = *(char **)(v90 + 56);
                v36 = v7[16];
                if ( (unsigned __int64)&v35[v36] > MmUserProbeAddress || &v35[v36] <= v35 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v35, v28, v36);
                v24 = v80;
              }
            }
          }
        }
        else
        {
          v66 = *(_DWORD *)(ObjectA + 12);
          if ( (v66 & 0x20) != 0 )
          {
            if ( *(_DWORD *)(ObjectA + 132) != v7[2] )
            {
              v53 = *(unsigned int *)(ObjectA + 132);
              v54 = v7[2];
              goto LABEL_107;
            }
            v67 = v7[8];
            v68 = *(_DWORD *)(ObjectA + 112);
            v82 = v68;
            if ( v67 != v68 )
            {
              v53 = v68;
              v54 = v67;
LABEL_107:
              WdLogSingleEntry4(3LL, v80, v54, v53, -1073741811LL);
LABEL_108:
              StandardAllocation = -1073741811;
              goto LABEL_109;
            }
            v69 = *(_DWORD *)(ObjectA + 216);
            if ( !v69 && *(_DWORD *)(*(_QWORD *)(v25 + 16) + 2096LL) < 0x5000u )
            {
              WdLogSingleEntry2(3LL, v80, -1073741811LL);
              goto LABEL_108;
            }
            v103 = 0LL;
            v102[2] = v69;
            v102[0] = *(_DWORD *)(ObjectA + 208);
            v102[1] = *(_DWORD *)(ObjectA + 212);
            v102[3] = 7;
            memset(v101, 0, 0x1A8uLL);
            v70 = v101[0] & 0xFFFFBEFF | (4 * (v66 & 0x40 | (32 * (v66 & 0x80)))) | 0x41;
            HIDWORD(v101[0]) = *v7;
            LODWORD(v101[2]) = 4;
            v101[3] = v102;
            v101[39] = *(_QWORD *)(ObjectA + 104);
            LODWORD(v101[40]) = v82;
            v71 = *(_QWORD *)(ObjectA + 192);
            if ( (v66 & 0x200) != 0 )
              v101[42] = *(_QWORD *)(ObjectA + 192);
            else
              v101[41] = *(_QWORD *)(ObjectA + 192);
            v101[43] = *(_QWORD *)(ObjectA + 224);
            LODWORD(v101[6]) = *(_DWORD *)(ObjectA + 232);
            v101[44] = v86;
            LODWORD(v101[45]) = v7[12];
            v28 = v88;
            v101[46] = v88;
            LODWORD(v101[47]) = v7[16];
            LODWORD(v101[0]) = v70 ^ (v70 ^ (v66 << 7)) & 0x400 | 0x200;
            v101[52] = *(_QWORD *)(ObjectA + 184);
            if ( (v66 & 0x200) != 0 )
            {
              v101[42] = v71;
              goto LABEL_143;
            }
            if ( (v66 & 0x400) != 0 )
            {
              v101[41] = v71;
LABEL_143:
              v73 = *(_DWORD *)(ObjectA + 204);
              v72 = v70 ^ (v70 ^ (v66 << 7)) & 0x400 | 0x200;
              LODWORD(v101[0]) = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(v66 >> 7)) & 0x10;
              LODWORD(v101[49]) = v73;
            }
            StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                   v80,
                                   (struct _D3DKM_CREATESTANDARDALLOCATION *)v101,
                                   (struct COREDEVICEACCESS *)v104);
            if ( StandardAllocation >= 0 )
            {
              v77 = 1;
              *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v91, (DXGRESOURCEREFERENCE *)&v96, v101[1])
                        + 128LL) = ObjectA;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v96);
              memmove(Src, *(const void **)(ObjectA + 104), v7[8]);
              v7[17] = v101[1];
              v74 = v93;
              *(_DWORD *)v93 = HIDWORD(v101[6]);
              v74[4] = v7[16];
              *((_QWORD *)v74 + 1) = v28;
              *((_QWORD *)v7 + 2) = v74;
              *((_QWORD *)v7 + 3) = Src;
              *((_QWORD *)v7 + 5) = v86;
              *((_QWORD *)v7 + 7) = v28;
              v27 = v78;
              goto LABEL_35;
            }
          }
          else
          {
            StandardAllocation = -1073741811;
            WdLogSingleEntry3(3LL, v80, 0LL, -1073741811LL);
          }
        }
        if ( StandardAllocation < 0 )
          goto LABEL_109;
        goto LABEL_54;
      }
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v80, v7[2], -1073741801LL);
    }
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v98);
    `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
    if ( v79 )
      goto LABEL_58;
    return (unsigned int)StandardAllocation;
  }
  WdLogSingleEntry2(4LL, ObjectA, -1073741823LL);
  `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v89);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
  if ( v85 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
  if ( v79 && _InterlockedExchangeAdd64((volatile signed __int64 *)v79 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v79 + 2), v79);
  return 3221225473LL;
}
