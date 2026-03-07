__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(__int64, struct D3DKMDT_HVIDPN__ *),
        struct _D3DDDI_RATIONAL a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _DXGK_DISPLAYMODE_INFO *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        struct _D3DDDI_RATIONAL a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // r15
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v16; // rbx
  struct _DXGK_DISPLAYMODE_INFO *v17; // rdi
  __int64 v18; // r13
  __int64 (__fastcall *v19)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *); // rax
  int v20; // eax
  __int64 v21; // rsi
  unsigned __int16 v22; // ax
  __int64 v23; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v25; // r14
  unsigned int v26; // eax
  __int64 v27; // r14
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rsi
  int v29; // eax
  bool v30; // al
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGGLOBAL *Global; // rax
  void *v36; // r14
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int i; // edi
  unsigned __int16 v44; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v45; // r14
  unsigned int j; // esi
  unsigned __int16 v47; // dx
  int v48; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v49; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v50; // rax
  int v51; // ebx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v53; // r15
  __int64 v54; // rsi
  int v55; // edi
  int v56; // edi
  struct D3DKMDT_HVIDPN__ *v57; // rdx
  const struct _D3DDDI_RATIONAL *v58; // rbx
  const wchar_t *v60; // r9
  __int64 v61; // rdi
  int v62; // edx
  unsigned int k; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v64; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 Numerator; // [rsp+28h] [rbp-E0h]
  __int64 v67; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION *v68; // [rsp+38h] [rbp-D0h]
  struct _D3DDDI_RATIONAL *v69; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v71[64]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h]
  _D3DKMDT_VIDPN_TARGET_MODE v73[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v75; // [rsp+180h] [rbp+78h] BYREF
  struct D3DKMDT_HVIDPN__ *v76; // [rsp+188h] [rbp+80h]
  struct _DXGDMM_VIDPN_INTERFACE *v77; // [rsp+190h] [rbp+88h]

  v77 = a4;
  v76 = a3;
  v75 = a2;
  if ( !*(_QWORD *)&a2 )
  {
    WdLogSingleEntry1(1LL, 4134LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hAdapter != NULL", 4134LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4135LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPn != NULL", 4135LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4136LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDmmVidPnInterface != NULL", 4136LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 4137LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 4137LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 4138LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      4138LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry1(1LL, 4139LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4139LL, 0LL, 0LL, 0LL, 0LL);
  }
  v18 = a7;
  if ( a7 == -1 )
  {
    WdLogSingleEntry1(1LL, 4140LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4140LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a13 )
  {
    WdLogSingleEntry1(1LL, 4141LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phFunctionalizedVidPn != NULL", 4141LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))*((_QWORD *)v16 + 15);
  v70 = 0LL;
  v20 = v19(v15, &v70);
  v21 = v20;
  if ( v20 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v71, v70, v70);
    if ( v72 )
      v22 = *(_WORD *)(v72 + 22);
    else
      v22 = 0;
    if ( v22 < (unsigned __int16)v70 )
    {
      WdLogSingleEntry1(6LL, v70);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate PathModality for 0x%I64x paths",
        v70,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v25) = -1073741801;
    }
    else
    {
      a10 = D3DKMDT_VPPS_UNINITIALIZED;
      v23 = *(_QWORD *)(*(_QWORD *)&v75 + 404LL);
      MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                  *(DXGADAPTER **)&v75,
                                                  a3,
                                                  v18,
                                                  (unsigned int *const)&a10);
      v25 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource < 0 )
      {
        WdLogSingleEntry3(2LL, v18, v15, MostImportantVidPnPathTargetsFromSource);
        v60 = L"Failed to find the most important paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)";
        v69 = 0LL;
        v68 = (struct _D3DKMDT_2DREGION *)v25;
        v67 = (__int64)v15;
        Numerator = v18;
LABEL_82:
        v62 = 0x40000;
LABEL_84:
        DxgkLogInternalTriageEvent(0LL, v62, -1, (__int64)v60, Numerator, v67, (__int64)v68, (__int64)v69, 0LL);
        goto LABEL_62;
      }
      v26 = 0;
      a7 = 0;
      if ( v70 )
      {
        v27 = 0LL;
        while ( 1 )
        {
          a12.Numerator = 0;
          a11 = 0;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, v26);
          v29 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, struct _D3DDDI_RATIONAL *, unsigned int *))a6
                 + 16))(
                  v15,
                  v27,
                  &a12,
                  &a11);
          v25 = v29;
          if ( v29 < 0 )
            break;
          *((_DWORD *)PathDescriptor + 6) = a12.Numerator;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v23;
          v30 = a12.Numerator != (_DWORD)v18 || *((_BYTE *)DXGGLOBAL::GetGlobal() + 304537);
          v31 = ConvertVidPnPathToPathDescription(
                  *(void **)&v75,
                  v76,
                  v77,
                  a6,
                  v15,
                  a12.Numerator,
                  a11,
                  v30,
                  PathDescriptor);
          v25 = v31;
          if ( v31 < 0 )
          {
            WdLogSingleEntry4(2LL, a12.Numerator, a11, v15, v31);
            v60 = L"Failed to convert paths from source 0x%I64x to target 0x%I64x in VidPn topology 0x%I64x to PathsModali"
                   "ty (status = 0x%I64x)";
            v69 = (struct _D3DDDI_RATIONAL *)v25;
            v68 = (struct _D3DKMDT_2DREGION *)v15;
            v67 = a11;
            Numerator = a12.Numerator;
            goto LABEL_82;
          }
          if ( a12.Numerator == (_DWORD)v18 )
          {
            v32 = *((_QWORD *)PathDescriptor + 1);
            *((_DWORD *)PathDescriptor + 24) = *(_DWORD *)v17;
            *((_DWORD *)PathDescriptor + 25) = *((_DWORD *)v17 + 1);
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = *((_DWORD *)v17 + 2);
            *((_BYTE *)PathDescriptor + 128) = (*((_DWORD *)v17 + 10) & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            v32 |= 0x100uLL;
            v33 = *(_QWORD *)PathDescriptor;
            *((_QWORD *)PathDescriptor + 1) = v32;
            v33 |= 2uLL;
            v34 = *((_QWORD *)v17 + 7);
            v32 |= 2uLL;
            *(_QWORD *)PathDescriptor = v33;
            *((_QWORD *)PathDescriptor + 1) = v32;
            *(_QWORD *)((char *)PathDescriptor + 52) = v34;
            *((_QWORD *)PathDescriptor + 28) = *((_QWORD *)v17 + 2);
            *((_DWORD *)PathDescriptor + 60) = *((_DWORD *)v17 + 18);
            *(_QWORD *)PathDescriptor = v33 | 0x1000000;
            *((_QWORD *)PathDescriptor + 1) = v32 | 0x1000000;
            Global = DXGGLOBAL::GetGlobal();
            v36 = (void *)v75;
            if ( *((_BYTE *)Global + 304480)
              && (int)DmmGetClientVidPnTargetModeInfo(
                        *(void *const *)&v75,
                        a11,
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                        0LL) >= 0 )
            {
              *(_QWORD *)PathDescriptor |= 1uLL;
              *((_QWORD *)PathDescriptor + 1) |= 1uLL;
            }
            if ( a11 == a10 )
            {
              v37 = *((int *)v17 + 7);
              switch ( *((_DWORD *)v17 + 7) )
              {
                case 1:
                  v38 = 1;
                  break;
                case 2:
                  v38 = 2;
                  break;
                case 3:
                  v38 = 3;
                  break;
                case 4:
                  v38 = 4;
                  break;
                default:
                  v61 = *((int *)v17 + 7);
                  WdLogSingleEntry1(2LL, v37);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Unknown orientation %I64d",
                    v61,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v17 = a9;
                  v38 = 255;
                  break;
              }
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v38 = 0;
            }
            v39 = *(_QWORD *)PathDescriptor;
            *((_DWORD *)PathDescriptor + 33) = v38;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ *((_DWORD *)v17 + 6)) & 7;
            v40 = v39 | 4;
            *(_QWORD *)PathDescriptor = v40;
            v41 = *((unsigned int *)v17 + 8);
            if ( (unsigned int)(v41 - 1) <= 1 )
            {
              ConvertGdiScalingToDMMScaling(v41, (char *)PathDescriptor + 136);
            }
            else if ( (v40 & 0x40000000000LL) == 0 )
            {
              DmmGetDefaultScaling(v36, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18001820B8FLL;
          }
          v26 = a7 + 1;
          v27 = v26;
          ++a7;
          if ( v26 >= v70 )
            goto LABEL_42;
        }
        WdLogSingleEntry2(2LL, v15, v29);
        v60 = L"Failed to enumerate the all the paths topology 0x%I64x (status = 0x%I64x)";
        v69 = 0LL;
        v68 = 0LL;
        v67 = v25;
        Numerator = (__int64)v15;
        goto LABEL_82;
      }
LABEL_42:
      v42 = v72;
      for ( i = 0; ; ++i )
      {
        v44 = v42 ? *(_WORD *)(v42 + 20) : 0;
        if ( i >= v44 )
          break;
        v45 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, i);
        if ( (*(_QWORD *)v45 & 0x4000000000000LL) != 0 )
        {
          v42 = v72;
        }
        else
        {
          for ( j = i; ; ++j )
          {
            v42 = v72;
            v47 = v72 ? *(_WORD *)(v72 + 20) : 0;
            if ( j >= v47 )
              break;
            v48 = *((_DWORD *)v45 + 6);
            v49 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, j);
            if ( CCD_TOPOLOGY::IsMatchingSource(v49, (const struct _LUID *)v45 + 2, v48) )
            {
              *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, j) + 46) = i | 0xFE540000;
              v50 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, j);
              *(_QWORD *)v50 |= 0x4000000000000uLL;
            }
          }
        }
      }
      v51 = 0;
      if ( DxgkGetGlobalRawmodeFlag() )
        v51 = 0x20000;
      Current = DXGPROCESS::GetCurrent(0x20000LL);
      v53 = a13;
      v54 = (__int64)v75;
      v55 = v51 | 0x8000000;
      if ( (*((_DWORD *)Current + 106) & 4) == 0 )
        v55 = v51;
      v56 = v55 | 0x40000;
      if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v72, *(_QWORD *)&v75, 1, 2, v56, (__int64)a13) < 0 )
      {
        for ( k = 0; k < v70; ++k )
        {
          v64 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v71, k);
          if ( *((_DWORD *)v64 + 6) == (_DWORD)v18 )
            *((_QWORD *)v64 + 1) &= 0xFFFFFFFFFEFFFFFDuLL;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v72,
                                                     v54,
                                                     1,
                                                     2,
                                                     v56,
                                                     (__int64)v53);
        v25 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v18 & 0xFFFF0000),
          0,
          *(_QWORD *)(v54 + 404));
        if ( (int)v25 < 0 )
        {
          WdLogSingleEntry1(2LL, v25);
          v60 = L"After relaxing the refresh rate matching functionalize still failed (status = 0x%I64x)";
          v69 = 0LL;
          v68 = 0LL;
          v67 = 0LL;
          Numerator = v25;
          goto LABEL_82;
        }
      }
      memset(v73, 0, 0x50uLL);
      v57 = *v53;
      v75 = 0LL;
      a11 = 0;
      LODWORD(v25) = RetrievePinnedModeForTarget(v77, v57, a10, v73, &v75, &a11);
      if ( (int)v25 < 0 )
      {
        WdLogSingleEntry1(1LL, 4456LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to update refresh rate!",
          4456LL,
          0LL,
          0LL,
          0LL,
          0LL);
        a1[8](v54, *v53);
        *v53 = 0LL;
        goto LABEL_62;
      }
      v58 = (const struct _D3DDDI_RATIONAL *)a9;
      *((_QWORD *)a9 + 7) = v73[0].VideoSignalInfo.VSyncFreq;
      v73[0].VideoSignalInfo.VSyncFreq = v75;
      DmmCalculatePresentationVSync(&v73[0].VideoSignalInfo, (struct _D3DDDI_RATIONAL *)&v58[2]);
      v58[1].Denominator = DmmMapVSyncFromRationalToInteger(
                             v58 + 2,
                             (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v73[0].VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                             0LL);
      if ( v58[9].Numerator != a11 )
      {
        WdLogSingleEntry1(1LL, 4450LL);
        v60 = L"io_pDisplayModeInfo->BoostRefreshRateMultiplier == BoostRefreshRateMultiplier";
        v69 = 0LL;
        v62 = 262146;
        v68 = 0LL;
        v67 = 0LL;
        Numerator = 4450LL;
        goto LABEL_84;
      }
    }
LABEL_62:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v71);
    return (unsigned int)v25;
  }
  WdLogSingleEntry3(2LL, v18, v15, v20);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
    v18,
    (__int64)v15,
    v21,
    0LL,
    0LL);
  return (unsigned int)v21;
}
