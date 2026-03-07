__int64 __fastcall OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
        ULONG64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v5; // bl
  struct DXGPROCESS *Current; // r12
  unsigned int *v7; // r14
  ULONG64 v8; // rax
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // rbx
  struct DXGDEVICE *v11; // r15
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // r13
  int v16; // ecx
  char v17; // r8
  unsigned __int64 v18; // rax
  signed int StandardAllocation; // r12d
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  void *v22; // r12
  unsigned int v23; // eax
  void *v24; // rcx
  ULONG_PTR Count; // r8
  __int64 v26; // rax
  void *v27; // r13
  _QWORD *v28; // r8
  _DWORD *v29; // rdx
  _DWORD *v30; // rdx
  unsigned int i; // r10d
  char *v32; // rcx
  size_t v33; // r8
  char *v34; // rcx
  size_t v35; // r8
  char *v36; // rcx
  __int64 v38; // r11
  unsigned int *v39; // r15
  ULONG64 v40; // r9
  _DWORD *v41; // rdx
  _DWORD *v42; // rdx
  _QWORD *v43; // rdx
  struct DXGDEVICE *v44; // rax
  bool v45; // zf
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  struct DXGPROCESS *v50; // r14
  unsigned int *v51; // r10
  unsigned int v52; // eax
  __int64 v53; // r9
  int v54; // edx
  struct DXGRESOURCE *v55; // rbx
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // r9
  int v59; // edx
  __int64 v60; // rdx
  unsigned int v61; // ebx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  int v64; // ecx
  unsigned int v65; // r8d
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // eax
  _DWORD *v69; // rcx
  char *v70; // rcx
  size_t v71; // r8
  char v72; // [rsp+50h] [rbp-408h]
  bool v73; // [rsp+51h] [rbp-407h]
  struct DXGDEVICE *v74; // [rsp+58h] [rbp-400h] BYREF
  void *v75; // [rsp+60h] [rbp-3F8h]
  __int64 v76; // [rsp+68h] [rbp-3F0h]
  struct DXGDEVICE *v77; // [rsp+70h] [rbp-3E8h] BYREF
  int v78; // [rsp+78h] [rbp-3E0h]
  void *v79; // [rsp+80h] [rbp-3D8h]
  void *Src; // [rsp+88h] [rbp-3D0h]
  DXGSHAREDRESOURCE *v81; // [rsp+90h] [rbp-3C8h] BYREF
  __int64 v82; // [rsp+98h] [rbp-3C0h] BYREF
  struct DXGADAPTER *v83; // [rsp+A0h] [rbp-3B8h]
  char v84; // [rsp+A8h] [rbp-3B0h]
  __int64 v85; // [rsp+B0h] [rbp-3A8h]
  ULONG64 v86; // [rsp+B8h] [rbp-3A0h]
  _BYTE v87[16]; // [rsp+C0h] [rbp-398h] BYREF
  unsigned int *v88; // [rsp+D0h] [rbp-388h]
  void *v89; // [rsp+D8h] [rbp-380h]
  struct _EX_RUNDOWN_REF *v90; // [rsp+E0h] [rbp-378h] BYREF
  struct DXGPROCESS *v91; // [rsp+E8h] [rbp-370h]
  _BYTE v92[32]; // [rsp+F0h] [rbp-368h] BYREF
  _OWORD v93[7]; // [rsp+110h] [rbp-348h] BYREF
  _BYTE v94[32]; // [rsp+180h] [rbp-2D8h] BYREF
  _QWORD v95[54]; // [rsp+1A0h] [rbp-2B8h] BYREF
  _DWORD v96[4]; // [rsp+350h] [rbp-108h] BYREF
  __int64 v97; // [rsp+360h] [rbp-F8h]
  __int64 v98[20]; // [rsp+370h] [rbp-E8h] BYREF

  v78 = a4;
  v85 = a3;
  v86 = a1;
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v73 = v5;
  Current = DXGPROCESS::GetCurrent();
  v91 = Current;
  v79 = 0LL;
  v75 = 0LL;
  Src = 0LL;
  v72 = 0;
  if ( !Current )
  {
    v14 = -1073741811;
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
    return v14;
  }
  memset(v93, 0, 0x68uLL);
  v7 = (unsigned int *)v93;
  if ( v5 )
  {
    v8 = a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v93[0] = *(_OWORD *)v8;
    v93[1] = *(_OWORD *)(v8 + 16);
    v93[2] = *(_OWORD *)(v8 + 32);
    v93[3] = *(_OWORD *)(v8 + 48);
    v93[4] = *(_OWORD *)(v8 + 64);
    v93[5] = *(_OWORD *)(v8 + 80);
    *(_QWORD *)&v93[6] = *(_QWORD *)(v8 + 96);
  }
  else
  {
    v7 = (unsigned int *)a1;
  }
  v88 = v7;
  v76 = *((_QWORD *)v7 + 9);
  v77 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74, *v7, (struct _KTHREAD **)Current, &v77);
  v9 = v77;
  v90 = (struct _EX_RUNDOWN_REF *)v77;
  if ( !v77 )
  {
    v14 = -1073741811;
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
    goto LABEL_68;
  }
  if ( !v7[16] && !v7[12] )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(3LL, v77, -1073741811LL);
LABEL_68:
    v44 = v74;
    if ( v74 )
      goto LABEL_149;
    return v14;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87,
    v77);
  v10 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  v83 = (struct DXGADAPTER *)v10;
  _InterlockedAdd64((volatile signed __int64 *)(v10 + 24), 1uLL);
  v82 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v10 + 136, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v10 + 152), 1u);
  v84 = 1;
  v11 = v77;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, (__int64)v77, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, v11, v13);
LABEL_146:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    goto LABEL_147;
  }
  if ( !v85 )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: No NT Object or global handle specified. Returning 0x%I64x",
      (__int64)v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_146;
  }
  v15 = *(_QWORD *)(v85 + 16);
  if ( !v15 )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(3LL, v11, v85, -1073741811LL);
    goto LABEL_146;
  }
  v16 = *(_DWORD *)(v15 + 12);
  if ( (v16 & 0x1000) == 0 || v78 )
  {
    v81 = 0LL;
    if ( (v16 & 0x10) != 0 )
    {
      v14 = -1073741823;
      WdLogSingleEntry2(4LL, v15, -1073741823LL);
      `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
      if ( v74 )
      {
        v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
        goto LABEL_150;
      }
      return v14;
    }
    DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v92, Current);
    if ( v17 )
    {
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v98);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v92, 1u);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
      v46 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
      v14 = v46;
      if ( v46 < 0 )
      {
        WdLogSingleEntry2(3LL, v11, v46);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v92);
        `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
        if ( !v84 )
        {
LABEL_148:
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
          v44 = v74;
          if ( v74 )
          {
LABEL_149:
            v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_150:
            if ( v45 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
          }
          return v14;
        }
LABEL_147:
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
        goto LABEL_148;
      }
    }
    v18 = 80LL * v7[4];
    StandardAllocation = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v18 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, v11, StandardAllocation);
    }
    else
    {
      v20 = 80LL * v7[4];
      if ( !is_mul_ok(v7[4], 0x50uLL) )
        v20 = -1LL;
      v89 = (void *)operator new[](v20, 0x4B677844u, 256LL);
      if ( v89 )
      {
        v21 = v7[16];
        if ( v21 )
        {
          v22 = (void *)operator new[](v21, 0x4B677844u, 258LL);
          v75 = v22;
          if ( !v22 )
          {
            v47 = v7[16];
            goto LABEL_92;
          }
        }
        else
        {
          v22 = v75;
        }
        if ( v7[12] )
        {
          v79 = (void *)operator new[](v7[12], 0x4B677844u, 258LL);
          if ( !v79 )
          {
            v47 = v7[12];
            goto LABEL_92;
          }
        }
        v23 = v7[8];
        if ( !v23 )
        {
          v24 = Src;
          goto LABEL_23;
        }
        v24 = (void *)operator new[](v23, 0x4B677844u, 258LL);
        Src = v24;
        if ( v24 )
        {
LABEL_23:
          if ( (*((_BYTE *)v11 + 1901) & 1) != 0
            || (Count = v90[2].Count, *(_QWORD *)(v15 + 80) == Count)
            && ((v26 = *((_QWORD *)v11 + 235)) == 0
             || *(_QWORD *)(v26 + 2928)
             || (v60 = *(_QWORD *)(v15 + 96)) == 0
             || v60 == v26) )
          {
            if ( v73 )
            {
              *((_QWORD *)v7 + 9) = v22;
              *((_QWORD *)v7 + 7) = v79;
              *((_QWORD *)v7 + 5) = v24;
              *((_QWORD *)v7 + 3) = v89;
            }
            StandardAllocation = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                                   v11,
                                   (__int64)v7,
                                   0,
                                   v85,
                                   0,
                                   (struct COREDEVICEACCESS *)v98,
                                   v78,
                                   0LL,
                                   0LL,
                                   0LL);
            if ( StandardAllocation >= 0 )
            {
              v72 = 1;
              v27 = v75;
              goto LABEL_31;
            }
            WdLogSingleEntry1(3LL, 11474LL);
LABEL_136:
            v27 = v75;
            goto LABEL_49;
          }
          v61 = *(_DWORD *)(v15 + 12);
          if ( (v61 & 0x20) == 0 )
          {
            StandardAllocation = -1073741811;
            WdLogSingleEntry3(3LL, v11, v85, -1073741811LL);
            goto LABEL_136;
          }
          if ( *(_DWORD *)(v15 + 132) != v7[4] )
          {
            v48 = *(unsigned int *)(v15 + 132);
            v49 = v7[4];
LABEL_94:
            WdLogSingleEntry4(3LL, v11, v49, v48, -1073741811LL);
LABEL_95:
            StandardAllocation = -1073741811;
            goto LABEL_96;
          }
          v62 = v7[8];
          v63 = *(_DWORD *)(v15 + 112);
          v78 = v63;
          if ( v62 != v63 )
          {
            v48 = v63;
            v49 = v62;
            goto LABEL_94;
          }
          v64 = *(_DWORD *)(v15 + 216);
          if ( !v64 && *(_DWORD *)(*(_QWORD *)(Count + 16) + 2096LL) < 0x5000u )
          {
            WdLogSingleEntry2(3LL, v11, -1073741811LL);
            goto LABEL_95;
          }
          v97 = 0LL;
          v96[2] = v64;
          v96[0] = *(_DWORD *)(v15 + 208);
          v96[1] = *(_DWORD *)(v15 + 212);
          v96[3] = 7;
          memset(v95, 0, 0x1A8uLL);
          v65 = v95[0] & 0xFFFFBEFF | (4 * (v61 & 0x40 | (32 * (v61 & 0x80)))) | 0x41;
          HIDWORD(v95[0]) = *v7;
          LODWORD(v95[2]) = 4;
          v95[3] = v96;
          v95[39] = *(_QWORD *)(v15 + 104);
          LODWORD(v95[40]) = v78;
          v66 = *(_QWORD *)(v15 + 192);
          if ( (v61 & 0x200) != 0 )
            v95[42] = *(_QWORD *)(v15 + 192);
          else
            v95[41] = *(_QWORD *)(v15 + 192);
          v95[43] = *(_QWORD *)(v15 + 224);
          LODWORD(v95[6]) = *(_DWORD *)(v15 + 232);
          v95[44] = v79;
          LODWORD(v95[45]) = v7[12];
          v95[46] = v22;
          LODWORD(v95[47]) = v7[16];
          LODWORD(v95[0]) = v65 ^ (v65 ^ (v61 << 7)) & 0x400 | 0x200;
          v95[52] = *(_QWORD *)(v15 + 184);
          if ( (v61 & 0x200) != 0 )
          {
            v95[42] = v66;
          }
          else
          {
            if ( (v61 & 0x400) == 0 )
              goto LABEL_133;
            v95[41] = v66;
          }
          v68 = *(_DWORD *)(v15 + 204);
          v67 = v65 ^ (v65 ^ (v61 << 7)) & 0x400 | 0x200;
          LODWORD(v95[0]) = v67 ^ ((unsigned __int8)v67 ^ (unsigned __int8)(v61 >> 7)) & 0x10;
          LODWORD(v95[49]) = v68;
LABEL_133:
          StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                                 v11,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v95,
                                 (struct COREDEVICEACCESS *)v98);
          if ( StandardAllocation >= 0 )
          {
            v72 = 1;
            *(_QWORD *)(*(_QWORD *)DXGPROCESS::GetResourceSafe((__int64)v91, (DXGRESOURCEREFERENCE *)&v90, v95[1])
                      + 128LL) = v15;
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v90);
            memmove(Src, *(const void **)(v15 + 104), v7[8]);
            v7[20] = v95[1];
            v69 = v89;
            *(_DWORD *)v89 = HIDWORD(v95[6]);
            v69[4] = v7[16];
            v27 = v75;
            *((_QWORD *)v69 + 1) = v75;
            *((_QWORD *)v7 + 3) = v69;
            *((_QWORD *)v7 + 5) = Src;
            *((_QWORD *)v7 + 7) = v79;
            *((_QWORD *)v7 + 9) = v27;
LABEL_31:
            if ( v73 )
            {
              v28 = (_QWORD *)v86;
              v29 = (_DWORD *)(v86 + 80);
              if ( v86 + 80 >= MmUserProbeAddress )
                v29 = (_DWORD *)MmUserProbeAddress;
              *v29 = v7[20];
              v30 = v28 + 8;
              if ( (unsigned __int64)(v28 + 8) >= MmUserProbeAddress )
                v30 = (_DWORD *)MmUserProbeAddress;
              *v30 = v7[16];
              for ( i = 0; i < v7[4]; ++i )
              {
                v38 = 80LL * i;
                v39 = v88;
                v85 = v76 + *(_DWORD *)(*((_QWORD *)v88 + 3) + v38 + 8) - v7[18];
                v40 = v38 + v28[3];
                v41 = (_DWORD *)v40;
                if ( v40 >= MmUserProbeAddress )
                  v41 = (_DWORD *)MmUserProbeAddress;
                *v41 = *(_DWORD *)(v38 + *((_QWORD *)v88 + 3));
                v42 = (_DWORD *)(v40 + 16);
                if ( v40 + 16 >= MmUserProbeAddress )
                  v42 = (_DWORD *)MmUserProbeAddress;
                *v42 = *(_DWORD *)(*((_QWORD *)v39 + 3) + v38 + 16);
                v43 = (_QWORD *)(v40 + 8);
                if ( v40 + 8 >= MmUserProbeAddress )
                  v43 = (_QWORD *)MmUserProbeAddress;
                *v43 = v85;
                v11 = v77;
                v28 = (_QWORD *)v86;
              }
              if ( v7[8] )
              {
                v32 = (char *)v28[5];
                v33 = v7[8];
                if ( (unsigned __int64)&v32[v33] > MmUserProbeAddress || &v32[v33] <= v32 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v32, Src, v33);
                v11 = v77;
                v28 = (_QWORD *)v86;
              }
              if ( v7[12] )
              {
                v70 = (char *)v28[7];
                v71 = v7[12];
                if ( (unsigned __int64)&v70[v71] > MmUserProbeAddress || &v70[v71] <= v70 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v70, v79, v71);
                v11 = v77;
              }
              if ( v7[16] )
              {
                v34 = *(char **)(v86 + 72);
                v35 = v7[16];
                if ( (unsigned __int64)&v34[v35] > MmUserProbeAddress || &v34[v35] <= v34 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v34, v27, v35);
                v11 = v77;
              }
            }
LABEL_49:
            if ( StandardAllocation >= 0 )
              goto LABEL_50;
LABEL_97:
            if ( !v72 )
              goto LABEL_50;
            v50 = v91;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v94, v91);
            v51 = v88;
            v52 = (v88[20] >> 6) & 0xFFFFFF;
            if ( v52 < *((_DWORD *)v50 + 74) )
            {
              v53 = *((_QWORD *)v50 + 35);
              if ( ((v88[20] >> 25) & 0x60) == (*(_BYTE *)(v53 + 16LL * v52 + 8) & 0x60)
                && (*(_DWORD *)(v53 + 16LL * v52 + 8) & 0x2000) == 0 )
              {
                v54 = *(_DWORD *)(v53 + 16LL * v52 + 8) & 0x1F;
                if ( v54 )
                {
                  if ( v54 == 4 )
                  {
                    v55 = *(struct DXGRESOURCE **)(v53 + 16LL * v52);
LABEL_105:
                    if ( v55 )
                    {
                      v56 = v51[20];
                      v57 = (v56 >> 6) & 0xFFFFFF;
                      if ( (unsigned int)v57 < *((_DWORD *)v50 + 74) )
                      {
                        v58 = *((_QWORD *)v50 + 35);
                        v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
                        if ( ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60)
                          && (v59 & 0x2000) == 0
                          && (v59 & 0x1F) != 0 )
                        {
                          *(_DWORD *)(v58 + 16LL * ((v56 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                        }
                      }
                    }
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v94);
                    DXGDEVICE::DestroyAllocationInternal(
                      v11,
                      0,
                      0LL,
                      v55,
                      0LL,
                      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
LABEL_50:
                    operator delete(v27);
                    operator delete(v79);
                    operator delete(v89);
                    operator delete(Src);
                    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v92);
                    if ( v81 && _InterlockedExchangeAdd((volatile signed __int32 *)v81 + 17, 0xFFFFFFFF) == 1 )
                      DXGSHAREDRESOURCE::Destroy(v81, 0LL, 0);
                    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
                    if ( v84 )
                    {
                      v36 = (char *)v83 + 136;
                      _InterlockedAdd((volatile signed __int32 *)v83 + 38, 0xFFFFFFFF);
                      ExReleasePushLockSharedEx(v36, 0LL);
                      KeLeaveCriticalRegion();
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v83 + 2), v83);
                    }
                    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
                    if ( !v74 )
                      return (unsigned int)StandardAllocation;
                    goto LABEL_55;
                  }
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
                  v51 = v88;
                }
              }
            }
            v55 = 0LL;
            goto LABEL_105;
          }
          goto LABEL_136;
        }
        v47 = v7[8];
LABEL_92:
        StandardAllocation = -1073741801;
        WdLogSingleEntry3(3LL, v11, v47, -1073741801LL);
LABEL_96:
        v27 = v75;
        goto LABEL_97;
      }
      StandardAllocation = -1073741801;
      WdLogSingleEntry3(3LL, v11, v7[4], -1073741801LL);
    }
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v92);
    `OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v81);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    if ( v84 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
    if ( !v74 )
      return (unsigned int)StandardAllocation;
LABEL_55:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    return (unsigned int)StandardAllocation;
  }
  WdLogSingleEntry1(3LL, v85);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v82);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v87);
  if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
  return 3221225506LL;
}
