/*
 * XREFs of ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151F40
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DEF50 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E0278 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015095C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000E13C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E0528 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E1FF0 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E5268 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct _DXGK_ALLOCATIONINFO *a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4,
        struct COREDEVICEACCESS *a5)
{
  struct COREDEVICEACCESS *v5; // r15
  __int64 v7; // r13
  const struct _D3DKMT_DISPLAYMODE *v9; // rsi
  PERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGPROCESS *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(); // r8
  _DWORD *v28; // rcx
  bool v29; // r13
  UINT Width; // ecx
  UINT Height; // edx
  int StandardAllocation; // eax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // r12
  __int64 v38; // rsi
  DXGPUSHLOCK *v39; // rdi
  unsigned int *v40; // r13
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  ADAPTER_RENDER *v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r15
  UINT v53; // ecx
  UINT v54; // edx
  D3DDDIFORMAT Format; // eax
  int v56; // r13d
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // ecx
  struct DXGPROCESS *v62; // r12
  unsigned int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // r8
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  void *v80; // rax
  ADAPTER_RENDER *Size; // rcx
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r15
  _QWORD *v87; // rax
  int v88; // eax
  __int64 v89; // rcx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  unsigned int v101; // eax
  __int64 v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  char v113; // [rsp+30h] [rbp-D0h]
  char v114; // [rsp+31h] [rbp-CFh]
  bool v115; // [rsp+32h] [rbp-CEh]
  int v116; // [rsp+34h] [rbp-CCh]
  __int128 v118; // [rsp+40h] [rbp-C0h] BYREF
  struct COREDEVICEACCESS *v119; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v120; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_DESCRIBEALLOCATION v121; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+98h] [rbp-68h]
  const struct _D3DKMT_DISPLAYMODE *v123; // [rsp+A0h] [rbp-60h]
  _QWORD v124[54]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v125; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v126[3]; // [rsp+270h] [rbp+170h] BYREF
  D3DDDI_RATIONAL RefreshRate; // [rsp+27Ch] [rbp+17Ch]
  int v128; // [rsp+284h] [rbp+184h]

  v5 = a5;
  v7 = a3;
  v119 = a5;
  v123 = a4;
  v9 = a4;
  v118 = 0LL;
  memset(v124, 0, 0x1A8uLL);
  v10 = (PERESOURCE *)*((_QWORD *)this + 2);
  v116 = 0;
  memset(&v121, 0, sizeof(v121));
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v10)
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a2->Size + 16)) )
  {
    v75 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v75 + 24) = 739LL;
    WdLogEvent5_WdAssertion(v75);
  }
  Current = DXGPROCESS::GetCurrent(v12, v11, v13, v14);
  v16 = *((_QWORD *)this + 14);
  v17 = v7;
  v18 = 3968 * v7;
  v120 = Current;
  *(_QWORD *)&v125 = v7;
  v122 = 3968 * v7;
  if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3968 * v7 + v16)) )
  {
    v76 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v76 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v76 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v76);
    return 3221225485LL;
  }
  v23 = DXGPROCESS::GetCurrent(v20, v19, v21, v22);
  v24 = *((_QWORD *)this + 14);
  v25 = **(_QWORD **)(v24 + v18 + 24);
  v26 = *(_QWORD *)(v25 + 18632);
  if ( *((_QWORD *)v23 + 7) != v26 )
  {
    v77 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v77 + 24) = 759LL;
    WdLogEvent5_WdAssertion(v77);
    v24 = *((_QWORD *)this + 14);
  }
  if ( *(_QWORD *)(v24 + v18 + 88) )
  {
    if ( !*(_QWORD *)(v24 + v18 + 600) )
    {
      v78 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v78 + 24) = 766LL;
      WdLogEvent5_WdAssertion(v78);
      v24 = *((_QWORD *)this + 14);
    }
    v79 = *(_QWORD *)(*(_QWORD *)(v24 + v18 + 88) + 48LL);
    if ( (*(_DWORD *)(v79 + 4) & 0x10) == 0 )
    {
      v80 = *(void **)(v79 + 16);
      Size = (ADAPTER_RENDER *)a2->Size;
      v121.hAllocation = v80;
      v82 = ADAPTER_RENDER::DdiDescribeAllocation(Size, &v121, v24);
      v86 = v82;
      if ( v82 >= 0 )
      {
        if ( v121.Width == v9->Width
          && v121.Height == v9->Height
          && v121.Format == D3DDDIFMT_A8R8G8B8
          && v121.RefreshRate.Numerator == v9->RefreshRate.Numerator
          && v121.RefreshRate.Denominator == v9->RefreshRate.Denominator
          && *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 1040) == v9->DisplayOrientation )
        {
          return 0LL;
        }
      }
      else
      {
        v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v83, v85);
        v87[3] = a2;
        v87[4] = *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 88);
        v87[5] = v7;
        v87[6] = v86;
        WdLogEvent5_WdWarning(v87);
      }
    }
    v88 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)this, (struct DXGDEVICE *)a2, v7);
    v34 = v88;
    if ( v88 < 0 )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v89, v25);
      v90[3] = a2;
      v90[4] = v7;
      v90[5] = v34;
      WdLogEvent5_WdError(v90);
      return (unsigned int)v34;
    }
    v92 = *((_QWORD *)this + 14);
    if ( *(_QWORD *)(v92 + v18 + 88) || *(_QWORD *)(v92 + v18 + 600) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v89, v25);
      *(_QWORD *)(v93 + 24) = 819LL;
      WdLogEvent5_WdAssertion(v93);
    }
    v5 = v119;
  }
  v27 = DxgkCreateDoDPrimarySection;
  v28 = *(_DWORD **)(a2->Size + 16);
  if ( a2[21].pPrivateDriverData == v28 || (a2[21].Size & 0x10000000000LL) != 0 )
  {
    v29 = 0;
    v113 = 1;
    v115 = 0;
  }
  else
  {
    v113 = 0;
    v29 = (v28[87] & 0x10) != 0;
    v115 = v29;
    if ( (v28[87] & 0x10) == 0 )
    {
      v114 = 1;
      goto LABEL_28;
    }
  }
  v124[1] = 0LL;
  Width = v9->Width;
  Height = v9->Height;
  v128 = v17;
  RefreshRate = v9->RefreshRate;
  v124[3] = v126;
  v114 = 0;
  v126[0] = Width;
  v126[1] = Height;
  v126[2] = 21;
  v124[0] = 2049LL;
  LODWORD(v124[2]) = 1;
  if ( v29 )
  {
    if ( *((_BYTE *)this + 249) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
    {
      v94 = Height * Width;
      Height = Width;
      DWORD1(v118) = 4 * v94;
    }
    else
    {
      DWORD1(v118) = 4 * Height * Width;
    }
    v124[4] = DxgkCreateDoDPrimarySection;
    v124[5] = &v118;
    v116 = 4 * Height;
  }
  StandardAllocation = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v124, v5);
  v34 = StandardAllocation;
  if ( StandardAllocation >= 0 )
  {
    if ( !LODWORD(v124[1]) )
    {
      v95 = WdLogNewEntry5_WdAssertion(v33, v25);
      *(_QWORD *)(v95 + 24) = 903LL;
      WdLogEvent5_WdAssertion(v95);
    }
    if ( !HIDWORD(v124[1]) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v33, v25);
      *(_QWORD *)(v96 + 24) = 905LL;
      WdLogEvent5_WdAssertion(v96);
    }
    v35 = *((_QWORD *)this + 2);
    if ( *(int *)(v35 + 2328) >= 0x2000 )
      v36 = *(_DWORD *)(v35 + 280);
    else
      v36 = 1;
    if ( !v36 )
    {
LABEL_28:
      v47 = *((_QWORD *)this + 14);
      if ( v113 )
      {
        v48 = (ADAPTER_RENDER *)a2->Size;
        v121.hAllocation = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v18 + v47 + 88) + 48LL) + 16LL);
        v49 = ADAPTER_RENDER::DdiDescribeAllocation(v48, &v121, (__int64)v27);
        v52 = v49;
        if ( v49 >= 0 )
        {
          *(D3DDDI_MULTISAMPLINGMETHOD *)(*((_QWORD *)this + 14) + v18 + 1056) = v121.MultisampleMethod;
          *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 1064) = v121.PrivateDriverFormatAttribute;
LABEL_31:
          if ( v29 )
          {
            v109 = v118;
            if ( !(_DWORD)v118 || !*((_QWORD *)&v118 + 1) )
            {
              v110 = WdLogNewEntry5_WdAssertion((unsigned int)v118, v25);
              *(_QWORD *)(v110 + 24) = 1101LL;
              WdLogEvent5_WdAssertion(v110);
              v109 = v118;
            }
            *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 612) = v109;
            *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 616) = *((_QWORD *)&v118 + 1);
            v111 = *((_QWORD *)this + 14);
            *(_QWORD *)(v111 + v18 + 600) = *(_QWORD *)(v111 + v18 + 88);
            if ( !v116 )
            {
              v112 = WdLogNewEntry5_WdAssertion(v111, v25);
              *(_QWORD *)(v112 + 24) = 1114LL;
              WdLogEvent5_WdAssertion(v112);
            }
            *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 608) = v116;
            goto LABEL_50;
          }
          v125 = 0LL;
          if ( *((_BYTE *)this + 249) || ((v9->DisplayOrientation - 2) & 0xFFFFFFFD) != 0 )
          {
            v53 = v9->Width;
            v54 = v9->Height;
          }
          else
          {
            v53 = v9->Height;
            v54 = v9->Width;
          }
          Format = v9->Format;
          v124[0] = 0LL;
          v124[3] = &v125;
          *(_QWORD *)((char *)&v125 + 4) = __PAIR64__(Format, v54);
          LODWORD(v125) = v53;
          LODWORD(v124[2]) = 2;
          if ( v114 )
          {
            LODWORD(v124[0]) = 2049;
            v56 = 4 * v53;
            v124[4] = DxgkCreateDoDPrimarySection;
            v124[5] = &v118;
            DWORD1(v118) = 4 * v54 * v53;
          }
          else
          {
            v56 = v116;
          }
          v57 = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v124, v119);
          v34 = v57;
          if ( v57 >= 0 )
          {
            if ( !HIDWORD(v124[6]) || !LODWORD(v124[1]) )
            {
              v104 = WdLogNewEntry5_WdAssertion(v59, v58);
              *(_QWORD *)(v104 + 24) = 1055LL;
              WdLogEvent5_WdAssertion(v104);
            }
            v61 = HIDWORD(v125);
            if ( !HIDWORD(v125) )
            {
              v105 = WdLogNewEntry5_WdAssertion(0LL, v58);
              *(_QWORD *)(v105 + 24) = 1060LL;
              WdLogEvent5_WdAssertion(v105);
              v61 = HIDWORD(v125);
            }
            v62 = v120;
            *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 608) = v61;
            v63 = HIDWORD(v124[6]);
            DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v62 + 208));
            v64 = (v63 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v64 < *((_DWORD *)v62 + 64) )
            {
              v65 = *((_QWORD *)v62 + 30);
              v66 = *(_DWORD *)(v65 + 16 * v64 + 8);
              if ( ((v63 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60)
                && (v66 & 0x2000) == 0
                && (v66 & 0x1F) != 0 )
              {
                v74 = v66 & 0x1F;
                if ( (_BYTE)v74 == 5 )
                {
                  v68 = *(_QWORD *)(v65 + 16LL * (unsigned int)v64);
                  goto LABEL_47;
                }
                v67 = WdLogNewEntry5_WdError(v74, 2LL * (unsigned int)v64);
                *(_QWORD *)(v67 + 24) = 316LL;
                WdLogEvent5_WdError(v67);
              }
            }
            v68 = 0LL;
LABEL_47:
            ExReleasePushLockSharedEx((char *)v62 + 208, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 600) = v68;
            v71 = *((_QWORD *)this + 14);
            if ( !*(_QWORD *)(v71 + v18 + 600) )
            {
              v106 = WdLogNewEntry5_WdAssertion(v70, v69);
              *(_QWORD *)(v106 + 24) = 1064LL;
              WdLogEvent5_WdAssertion(v106);
              v71 = *((_QWORD *)this + 14);
            }
            *(_DWORD *)(v71 + v18 + 612) = 0;
            *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 616) = 0LL;
            if ( v114 )
            {
              if ( (_DWORD)v118 && *((_QWORD *)&v118 + 1) )
              {
                *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 612) = v118;
                *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 616) = *((_QWORD *)&v118 + 1);
              }
              v107 = *((_QWORD *)this + 14);
              *(_QWORD *)(v107 + v18 + 88) = *(_QWORD *)(v107 + v18 + 600);
              if ( !v56 )
              {
                v108 = WdLogNewEntry5_WdAssertion(v107, v69);
                *(_QWORD *)(v108 + 24) = 1090LL;
                WdLogEvent5_WdAssertion(v108);
              }
              *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 608) = v56;
            }
LABEL_50:
            if ( *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 696) == 1 )
              ADAPTER_DISPLAY::RemoveVidPnOwnership(this, a3);
            ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)this, a3, v9);
            return 0LL;
          }
          v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60);
          v99[3] = (unsigned int)v125;
          v99[4] = DWORD1(v125);
          v99[5] = a2;
          v99[6] = v17;
          v99[7] = v34;
          WdLogEvent5_WdWarning(v99);
          if ( v113 )
          {
            DXGDEVICE::DestroyAllocationInternal(
              (DXGDEVICE *)a2,
              0,
              0LL,
              *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 14) + v18 + 88) + 40LL),
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            v100 = *((_QWORD *)this + 2);
            v101 = *(int *)(v100 + 2328) < 0x2000 ? 1 : *(_DWORD *)(v100 + 280);
            if ( v101 )
            {
              v102 = v18 + 88;
              v103 = v101;
              do
              {
                *(_QWORD *)(v102 + *((_QWORD *)this + 14)) = 0LL;
                v102 += 8LL;
                --v103;
              }
              while ( v103 );
            }
          }
          return (unsigned int)v34;
        }
        v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v25, v51);
        v98[3] = a2;
        v98[4] = *(_QWORD *)(*((_QWORD *)this + 14) + v18 + 88);
        v98[5] = v17;
        v98[6] = v52;
        WdLogEvent5_WdWarning(v98);
        *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 1056) = 1;
      }
      else
      {
        *(_DWORD *)(v18 + v47 + 1056) = 1;
      }
      *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 1060) = 1;
      *(_DWORD *)(*((_QWORD *)this + 14) + v18 + 1064) = 0;
      goto LABEL_31;
    }
    v37 = v18 + 88;
    v38 = v36;
    v39 = (struct DXGPROCESS *)((char *)v120 + 208);
    v40 = (unsigned int *)&v124[6] + 1;
    while ( 1 )
    {
      v41 = *v40;
      DXGPUSHLOCK::AcquireShared(v39);
      v42 = (v41 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v42 < *((_DWORD *)v120 + 64) )
      {
        v43 = *((_QWORD *)v120 + 30);
        v44 = *(_DWORD *)(v43 + 16 * v42 + 8);
        if ( ((v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60) && (v44 & 0x2000) == 0 && (v44 & 0x1F) != 0 )
        {
          v73 = v44 & 0x1F;
          if ( (_BYTE)v73 == 5 )
          {
            v46 = *(_QWORD *)(v43 + 16LL * (unsigned int)v42);
            goto LABEL_24;
          }
          v45 = WdLogNewEntry5_WdError(v73, 2LL * (unsigned int)v42);
          *(_QWORD *)(v45 + 24) = 316LL;
          WdLogEvent5_WdError(v45);
        }
      }
      v46 = 0LL;
LABEL_24:
      ExReleasePushLockSharedEx(v39, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(v37 + *((_QWORD *)this + 14)) = v46;
      if ( (a2[21].Size & 0x10000000000LL) != 0 )
      {
        v97 = *(_QWORD *)(*(_QWORD *)(v37 + *((_QWORD *)this + 14)) + 48LL);
        *(_DWORD *)(v97 + 4) |= 2u;
      }
      v37 += 8LL;
      ++v40;
      if ( !--v38 )
      {
        v18 = v122;
        v9 = v123;
        v17 = v125;
        v29 = v115;
        goto LABEL_28;
      }
    }
  }
  v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v25, v27);
  v91[3] = v9->Width;
  v91[4] = v9->Height;
  v91[5] = a2;
  v91[6] = v17;
  v91[7] = v34;
  WdLogEvent5_WdWarning(v91);
  return (unsigned int)v34;
}
