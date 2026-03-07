__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        unsigned __int32 a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v9; // edi
  __int64 v10; // r15
  __int64 v11; // r12
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  enum _D3DDDIFORMAT Format; // eax
  char v24; // di
  int v25; // r8d
  struct DXGPROCESS *Current; // rbx
  int PreferredHdrPixelFormat; // eax
  __int64 v28; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v29; // rbx
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  __int64 v35; // rbx
  unsigned int updated; // eax
  int v37; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v38; // r9d
  struct _DXGDMM_INTERFACE *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdi
  int v43; // eax
  struct DXGGLOBAL *Global; // rax
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rbx
  unsigned __int8 v51; // [rsp+20h] [rbp-E0h]
  unsigned int *v52; // [rsp+40h] [rbp-C0h]
  _BYTE v54[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct _DXGDMM_INTERFACE *v55; // [rsp+58h] [rbp-A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v56; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v57[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h]
  void (__fastcall *v59)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v62; // [rsp+B8h] [rbp-48h]
  struct D3DKMDT_HVIDPN__ *v63; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v65; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v66; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v67; // [rsp+E0h] [rbp-20h]
  _QWORD v68[3]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v69[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _D3DDDI_RATIONAL v70[2]; // [rsp+110h] [rbp+10h] BYREF
  __m256i v71; // [rsp+120h] [rbp+20h] BYREF
  __int128 v72; // [rsp+140h] [rbp+40h]
  _DWORD v73[68]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+2B8h] [rbp+1B8h]

  v66 = a7;
  v64 = retaddr;
  v9 = a3;
  v62 = a4;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v64, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 6970LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      6970LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *((_QWORD *)this + 235);
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v10 || !*(_QWORD *)(v10 + 2920) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 6978LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      6978LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v10 + 2920), v11);
  *(_OWORD *)v69 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v70[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  v71 = *(__m256i *)((_BYTE *)DisplayModeInfo + 1);
  v13 = *((_OWORD *)DisplayModeInfo + 4);
  v56.Rotation = -1;
  v14 = *((_QWORD *)a2 + 6);
  v72 = v13;
  v56.Flags.Value = 1;
  memset(&v56.Width, 0, 32);
  v15 = *(void **)(v14 + 16);
  v16 = *((_QWORD *)this + 2);
  v56.hAllocation = v15;
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 2928LL), &v56);
  v20 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry5(2LL, v17, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
      v20,
      (__int64)this,
      *((unsigned int *)a2 + 4),
      (__int64)a2,
      (unsigned int)v11);
    goto LABEL_35;
  }
  if ( v56.Width != v69[0] || v56.Height != v69[1] )
  {
    WdLogSingleEntry5(3LL, a2, v56.Width, v56.Height, (unsigned int)v69[0], (unsigned int)v69[1]);
    goto LABEL_14;
  }
  if ( v56.Rotation != -1 && v56.Rotation != v70[1].Denominator )
  {
    WdLogSingleEntry3(3LL, a2, v56.Rotation, (int)v70[1].Denominator);
LABEL_14:
    LODWORD(v20) = -1071775739;
    goto LABEL_35;
  }
  v21 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v21) = ((unsigned __int32)v71.m256i_i32[2] >> 4) ^ v21;
  if ( (v21 & 1) == 0 && v56.PrivateDriverFormatAttribute != v71.m256i_i32[5] )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v56.Height, v18, v19);
    LODWORD(v20) = -1071774891;
    v22[3] = a2;
    v22[4] = v56.PrivateDriverFormatAttribute;
    v22[5] = v71.m256i_u32[5];
    *a6 = v56.PrivateDriverFormatAttribute;
    goto LABEL_35;
  }
  *(__int64 *)((char *)&v71.m256i_i64[1] + 4) = (__int64)v56.MultisampleMethod;
  Format = v56.Format;
  v69[2] = v56.Format;
  if ( !*(_QWORD *)(v10 + 2928) )
  {
    if ( v56.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v69[2] = Format;
  }
  if ( !v56.RefreshRate.Denominator )
  {
    WdLogSingleEntry1(2LL, v56.RefreshRate.Numerator);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The miniport driver returned invalid refresh rate with denominator being 0; numerator is 0x%I64x",
      v56.RefreshRate.Numerator,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v20) = -1073741811;
    goto LABEL_35;
  }
  if ( v56.RefreshRate.Numerator == 64
    && v56.RefreshRate.Denominator == 1
    && v70[0].Numerator == -2
    && v70[0].Denominator == -2 )
  {
    v56.RefreshRate.Numerator = -2;
    v56.RefreshRate.Denominator = -2;
  }
  v24 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) == 0 )
  {
LABEL_38:
    Current = DXGPROCESS::GetCurrent();
    v67 = Current;
    Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage();
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304537) )
    {
      if ( v24 )
      {
        if ( Current )
        {
          if ( (*((_DWORD *)Current + 106) & 4) != 0 )
          {
            PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*(_QWORD *)(v10 + 2920));
            if ( !BmlPixelFormatMatchHdrPixelFormat(v56.Format, SHIDWORD(v72), PreferredHdrPixelFormat != 1) )
            {
              WdLogSingleEntry3(3LL, a2, v56.Format, SHIDWORD(v72));
              goto LABEL_33;
            }
          }
        }
      }
    }
    v70[0] = v56.RefreshRate;
    v69[3] = DmmMapVSyncFromRationalToInteger(&v56.RefreshRate, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3, 0LL);
    v28 = *((_QWORD *)a2 + 6);
    v70[1].Numerator = a3;
    v71.m256i_i32[2] ^= (v71.m256i_i8[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v28 + 4))) & 0x10;
    v29 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v10 + 2920), v11);
    if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
            *(DXGADAPTER ***)(v10 + 2920),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
    {
      v30 = v71.m256i_u32[2];
      if ( v24
        || *((_DWORD *)v29 + 4) == v70[0].Numerator
        && *((_DWORD *)v29 + 5) == v70[0].Denominator
        && *((_DWORD *)v29 + 6) == v70[1].Numerator
        && *((_DWORD *)v29 + 7) == v70[1].Denominator
        && *((_DWORD *)v29 + 8) == v71.m256i_i32[0]
        && (v31 = *((_DWORD *)v29 + 9), (((unsigned __int8)v31 ^ v71.m256i_i8[4]) & 1) == 0)
        && (((unsigned __int8)v31 ^ v71.m256i_i8[4]) & 2) == 0
        && ((*((_BYTE *)v29 + 40) ^ v71.m256i_i8[8]) & 0xF) == 0 )
      {
        if ( *(_DWORD *)v29 == v69[0] && *((_DWORD *)v29 + 1) == v69[1] )
        {
          if ( (v32 = *((_DWORD *)v29 + 2), v32 == v69[2])
            || v32 == 21 && v69[2] == D3DDDIFMT_X8R8G8B8
            || v32 == 22 && v69[2] == D3DDDIFMT_A8R8G8B8 )
          {
            v33 = *((_DWORD *)v29 + 10);
            if ( (((unsigned __int8)v33 ^ v71.m256i_i8[8]) & 0x10) == 0 )
            {
              v30 = v33 ^ v71.m256i_i32[2];
              if ( (((unsigned __int8)v33 ^ v71.m256i_i8[8]) & 0x20) == 0
                && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v10, v11, v69[2])
                && (v24 || *(_QWORD *)((char *)v29 + 44) == *(__int64 *)((char *)&v71.m256i_i64[1] + 4)) )
              {
                DXGDEVICE::SetDisplayedPrimary(this, v11, a2, 0, 1u);
                v34 = DmmPowerOnOffTargetsFromSourceIfNecessary((void *const)v10, 0, 0LL);
                if ( v34 < 0 )
                {
                  v35 = v34;
                  WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 2920), v34);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed on hAdapter 0x%I64x (Status = 0x%I64x).",
                    *(_QWORD *)(v10 + 2920),
                    v35,
                    0LL,
                    0LL,
                    0LL);
                }
                updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                            *(ADAPTER_DISPLAY **)(v10 + 2920),
                            this,
                            v11,
                            *((struct DXGADAPTERALLOCATION **)a2 + 6));
                v55 = 0LL;
                LODWORD(v20) = updated;
                DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v10 + 404), v11, 0LL);
LABEL_94:
                if ( (int)v20 >= 0 )
                {
                  *((_DWORD *)this + v11 + 310) |= 0x200u;
                  v68[1] = 0LL;
                  v68[0] = 1LL;
                  DxgkStatusChangeNotify(v68);
                }
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
    v55 = 0LL;
    v37 = DxgkQueryDmmInterface((DXGADAPTER *)v10, v30, &v55);
    v20 = v37;
    if ( v37 < 0 )
    {
      WdLogSingleEntry5(2LL, v37, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkQueryDmmInterface failed 0x%I64x 0x%I64x 0x%I64x",
        v20,
        (__int64)this,
        *((unsigned int *)a2 + 4),
        (__int64)a2,
        (unsigned int)v11);
      goto LABEL_34;
    }
    v39 = v55;
    v65 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0;
    v57[0] = 0;
    v63 = 0LL;
    v20 = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                 v55,
                 (void *const)v10,
                 v11,
                 v38,
                 v51,
                 (struct _DXGK_DISPLAYMODE_INFO *)v69,
                 &v63,
                 &v65,
                 (unsigned int (*)[16])v52);
    DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
      (__int64)v57,
      (__int64)v63,
      *((_QWORD *)v39 + 8),
      v10);
    v40 = -1071774925LL;
    switch ( (_DWORD)v20 )
    {
      case 0xC01E0333:
        v41 = (unsigned int)v11;
LABEL_73:
        WdLogSingleEntry5(7LL, v40, v41, (unsigned int)v69[0], (unsigned int)v69[1], v69[2]);
        goto LABEL_74;
      case 0xC01E035A:
        v41 = *(_QWORD *)(v10 + 2920);
        v40 = (unsigned int)v11;
        goto LABEL_73;
      case 0xC01E0306:
        WdLogSingleEntry5(
          7LL,
          (unsigned int)v69[0],
          (unsigned int)v69[1],
          v69[2],
          v70[0].Numerator / v70[0].Denominator,
          (unsigned int)v11);
        goto LABEL_74;
    }
    if ( (int)v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, (unsigned int)v11, (unsigned int)v69[0], (unsigned int)v69[1], v69[2]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to create functional VidPN based on the active VidPN with source 0x%I64x enabled with %I"
                  "64d x %I64d x %I64d.",
        v20,
        (unsigned int)v11,
        (unsigned int)v69[0],
        (unsigned int)v69[1],
        v69[2]);
LABEL_74:
      if ( v57[0] )
        v59(v60, v58);
      goto LABEL_34;
    }
    DXGDEVICE::SetDisplayedPrimary(this, v11, a2, 0, 1u);
    memset(v73, 0, 0x104uLL);
    v54[0] = 0;
    v42 = v58;
    v73[8] = 1 << v11;
    v43 = DmmSetTimingsOnAdapter(v10, v58, 0, 2u, v73, (__int64)v54, 0LL, 0LL);
    v20 = v43;
    if ( v43 < 0 )
    {
      WdLogSingleEntry5(2LL, v43, *(_QWORD *)(v10 + 2920), (unsigned int)v11, a2, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NTSTATUS=0x%I64x DXGADAPTER 0x%I64x DXGADAPTER::CommitVidPn failed VidPnSourceId 0x%I64x DXGALLOCATION "
                  "0x%I64x 0x%I64x 0x%I64x",
        v20,
        *(_QWORD *)(v10 + 2920),
        (unsigned int)v11,
        (__int64)a2,
        (__int64)this);
    }
    else
    {
      DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v10, (struct _DMM_SET_TIMING_RESULT *)v54, v66);
      if ( ((1 << v11) & v73[21]) != 0 )
        LODWORD(v20) = v73[v11 + 22];
      if ( v67 && (*((_DWORD *)v67 + 106) & 4) != 0 )
        goto LABEL_92;
      Global = DXGGLOBAL::GetGlobal();
      do
        v45 = _InterlockedIncrement((volatile signed __int32 *)Global + 344);
      while ( !v45 );
      ADAPTER_DISPLAY::SetDisplayId(
        *(ADAPTER_DISPLAY **)(v10 + 2920),
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
        v45);
      LOBYTE(v46) = 1;
      DxgkNotifyDisplayChange(v46);
    }
    v42 = v58;
LABEL_92:
    if ( v57[0] )
      v59(v60, v42);
    goto LABEL_94;
  }
  if ( DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v70, &v56.RefreshRate, 0)
    || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
         (const struct _D3DDDI_RATIONAL *)&v71.m256i_u64[3],
         &v56.RefreshRate,
         v25) )
  {
    v56.RefreshRate = v70[0];
    goto LABEL_38;
  }
  WdLogSingleEntry5(
    3LL,
    a2,
    v56.RefreshRate.Numerator,
    v56.RefreshRate.Denominator,
    v70[0].Numerator,
    v70[0].Denominator);
LABEL_33:
  LODWORD(v20) = -1071775739;
LABEL_34:
  v9 = a3;
LABEL_35:
  v69[1] = (enum _D3DDDIFORMAT)v56.Height;
  v69[0] = (enum _D3DDDIFORMAT)v56.Width;
  v69[2] = v56.Format;
  if ( v56.RefreshRate.Denominator )
    v69[3] = DmmMapVSyncFromRationalToInteger(&v56.RefreshRate, v9, 0LL);
  else
    v69[3] = D3DDDIFMT_UNKNOWN;
  v70[0] = v56.RefreshRate;
  v70[1].Denominator = v62;
  v47 = *((_QWORD *)a2 + 6);
  v70[1].Numerator = v9;
  v48 = DmmCacheDisplayModeChangeRequest(v10, (*(_DWORD *)(v47 + 4) >> 6) & 0xF, v69);
  if ( v48 < 0 )
  {
    v49 = v48;
    WdLogSingleEntry1(2LL, v48);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmCacheDisplayModeChangeRequest (status = 0x%I64x)",
      v49,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v64, 8);
  return (unsigned int)v20;
}
