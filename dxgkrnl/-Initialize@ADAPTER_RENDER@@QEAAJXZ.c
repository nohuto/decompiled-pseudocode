__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdi
  unsigned int v2; // r15d
  __int64 v3; // rcx
  __int64 v4; // rcx
  wchar_t *v5; // rax
  wchar_t *v6; // rax
  const wchar_t *v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // rbx
  _OWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rdx
  int NodeMetadata; // ebx
  unsigned int VidSchSibmitDataSize; // eax
  DXGADAPTER *v17; // rcx
  unsigned __int8 IsDxgmms2; // bl
  __int64 v19; // rdx
  const wchar_t *v20; // r9
  __int64 v21; // rax
  int v22; // esi
  unsigned int *v23; // rbx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  unsigned int v30; // r14d
  DXGADAPTER *v31; // rcx
  __int64 v32; // rbx
  _DWORD *v33; // rsi
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rbx
  DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  int *v39; // rcx
  unsigned int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int16 *v43; // r14
  unsigned int v44; // r15d
  bool v45; // of
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // r12d
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  int *v54; // rcx
  __int64 v55; // r8
  DXGADAPTER *v56; // rcx
  struct _DXGK_NODEMETADATA *v57; // rdx
  unsigned int v58; // eax
  _BYTE *v59; // r15
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rbx
  DXGADAPTER *v63; // rcx
  int pOutputData; // eax
  __int64 v65; // xmm1_8
  DXGADAPTER *v66; // rcx
  __int64 pInputData_low; // rax
  const wchar_t *v68; // r9
  const wchar_t *v69; // r9
  int v70; // eax
  __int64 v71; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  int SynchronizationObjectInternal; // eax
  __int64 v77; // r14
  __int64 v78; // rcx
  int v79; // eax
  unsigned int v80; // r15d
  __int64 v81; // r12
  __int64 v82; // rax
  unsigned int v83; // ebx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // kr00_8
  unsigned int *v86; // rax
  __int64 v87; // r8
  unsigned int *v88; // r14
  unsigned int *v89; // rax
  DXGADAPTER *v90; // rcx
  char v91; // dl
  unsigned int *v92; // r13
  __int64 v93; // r15
  unsigned int v94; // ecx
  __int64 v95; // rbx
  const wchar_t *v96; // r9
  __int64 Flags; // [rsp+28h] [rbp-E0h]
  SIZE_T Size; // [rsp+30h] [rbp-D8h]
  unsigned int v100; // [rsp+58h] [rbp-B0h] BYREF
  char v101; // [rsp+5Ch] [rbp-ACh]
  unsigned int v102; // [rsp+60h] [rbp-A8h] BYREF
  char v103; // [rsp+64h] [rbp-A4h] BYREF
  char v104; // [rsp+65h] [rbp-A3h]
  __int64 v105; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD *v106; // [rsp+70h] [rbp-98h]
  struct _DXGKARG_QUERYADAPTERINFO v107; // [rsp+78h] [rbp-90h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-60h]
  struct _DXGKARG_QUERYADAPTERINFO v109[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v110; // [rsp+118h] [rbp+10h] BYREF
  wchar_t Str[264]; // [rsp+148h] [rbp+40h] BYREF

  v1 = (__int64)this;
  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  *(_OWORD *)(v1 + 544) = *(_OWORD *)(v3 + 1608);
  *(_OWORD *)(v1 + 560) = *(_OWORD *)(v3 + 1640);
  *(_OWORD *)(v1 + 576) = *(_OWORD *)(v3 + 1656);
  *(_OWORD *)(v1 + 592) = *(_OWORD *)(v3 + 1624);
  if ( *(_WORD *)(v1 + 592) )
  {
    v4 = *(_QWORD *)(v3 + 216);
    v102 = 520;
    if ( (int)DpiGetDriverStorePath(v4, Str, &v102) >= 0 )
    {
      v5 = wcsstr(Str, L"FileRepository");
      if ( v5 )
      {
        v6 = wcsstr(v5, L"\\");
        if ( v6 )
        {
          v7 = v6 + 1;
          if ( v7 )
          {
            if ( !wcsstr(*(const wchar_t **)(v1 + 600), v7) )
            {
              if ( *(_WORD *)(v1 + 560) )
              {
                *(_WORD *)(v1 + 560) = 0;
                *(_QWORD *)(v1 + 568) = 0LL;
              }
              if ( *(_WORD *)(v1 + 576) )
              {
                *(_WORD *)(v1 + 576) = 0;
                *(_QWORD *)(v1 + 584) = 0LL;
              }
              *(_WORD *)(v1 + 592) = 0;
              *(_QWORD *)(v1 + 600) = 0LL;
            }
          }
        }
      }
    }
  }
  v8 = *(_QWORD *)(v1 + 16);
  v9 = (_OWORD *)(v1 + 320);
  *(_OWORD *)(v1 + 608) = *(_OWORD *)(v8 + 1752);
  *(_OWORD *)(v1 + 624) = *(_OWORD *)(v8 + 1768);
  *(_OWORD *)(v1 + 672) = *(_OWORD *)(v8 + 1688);
  *(_OWORD *)(v1 + 696) = *(_OWORD *)(v8 + 1712);
  *(_DWORD *)(v1 + 688) = *(_DWORD *)(v8 + 1704);
  *(_DWORD *)(v1 + 692) = *(_DWORD *)(v8 + 1708);
  *(_DWORD *)(v1 + 712) = *(_DWORD *)(v8 + 1728);
  *(_DWORD *)(v1 + 716) = *(_DWORD *)(v8 + 1732);
  *(_OWORD *)(v1 + 640) = *(_OWORD *)(v8 + 1784);
  *(_OWORD *)(v1 + 656) = *(_OWORD *)(v8 + 1800);
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              (ADAPTER_RENDER *)v1,
              (struct _UNICODE_STRING *)(v8 + 1576),
              (struct _UNICODE_STRING *)(v1 + 320)) < 0
    || (v10 = (_OWORD *)(v1 + 416),
        (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
               (ADAPTER_RENDER *)v1,
               (struct _UNICODE_STRING *)(*(_QWORD *)(v1 + 16) + 1592LL),
               (struct _UNICODE_STRING *)(v1 + 416)) < 0) )
  {
    NodeMetadata = -1073741438;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 16), -1073741438LL);
    v96 = L"Adapter 0x%I64x: Invalidly formatted user mode driver name, returning 0x%I64x";
    goto LABEL_204;
  }
  if ( (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              (ADAPTER_RENDER *)v1,
              (struct _UNICODE_STRING *)(*(_QWORD *)(v1 + 16) + 1880LL),
              (struct _UNICODE_STRING *)(v1 + 512)) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              (ADAPTER_RENDER *)v1,
              (struct _UNICODE_STRING *)(*(_QWORD *)(v1 + 16) + 1896LL),
              (struct _UNICODE_STRING *)(v1 + 528)) < 0 )
  {
    NodeMetadata = -1073741438;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 16), -1073741438LL);
    v96 = L"Adapter 0x%I64x: Invalidly formatted user mode display driver name, returning 0x%I64x";
LABEL_204:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v96, *(_QWORD *)(v1 + 16), -1073741438LL, 0LL, 0LL, 0LL);
    return (unsigned int)NodeMetadata;
  }
  if ( *(_WORD *)v9 )
  {
    if ( **(_WORD **)(v1 + 328) == 35 )
    {
      v11 = *(_QWORD *)(v1 + 16);
      if ( *(_WORD *)(v11 + 1840) )
        *v9 = *(_OWORD *)(v11 + 1840);
    }
  }
  if ( *(_WORD *)v10 )
  {
    if ( **(_WORD **)(v1 + 424) == 35 )
    {
      v12 = *(_QWORD *)(v1 + 16);
      if ( *(_WORD *)(v12 + 1856) )
        *v10 = *(_OWORD *)(v12 + 1856);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v1 + 1384));
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 216LL) + 64LL) + 40LL) + 28LL);
  v102 = v13;
  if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v14 = *(_QWORD *)(v1 + 16);
    if ( !*(_BYTE *)(v14 + 209) && !*(_WORD *)v9 )
    {
      NodeMetadata = -1073741438;
      WdLogSingleEntry2(2LL, v14, -1073741438LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter 0x%I64x: Invalid user mode driver name, returning 0x%I64x",
        *(_QWORD *)(v1 + 16),
        -1073741438LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)NodeMetadata;
    }
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)v1);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v1 + 1424),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    NodeMetadata = -1073741801;
    WdLogSingleEntry3(3LL, v1, -1073741801LL, 0LL);
    return (unsigned int)NodeMetadata;
  }
  *(_BYTE *)(v1 + 1369) = 1;
  v104 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v103);
  v17 = *(DXGADAPTER **)(v1 + 16);
  if ( !*((_BYTE *)v17 + 209) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v17);
    *(_QWORD *)(v1 + 760) = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 != 0 ? 264LL : 256LL));
    v19 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal() + (IsDxgmms2 != 0 ? 8 : 0) + 272);
    *(_QWORD *)(v1 + 736) = v19;
    if ( !*(_QWORD *)(v1 + 760) || !v19 )
    {
      NodeMetadata = -1073741438;
      WdLogSingleEntry2(2LL, v1, -1073741438LL);
      v20 = L"Adapter 0x%I64x: Unsupported display driver model, returning 0x%I64x";
      v21 = -1073741438LL;
      v22 = 0x40000;
LABEL_39:
      v29 = v22;
      Size = v21;
LABEL_87:
      Flags = v1;
      goto LABEL_88;
    }
  }
  v23 = *(unsigned int **)(v1 + 16);
  if ( !DXGADAPTER::IsGpuVirtualAddressingSupported((DXGADAPTER *)v23) )
    goto LABEL_61;
  v24 = v23[72];
  v25 = 144 * v24;
  v26 = v24;
  if ( !is_mul_ok(v24, 0x90uLL) )
    v25 = -1LL;
  v27 = operator new[](v25, 0x4B677844u, 256LL);
  *(_QWORD *)(v1 + 1264) = v27;
  if ( !v27 )
  {
    v1 = 1021LL;
    WdLogSingleEntry1(6LL, 1021LL);
    v20 = L"Failed to allocate m_pGpuMmuCaps";
    v21 = 0LL;
    NodeMetadata = -1073741801;
    v22 = 262145;
    goto LABEL_39;
  }
  v30 = 63;
  if ( !(_DWORD)v24 )
    goto LABEL_57;
  do
  {
    v31 = *(DXGADAPTER **)(v1 + 16);
    v32 = *((_QWORD *)v31 + 351) + 344LL * v2;
    *((_DWORD *)&v107.Type + 1) = 0;
    *(&v107.InputDataSize + 1) = 0;
    *(_QWORD *)&v107.Flags.0 = 0LL;
    HIDWORD(v107.hKmdProcessHandle) = 0;
    v33 = (_DWORD *)(*(_QWORD *)(v1 + 1264) + 144LL * v2);
    v107.Type = DXGKQAITYPE_GPUMMUCAPS;
    v107.pOutputData = v33;
    v107.OutputDataSize = 24;
    LODWORD(v105) = v2;
    v107.pInputData = &v105;
    v107.InputDataSize = 4;
    v34 = DXGADAPTER::DdiQueryAdapterInfo(v31, &v107, v28);
    if ( (*(_DWORD *)(v32 + 16) & 2) == 0 )
    {
      v33[2] = 63;
      goto LABEL_52;
    }
    if ( v34 < 0 )
    {
      NodeMetadata = -1073741438;
      WdLogSingleEntry2(2LL, v1, -1073741438LL);
      v20 = L"Adapter 0x%I64x: Failed to query GpuMmu caps, returning 0x%I64x";
      goto LABEL_86;
    }
    if ( (unsigned int)(v33[4] - 2) > 4 )
    {
      WdLogSingleEntry1(2LL, 1064LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"GpuMmu.PageDirectoryCount is invalid. It should be from 2 to DXGK_MAX_PAGE_TABLE_LEVEL_COUNT\n",
        1064LL,
        0LL,
        0LL,
        0LL,
        0LL);
      NodeMetadata = -1073741438;
      goto LABEL_199;
    }
    if ( v13 < 0x5014 )
      *v33 &= ~0x20u;
    v36 = 0LL;
    do
    {
      *((_DWORD *)&v110.Type + 1) = 0;
      *(&v110.InputDataSize + 1) = 0;
      *(_QWORD *)&v110.Flags.0 = 0LL;
      HIDWORD(v110.hKmdProcessHandle) = 0;
      v110.pInputData = &v100;
      v37 = *(DXGADAPTER **)(v1 + 16);
      v110.Type = DXGKQAITYPE_PAGETABLELEVELDESC;
      LOWORD(v100) = v36;
      HIWORD(v100) = v2;
      v110.InputDataSize = 4;
      v106 = &v33[4 * v36 + 6 + (unsigned int)v36];
      v110.pOutputData = v106;
      *(_QWORD *)&v110.OutputDataSize = v102 < 0x5012 ? 16 : 20;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v37, &v110, v35) < 0 )
      {
        NodeMetadata = -1073741438;
        WdLogSingleEntry2(2LL, v1, -1073741438LL);
        v20 = L"Adapter 0x%I64x: Failed to query page table level descriptor, returning 0x%I64x";
LABEL_86:
        v29 = 0x40000;
        Size = -1073741438LL;
        goto LABEL_87;
      }
      if ( ((v106[4] - 1) & v106[4]) != 0 )
      {
        WdLogSingleEntry2(2LL, v1, (unsigned int)v36);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x: Page table alignment of level %d must be power of 2",
          v1,
          (unsigned int)v36,
          0LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
      v36 = (unsigned int)(v36 + 1);
    }
    while ( (unsigned int)v36 < v33[4] );
    v13 = v102;
LABEL_52:
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && v30 >= v33[2] )
      v30 = v33[2];
    ++v2;
  }
  while ( v2 < (unsigned int)v24 );
  v26 = v24;
LABEL_57:
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && (_DWORD)v24 )
  {
    v38 = 0LL;
    do
    {
      v38 += 144LL;
      *(_DWORD *)(v38 + *(_QWORD *)(v1 + 1264) - 136) = v30;
      --v26;
    }
    while ( v26 );
  }
LABEL_61:
  v39 = *(int **)(v1 + 16);
  if ( v39[638] < 4864 )
  {
LABEL_159:
    v70 = DXGADAPTER::CheckMcdmDdiSubmission(*(DXGADAPTER **)(v1 + 16));
    if ( v70 >= 0 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 209LL) )
      {
        v100 = 0;
        v70 = ADAPTER_RENDER::ConfigureSysMm((ADAPTER_RENDER *)v1, (union SYSMM_IOMMU_STATE *)&v100);
        if ( v70 < 0 )
          goto LABEL_162;
        v71 = *(_QWORD *)(v1 + 736);
        Global = DXGGLOBAL::GetGlobal();
        v73 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v71 + 8) + 24LL))(
                v1,
                *(_QWORD *)(*(_QWORD *)(v1 + 16) + 216LL),
                (__int64)Global + 152);
        *(_QWORD *)(v1 + 744) = v73;
        if ( !v73 )
          goto LABEL_156;
        v74 = 0LL;
        if ( (v100 & 1) != 0 )
        {
          v74 = 1LL;
          if ( (v100 & 2) != 0 )
            v74 = 3LL;
        }
        v75 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v1 + 760) + 8LL) + 8LL))(v1, v74);
        *(_QWORD *)(v1 + 768) = v75;
        if ( !v75 )
          goto LABEL_156;
      }
      memset(v109, 0, sizeof(v109));
      HIDWORD(v109[0].pInputData) |= 1u;
      LODWORD(v109[0].pInputData) = 3;
      SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                        0LL,
                                        1,
                                        v1,
                                        (__int64)v109,
                                        0xBu,
                                        0,
                                        (DXGSYNCOBJECT **)(v1 + 904),
                                        0LL,
                                        0LL);
      v77 = SynchronizationObjectInternal;
      if ( SynchronizationObjectInternal < 0 )
      {
        WdLogSingleEntry2(2LL, v1, SynchronizationObjectInternal);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x: CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
          v1,
          v77,
          0LL,
          0LL,
          0LL);
        NodeMetadata = v77;
        goto LABEL_199;
      }
      v78 = *(_QWORD *)(v1 + 16);
      v79 = *(_DWORD *)(v78 + 2552);
      if ( v79 >= 4864 )
      {
        if ( v79 < 0x2000 )
          v80 = 1;
        else
          v80 = *(_DWORD *)(v78 + 288);
        v81 = 0LL;
        v102 = v80;
        v100 = 0;
        if ( v80 )
        {
          v82 = 0LL;
          do
          {
            v83 = *(unsigned __int16 *)(344 * v82 + *(_QWORD *)(*(_QWORD *)(v1 + 16) + 2808LL));
            v85 = *(unsigned __int16 *)(344 * v82 + *(_QWORD *)(*(_QWORD *)(v1 + 16) + 2808LL));
            v84 = 4 * v85;
            if ( !is_mul_ok(v85, 4uLL) )
              v84 = -1LL;
            v86 = (unsigned int *)operator new[](v84, 0x4B677844u, 64LL);
            v88 = v86;
            if ( !v86 )
              goto LABEL_156;
            LODWORD(v105) = v100;
            v107.pOutputData = v86;
            v107.OutputDataSize = 4 * v83;
            v89 = &v100;
            v90 = *(DXGADAPTER **)(v1 + 16);
            if ( v80 <= 1 )
              v89 = (unsigned int *)&v105;
            *(_QWORD *)&v107.Type = 10LL;
            *(_QWORD *)&v107.InputDataSize = 4LL;
            *(_QWORD *)&v107.Flags.0 = 0LL;
            HIDWORD(v107.hKmdProcessHandle) = 0;
            v107.pInputData = v89;
            LODWORD(v108) = DXGADAPTER::DdiQueryAdapterInfo(v90, &v107, v87);
            v91 = 1;
            if ( (int)v108 < 0 )
              goto LABEL_191;
            if ( v83 )
            {
              v92 = v88;
              v93 = v83;
              do
              {
                v94 = *v92;
                if ( *v92 - 1 <= 0x1E || v94 >= 0x41 )
                {
                  v95 = *v92;
                  WdLogSingleEntry3(2LL, v1, v95, v81);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Adapter 0x%I64x: Invalid timestamp precision. Valid domain is {0, [32-64]}. Precision=%d, Node=%d",
                    v1,
                    v95,
                    v81,
                    0LL,
                    0LL);
                  v91 = 0;
                }
                else if ( !v94 )
                {
                  *(_BYTE *)(v1 + 968) = 1;
                }
                ++v81;
                ++v92;
                --v93;
              }
              while ( v93 );
              v80 = v102;
              v81 = 0LL;
              if ( !v91 )
              {
LABEL_191:
                operator delete(v88);
                v88 = 0LL;
                *(_BYTE *)(v1 + 968) = 0;
                if ( (int)v108 >= 0 )
                {
                  NodeMetadata = -1073741438;
                  WdLogSingleEntry2(2LL, v1, -1073741438LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Adapter 0x%I64x: Precision data is bad. Returning 0x%I64x",
                    v1,
                    -1073741438LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_199;
                }
                WdLogSingleEntry1(4LL, v1);
              }
            }
            *(_QWORD *)(344LL * v100 + *(_QWORD *)(*(_QWORD *)(v1 + 16) + 2808LL) + 40) = v88;
            v82 = v100 + 1;
            v100 = v82;
          }
          while ( (unsigned int)v82 < v80 );
        }
        if ( ADAPTER_RENDER::IsClockCalibrationSupported((ADAPTER_RENDER *)v1) )
        {
          *(_QWORD *)(v1 + 1032) = -500000LL;
          KeInitializeTimer((PKTIMER)(v1 + 1040));
          KeInitializeDpc((PRKDPC)(v1 + 1104), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, (PVOID)v1);
        }
        if ( *(_BYTE *)(v1 + 968) )
          KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 1256));
      }
      NodeMetadata = 0;
      goto LABEL_199;
    }
LABEL_162:
    NodeMetadata = v70;
    goto LABEL_199;
  }
  v40 = 0;
  v100 = 0;
  if ( !(unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v39) )
  {
LABEL_157:
    if ( *(int *)(v41 + 2552) < 8960 )
      *(_DWORD *)(v41 + 2280) &= 0xFFFFF87F;
    goto LABEL_159;
  }
  while ( 1 )
  {
    v43 = (unsigned __int16 *)(*(_QWORD *)(v41 + 2808) + 344LL * v40);
    v44 = *v43;
    v46 = 74LL * *v43;
    v45 = (*v43 * (unsigned __int128)0x4AuLL) >> 64 != 0;
    v102 = v44;
    if ( v45 )
      v46 = v42;
    v47 = operator new[](v46, 0x4B677844u, 256LL);
    v48 = 0;
    v106 = (_DWORD *)v47;
    if ( !v47 )
    {
      WdLogSingleEntry1(6LL, v1);
      v69 = L"Adapter 0x%I64x: Failed to allocate pNodeMetadata";
      goto LABEL_155;
    }
    *((_QWORD *)v43 + 4) = v47;
    v108 = *(_QWORD *)(v1 + 16);
    v49 = 44LL * v44;
    if ( !is_mul_ok(v44, 0x2CuLL) )
      v49 = -1LL;
    v50 = operator new[](v49, 0x4B677844u, 256LL);
    if ( !v50 )
    {
      WdLogSingleEntry1(6LL, v1);
      v69 = L"Adapter 0x%I64x: Failed to allocate pNodePerfData";
LABEL_155:
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v69, v1, 0LL, 0LL, 0LL, 0LL);
LABEL_156:
      NodeMetadata = -1073741801;
      goto LABEL_199;
    }
    *((_QWORD *)v43 + 13) = v50;
    v51 = 8LL * v44;
    if ( !is_mul_ok(v44, 8uLL) )
      v51 = -1LL;
    v52 = operator new[](v51, 0x4B677844u, 256LL);
    if ( !v52 )
    {
      WdLogSingleEntry1(6LL, v1);
      v69 = L"Adapter 0x%I64x: Failed to allocate pNodePerfDataQueryTimes";
      goto LABEL_155;
    }
    *((_QWORD *)v43 + 14) = v52;
    v54 = *(int **)(v1 + 16);
    if ( v54[705] >= 2400 )
    {
      LODWORD(v105) = v40;
      v107.pInputData = &v105;
      *(_QWORD *)&v107.Type = 26LL;
      v107.pOutputData = v43 + 92;
      *(_QWORD *)&v107.InputDataSize = 4LL;
      *(_QWORD *)&v107.Flags.0 = 0LL;
      HIDWORD(v107.hKmdProcessHandle) = 0;
      v107.OutputDataSize = 28;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v54, &v107, v53) < 0 )
        WdLogSingleEntry1(3LL, v1);
      v56 = *(DXGADAPTER **)(v1 + 16);
      v107.pOutputData = v43 + 106;
      v107.Type = DXGKQAITYPE_GPUVERSION;
      v107.OutputDataSize = 128;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v56, &v107, v55) < 0 )
        WdLogSingleEntry1(3LL, v1);
    }
    v101 = 0;
    if ( v44 )
      break;
LABEL_130:
    v66 = *(DXGADAPTER **)(v1 + 16);
    v100 = ++v40;
    if ( v40 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v66) )
      goto LABEL_157;
    v42 = -1LL;
  }
  v57 = (struct _DXGK_NODEMETADATA *)v106;
  v58 = v40 << 16;
  LODWORD(v105) = v40 << 16;
  v59 = v106 + 17;
  do
  {
    NodeMetadata = DXGADAPTER::DdiGetNodeMetadata(*(DXGADAPTER **)(v1 + 16), v58 | v48, &v57[v48]);
    if ( NodeMetadata < 0 )
    {
      WdLogSingleEntry1(2LL, v1);
      v20 = L"Adapter 0x%I64x: Driver reported failure getting node metadata with valid parameters.";
      Size = 0LL;
      goto LABEL_150;
    }
    v61 = *(_QWORD *)(v1 + 16);
    if ( *(_DWORD *)(v61 + 2096) >= 0x9000u )
    {
      if ( (*v59 & 1) != 0 )
      {
        if ( !v59[4] && !v59[5] && !*((_BYTE *)v43 + 49) )
        {
          WdLogSingleEntry3(2LL, v1, v48, 1247LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but it doesn't"
                      " support GPU VA.",
            v1,
            v48,
            1247LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        if ( (**(_DWORD **)(v61 + 2824) & 0x20000) == 0 )
        {
          WdLogSingleEntry3(2LL, v1, v48, 1253LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but the OS did"
                      "n't allow HwSch to be enabled.",
            v1,
            v48,
            1253LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        *(_BYTE *)(v1 + 1880) = 1;
      }
      v60 = *(unsigned int *)v59;
      if ( (v60 & 8) != 0 )
      {
        if ( *(int *)(v61 + 2820) < 3100 )
        {
          WdLogSingleEntry2(2LL, v1, 1265LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x: UserModeSubmission is only supported on WDDM3.1 and above.",
            v1,
            1265LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        if ( (v60 & 1) == 0 )
        {
          WdLogSingleEntry3(2LL, v1, v48, 1271LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support for a node which doesn't "
                      "support ContextScheduling.",
            v1,
            v48,
            1271LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        if ( (**(_DWORD **)(v61 + 2824) & 0x8000000) == 0 )
        {
          WdLogSingleEntry3(2LL, v1, v48, 1277LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported UserModeSubmission support, but the OS didn't allow "
                      "UserModeSubmission to be enabled.",
            v1,
            v48,
            1277LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        if ( !*(_QWORD *)(v61 + 1520)
          || !*(_QWORD *)(v61 + 1544)
          || !*(_QWORD *)(v61 + 1528)
          || !*(_QWORD *)(v61 + 1536)
          || !*(_QWORD *)(v61 + 1552)
          || !*(_QWORD *)(v61 + 1560) )
        {
          WdLogSingleEntry1(2LL, 1290LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver reports UserModeSubmission support, but does not support all relevant Doorbell DDIs.",
            1290LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_144;
        }
        v101 = 1;
      }
      if ( (v60 & 0xFFF0) != 0 )
      {
        WdLogSingleEntry3(2LL, v1, v48, 1299LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver should not set reserved bits.",
          v1,
          v48,
          1299LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
    }
    else
    {
      *(_DWORD *)v59 = 0;
      v61 = *(_QWORD *)(v1 + 16);
    }
    v62 = v108;
    if ( v59[4] )
    {
      if ( (*(_DWORD *)(v108 + 2284) & 0x40) == 0 )
      {
        WdLogSingleEntry3(2LL, v1, v48, 1308LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported GpuMmu support for a node, but the adapter caps do not match.",
          v1,
          v48,
          1308LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
      if ( (*((_DWORD *)v43 + 4) & 0x40) != 0 )
      {
        WdLogSingleEntry2(2LL, v1, v48);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver set GpuMmuSupported, but adapter requires GpuVaIoMmu",
          v1,
          v48,
          0LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
      if ( v48 == v43[1] && !*(_BYTE *)(v61 + 2858) )
        *((_BYTE *)v43 + 48) = 1;
      if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
        *((_BYTE *)v43 + 49) = 1;
    }
    if ( v59[5] )
    {
      if ( (*(_DWORD *)(v62 + 2284) & 0x80u) == 0 )
      {
        WdLogSingleEntry3(2LL, v1, v48, 1330LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver reported IoMmu support for a node, but the adapter caps do not match.",
          v1,
          v48,
          1330LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
      if ( (*((_DWORD *)v43 + 4) & 0x40) != 0 )
      {
        WdLogSingleEntry2(2LL, v1, v48);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Adapter 0x%I64x, Node 0x%I64x: Driver set IoMmuSupported, but adapter requires GpuVaIoMmu",
          v1,
          v48,
          0LL,
          0LL,
          0LL);
        goto LABEL_144;
      }
      if ( v48 == v43[1] && !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 2858LL) )
        *((_BYTE *)v43 + 48) = 1;
    }
    v58 = v105;
    ++v48;
    v57 = (struct _DXGK_NODEMETADATA *)v106;
    v59 += 74;
  }
  while ( v48 < v102 );
  if ( !v101 )
  {
LABEL_129:
    v40 = v100;
    goto LABEL_130;
  }
  v63 = *(DXGADAPTER **)(v1 + 16);
  memset(v109, 0, 24);
  v109[0].Type = DXGKQAITYPE_NUMPOWERCOMPONENTS|0x20;
  v109[0].pOutputData = &v110;
  *(_OWORD *)&v109[0].OutputDataSize = 0LL;
  v109[0].OutputDataSize = 28;
  memset(&v110, 0, 28);
  NodeMetadata = DXGADAPTER::DdiQueryAdapterInfo(v63, v109, v60);
  if ( NodeMetadata < 0 )
  {
    WdLogSingleEntry1(2LL, v1);
    v20 = L"Adapter 0x%I64x: Driver reported failure getting User mode submission Caps.";
    Size = 0LL;
LABEL_150:
    Flags = v1;
    goto LABEL_151;
  }
  if ( (unsigned int)(*((_DWORD *)&v110.Type + 1) - 1) > 0x3FFF )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)&v110.Type + 1), 0x4000LL);
    pInputData_low = *((unsigned int *)&v110.Type + 1);
    v68 = L"DoorbellSize (0x%u) must be greater than 0 and less than 0x%u.";
    goto LABEL_143;
  }
  if ( (v110.Type & 0xFFFFFFFE) == 0 )
  {
    if ( (v110.Type & 1) == 0 || (unsigned int)(LODWORD(v110.pInputData) - 1) <= 0x3FFF )
    {
      pOutputData = (int)v110.pOutputData;
      v65 = *(_QWORD *)&v110.InputDataSize;
      *(_OWORD *)(v1 + 1272) = *(_OWORD *)&v110.Type;
      *(_QWORD *)(v1 + 1288) = v65;
      *(_DWORD *)(v1 + 1296) = pOutputData;
      goto LABEL_129;
    }
    WdLogSingleEntry2(2LL, LODWORD(v110.pInputData), 0x4000LL);
    pInputData_low = LODWORD(v110.pInputData);
    v68 = L"SecondaryDoorbellSize (0x%u) must be greater than 0 and less than 0x%u.";
LABEL_143:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v68, pInputData_low, 0x4000LL, 0LL, 0LL, 0LL);
LABEL_144:
    NodeMetadata = -1073741811;
    goto LABEL_199;
  }
  NodeMetadata = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  v20 = L"DXGKQAITYPE_USERMODESUBMISSION_CAPS: Driver should not set reserved bits, returning 0x%I64x.";
  Size = 0LL;
  Flags = -1073741811LL;
LABEL_151:
  v29 = 0x40000;
LABEL_88:
  DxgkLogInternalTriageEvent(0LL, v29, -1, (__int64)v20, Flags, Size, 0LL, 0LL, 0LL);
LABEL_199:
  if ( v104 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v103);
  return (unsigned int)NodeMetadata;
}
