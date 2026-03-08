/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164DD8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C0002FE0 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01785A8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4968 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C62F8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v6; // r15
  const struct _D3DKMT_DISPLAYMODE *v8; // r14
  PERESOURCE *v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // r8
  D3DDDI_RATIONAL RefreshRate; // rax
  UINT Width; // ecx
  UINT Height; // edx
  int StandardAllocation; // eax
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // r13
  unsigned int *v25; // r14
  volatile signed __int32 *v26; // rdi
  char v27; // r9
  char v28; // r15
  __int64 v29; // rax
  ADAPTER_RENDER *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  UINT v33; // edx
  UINT v34; // ecx
  D3DDDIFORMAT Format; // eax
  int v36; // eax
  int v37; // ecx
  __int64 v39; // rdx
  ADAPTER_RENDER *v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // r15d
  unsigned int v46; // eax
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // rcx
  struct DXGPROCESS *v55; // r13
  unsigned int v56; // esi
  unsigned int v57; // eax
  __int64 v58; // r8
  int v59; // ecx
  __int64 v60; // rsi
  int v61; // esi
  int v62; // ecx
  char v63; // [rsp+50h] [rbp-B0h]
  char v64; // [rsp+51h] [rbp-AFh]
  char v65; // [rsp+52h] [rbp-AEh]
  int v66; // [rsp+54h] [rbp-ACh]
  __int128 v68; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGPROCESS *v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h]
  struct COREDEVICEACCESS *v71; // [rsp+80h] [rbp-80h]
  _DXGKARG_DESCRIBEALLOCATION v72; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h]
  const struct _D3DKMT_DISPLAYMODE *v75; // [rsp+C8h] [rbp-38h]
  _QWORD v76[54]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v77; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v78[3]; // [rsp+290h] [rbp+190h] BYREF
  D3DDDI_RATIONAL v79; // [rsp+29Ch] [rbp+19Ch]
  int v80; // [rsp+2A4h] [rbp+1A4h]

  v6 = a3;
  v71 = a5;
  v75 = a4;
  v8 = a4;
  v68 = 0LL;
  memset(v76, 0, 0x1A8uLL);
  v9 = (PERESOURCE *)*((_QWORD *)this + 2);
  memset(&v72, 0, sizeof(v72));
  v66 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v9)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 781LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsCoreResourceExclusiveOwner() && pCddDevice->GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      781LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = *((_QWORD *)this + 16);
  v12 = v6;
  v13 = 4000 * v6;
  v69 = Current;
  *(_QWORD *)&v77 = v6;
  v74 = 4000 * v6;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(4000 * v6 + v11)) )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)this + 2), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current adapter 0x%I64x is no owned by current session, returning 0x%I64x.",
      *((_QWORD *)this + 2),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *((_QWORD *)DXGPROCESS::GetCurrent() + 7) != *(_QWORD *)(**(_QWORD **)(*((_QWORD *)this + 16) + v13 + 24)
                                                              + 18648LL) )
  {
    WdLogSingleEntry1(1LL, 801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent()->GetEProcess() == m_pDisplaySource[VidPnSourceId].m_SessionAdapterOwner->GetOwne"
                "dSession().GetEProcessCSRSS()",
      801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = *((_QWORD *)this + 16);
  if ( *(_QWORD *)(v14 + v13 + 88) )
  {
    if ( !*(_QWORD *)(v14 + v13 + 600) )
    {
      WdLogSingleEntry1(1LL, 808LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
        808LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88) + 48LL);
    if ( (*(_DWORD *)(v39 + 4) & 0x10) == 0 )
    {
      v40 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      v72.hAllocation = *(HANDLE *)(v39 + 16);
      v41 = ADAPTER_RENDER::DdiDescribeAllocation(v40, &v72);
      if ( v41 >= 0 )
      {
        if ( v72.Width == v8->Width
          && v72.Height == v8->Height
          && v72.Format == D3DDDIFMT_A8R8G8B8
          && v72.RefreshRate.Numerator == v8->RefreshRate.Numerator
          && v72.RefreshRate.Denominator == v8->RefreshRate.Denominator
          && *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1036) == v8->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        WdLogSingleEntry4(3LL, a2, *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88), v6, v41);
      }
    }
    v42 = ADAPTER_DISPLAY::DestroyCddAllocations(this, a2, v6);
    v21 = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry3(2LL, a2, v12, v42);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to destroy the existing CDD allocations on DXGDEVICE 0x%I64x VidPn source 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v12,
        v21,
        0LL,
        0LL);
      return (unsigned int)v21;
    }
    v43 = *((_QWORD *)this + 16);
    if ( *(_QWORD *)(v43 + v13 + 88) || *(_QWORD *)(v43 + v13 + 600) )
    {
      WdLogSingleEntry1(1LL, 861LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pDisplaySource[VidPnSourceId].m_pCddPrimaryAllocation[0] == NULL) && (m_pDisplaySource[VidPnSourceId"
                  "].m_pCddShadowAllocation == NULL)",
        861LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v6) = v12;
  }
  v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((_QWORD *)a2 + 235) == v15 || (*((_BYTE *)a2 + 1901) & 1) != 0 )
  {
    v63 = 1;
    v16 = 0;
    goto LABEL_9;
  }
  v27 = 0;
  v63 = 0;
  if ( (*(_DWORD *)(v15 + 436) & 0x10) != 0 )
  {
    v16 = 1;
LABEL_9:
    RefreshRate = v8->RefreshRate;
    v76[1] = 0LL;
    Width = v8->Width;
    Height = v8->Height;
    v79 = RefreshRate;
    v76[3] = v78;
    v64 = v16;
    v65 = 0;
    v80 = v6;
    v78[0] = Width;
    v78[1] = Height;
    v78[2] = 21;
    v76[0] = 2049LL;
    LODWORD(v76[2]) = 1;
    if ( v16 )
    {
      if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
      {
        v44 = 4 * Width;
        DWORD1(v68) = 4 * Width * Height;
      }
      else
      {
        v44 = 4 * Height;
        DWORD1(v68) = 4 * Height * Width;
      }
      v66 = v44;
      v76[5] = &v68;
      v76[4] = DxgkCreateDoDPrimarySection;
    }
    StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v76, v71);
    LODWORD(v21) = StandardAllocation;
    if ( StandardAllocation < 0 )
    {
      WdLogSingleEntry5(3LL, v8->Width, v8->Height, a2, v12, StandardAllocation);
      return (unsigned int)v21;
    }
    if ( !LODWORD(v76[1]) )
    {
      WdLogSingleEntry1(1LL, 945LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != CreateStandardAlloc.hResource",
        945LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !HIDWORD(v76[1]) )
    {
      WdLogSingleEntry1(1LL, 947LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != CreateStandardAlloc.hGlobalShare",
        947LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v22 = *((_QWORD *)this + 2);
    if ( *(int *)(v22 + 2552) < 0x2000 )
    {
      v23 = 1;
    }
    else
    {
      v23 = *(_DWORD *)(v22 + 288);
      if ( !v23 )
      {
LABEL_22:
        v27 = v63;
        v28 = v64;
        goto LABEL_23;
      }
    }
    v24 = v13 + 88;
    v25 = (unsigned int *)&v76[6] + 1;
    v73 = (struct DXGPROCESS *)((char *)v69 + 248);
    v26 = (volatile signed __int32 *)((char *)v69 + 248);
    v70 = v23;
    do
    {
      v45 = *v25;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v26);
      v46 = (v45 >> 6) & 0xFFFFFF;
      if ( v46 < *((_DWORD *)v69 + 74)
        && (v47 = *((_QWORD *)v69 + 35), ((v45 >> 25) & 0x60) == (*(_BYTE *)(v47 + 16LL * v46 + 8) & 0x60))
        && (*(_DWORD *)(v47 + 16LL * v46 + 8) & 0x2000) == 0
        && (v48 = *(_DWORD *)(v47 + 16LL * v46 + 8) & 0x1F) != 0 )
      {
        if ( v48 == 5 )
        {
          v49 = *(_QWORD *)(v47 + 16LL * v46);
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          v49 = 0LL;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        v49 = 0LL;
      }
      _InterlockedDecrement(v26 + 4);
      ExReleasePushLockSharedEx(v26, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(*((_QWORD *)this + 16) + v24) = v49;
      if ( (*((_BYTE *)a2 + 1901) & 1) != 0 )
      {
        v50 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + v24) + 48LL);
        *(_DWORD *)(v50 + 4) |= 2u;
      }
      v24 += 8LL;
      ++v25;
      --v70;
    }
    while ( v70 );
    v13 = v74;
    v8 = v75;
    v12 = v77;
    goto LABEL_22;
  }
  v28 = 0;
  v65 = 1;
  v63 = 0;
LABEL_23:
  v29 = *((_QWORD *)this + 16);
  if ( !v27 )
  {
LABEL_83:
    *(_DWORD *)(v29 + v13 + 1052) = 1;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1056) = 1;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1060) = 0;
    goto LABEL_26;
  }
  v30 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  v72.hAllocation = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v29 + v13 + 88) + 48LL) + 16LL);
  v31 = ADAPTER_RENDER::DdiDescribeAllocation(v30, &v72);
  v32 = *((_QWORD *)this + 16);
  if ( v31 < 0 )
  {
    WdLogSingleEntry4(3LL, a2, *(_QWORD *)(v13 + v32 + 88), v12, v31);
    v29 = *((_QWORD *)this + 16);
    goto LABEL_83;
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)(v13 + v32 + 1052) = v72.MultisampleMethod;
  *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 1060) = v72.PrivateDriverFormatAttribute;
LABEL_26:
  if ( v28 )
  {
    v62 = v68;
    if ( !(_DWORD)v68 || !*((_QWORD *)&v68 + 1) )
    {
      WdLogSingleEntry1(1LL, 1143LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(SectionCreationInfo.Size != 0) && (SectionCreationInfo.Section != NULL)",
        1143LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v62 = v68;
    }
    v61 = v66;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 612) = v62;
    *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = *((_QWORD *)&v68 + 1);
    *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600) = *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88);
    if ( !v66 )
    {
      WdLogSingleEntry1(1LL, 1156LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != DoDShadowPitch", 1156LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_114;
  }
  v77 = 0LL;
  if ( *((_BYTE *)this + 289) || ((v8->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
  {
    v33 = v8->Width;
    v34 = v8->Height;
  }
  else
  {
    v33 = v8->Height;
    v34 = v8->Width;
  }
  Format = v8->Format;
  v76[0] = 0LL;
  v76[3] = &v77;
  *(_QWORD *)((char *)&v77 + 4) = __PAIR64__(Format, v34);
  LODWORD(v77) = v33;
  LODWORD(v76[2]) = 2;
  if ( v65 )
  {
    LODWORD(v76[0]) = 2049;
    v66 = 4 * v33;
    v76[4] = DxgkCreateDoDPrimarySection;
    v76[5] = &v68;
    DWORD1(v68) = 4 * v33 * v34;
  }
  v36 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v76, v71);
  LODWORD(v21) = v36;
  if ( v36 >= 0 )
  {
    if ( !HIDWORD(v76[6]) || !LODWORD(v76[1]) )
    {
      WdLogSingleEntry1(1LL, 1097LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(NULL != CreateStandardAlloc.hAllocation[0]) && (NULL != CreateStandardAlloc.hResource)",
        1097LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v37 = HIDWORD(v77);
    if ( !HIDWORD(v77) )
    {
      WdLogSingleEntry1(1LL, 1102LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != ShadowSurfaceData.Pitch", 1102LL, 0LL, 0LL, 0LL, 0LL);
      v37 = HIDWORD(v77);
    }
    v55 = v69;
    *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 608) = v37;
    v56 = HIDWORD(v76[6]);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v55 + 248));
    v57 = (v56 >> 6) & 0xFFFFFF;
    if ( v57 < *((_DWORD *)v55 + 74) )
    {
      v58 = *((_QWORD *)v55 + 35);
      if ( ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16LL * v57 + 8) & 0x60)
        && (*(_DWORD *)(v58 + 16LL * v57 + 8) & 0x2000) == 0 )
      {
        v59 = *(_DWORD *)(v58 + 16LL * v57 + 8) & 0x1F;
        if ( v59 )
        {
          if ( v59 == 5 )
          {
            v60 = *(_QWORD *)(v58 + 16LL * v57);
LABEL_36:
            _InterlockedDecrement((volatile signed __int32 *)v55 + 66);
            ExReleasePushLockSharedEx((char *)v55 + 248, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600) = v60;
            if ( !*(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600) )
            {
              WdLogSingleEntry1(1LL, 1106LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pDisplaySource[VidPnSourceId].m_pCddShadowAllocation != NULL",
                1106LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 612) = 0;
            *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = 0LL;
            if ( !v65 )
              goto LABEL_39;
            if ( (_DWORD)v68 && *((_QWORD *)&v68 + 1) )
            {
              *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 612) = v68;
              *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 616) = *((_QWORD *)&v68 + 1);
            }
            v61 = v66;
            *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88) = *(_QWORD *)(*((_QWORD *)this + 16) + v13 + 600);
            if ( !v66 )
            {
              WdLogSingleEntry1(1LL, 1132LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != DoDShadowPitch", 1132LL, 0LL, 0LL, 0LL, 0LL);
            }
LABEL_114:
            *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 608) = v61;
LABEL_39:
            if ( *(_DWORD *)(*((_QWORD *)this + 16) + v13 + 736) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership(this, a3);
            ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)this, a3, v8);
            return 0LL;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v60 = 0LL;
    goto LABEL_36;
  }
  WdLogSingleEntry5(3LL, (unsigned int)v77, DWORD1(v77), a2, v12, v36);
  if ( !v63 )
    return (unsigned int)v21;
  DXGDEVICE::DestroyAllocationInternal(
    a2,
    0,
    0LL,
    *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 16) + v13 + 88) + 40LL),
    0LL,
    (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  v51 = *((_QWORD *)this + 2);
  if ( *(int *)(v51 + 2552) < 0x2000 )
  {
    v52 = 1;
    goto LABEL_91;
  }
  v52 = *(_DWORD *)(v51 + 288);
  if ( v52 )
  {
LABEL_91:
    v53 = v13 + 88;
    v54 = v52;
    do
    {
      *(_QWORD *)(v53 + *((_QWORD *)this + 16)) = 0LL;
      v53 += 8LL;
      --v54;
    }
    while ( v54 );
  }
  return (unsigned int)v21;
}
