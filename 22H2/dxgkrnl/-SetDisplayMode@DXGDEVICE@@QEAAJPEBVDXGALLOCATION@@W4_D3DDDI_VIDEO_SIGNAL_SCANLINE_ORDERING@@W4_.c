/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0170854
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0172AF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0002488 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00027BC (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0002C00 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0004118 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0013E1C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C00170C8 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage @ 0x1C0025C9C (Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0170334 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0170438 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0171364 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C0171404 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C0171438 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0171518 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1C017AD48 (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01950A0 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkQueryDmmInterface @ 0x1C01DADD8 (DxgkQueryDmmInterface.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01E1860 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72B8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1C01F40B0 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     DxgkNotifyDisplayChange @ 0x1C0356BDC (DxgkNotifyDisplayChange.c)
 */

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
  __int64 v27; // r8
  __int64 v28; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v29; // rbx
  int v30; // r8d
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rbx
  unsigned int updated; // eax
  int DmmInterface; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdi
  int v41; // eax
  struct DXGGLOBAL *Global; // rax
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rbx
  unsigned __int8 v49; // [rsp+20h] [rbp-E0h]
  unsigned int *v50; // [rsp+40h] [rbp-C0h]
  _BYTE v52[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct _DXGDMM_INTERFACE *v53; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_DESCRIBEALLOCATION v54; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v55[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h]
  void (__fastcall *v57)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v60; // [rsp+B8h] [rbp-48h]
  struct D3DKMDT_HVIDPN__ *v61; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v63; // [rsp+D0h] [rbp-30h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v64; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v65; // [rsp+E0h] [rbp-20h]
  _QWORD v66[3]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v67[4]; // [rsp+100h] [rbp+0h] BYREF
  _D3DDDI_RATIONAL v68[2]; // [rsp+110h] [rbp+10h] BYREF
  __m256i v69; // [rsp+120h] [rbp+20h] BYREF
  __int128 v70; // [rsp+140h] [rbp+40h]
  _DWORD v71[68]; // [rsp+150h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+2B8h] [rbp+1B8h]

  v64 = a7;
  v62 = retaddr;
  v9 = a3;
  v60 = a4;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v62, 6);
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
  *(_OWORD *)v67 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v68[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  v69 = *(__m256i *)((_BYTE *)DisplayModeInfo + 1);
  v13 = *((_OWORD *)DisplayModeInfo + 4);
  v54.Rotation = -1;
  v14 = *((_QWORD *)a2 + 6);
  v70 = v13;
  v54.Flags.Value = 1;
  memset(&v54.Width, 0, 32);
  v15 = *(void **)(v14 + 16);
  v16 = *((_QWORD *)this + 2);
  v54.hAllocation = v15;
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v16 + 16) + 2928LL), &v54);
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
  if ( v54.Width != v67[0] || v54.Height != v67[1] )
  {
    WdLogSingleEntry5(3LL, a2, v54.Width, v54.Height, (unsigned int)v67[0], (unsigned int)v67[1]);
    goto LABEL_14;
  }
  if ( v54.Rotation != -1 && v54.Rotation != v68[1].Denominator )
  {
    WdLogSingleEntry3(3LL, a2, v54.Rotation, (int)v68[1].Denominator);
LABEL_14:
    LODWORD(v20) = -1071775739;
    goto LABEL_35;
  }
  v21 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v21) = ((unsigned __int32)v69.m256i_i32[2] >> 4) ^ v21;
  if ( (v21 & 1) == 0 && v54.PrivateDriverFormatAttribute != v69.m256i_i32[5] )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v54.Height, v18, v19);
    LODWORD(v20) = -1071774891;
    v22[3] = a2;
    v22[4] = v54.PrivateDriverFormatAttribute;
    v22[5] = v69.m256i_u32[5];
    *a6 = v54.PrivateDriverFormatAttribute;
    goto LABEL_35;
  }
  *(__int64 *)((char *)&v69.m256i_i64[1] + 4) = (__int64)v54.MultisampleMethod;
  Format = v54.Format;
  v67[2] = v54.Format;
  if ( !*(_QWORD *)(v10 + 2928) )
  {
    if ( v54.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v67[2] = Format;
  }
  if ( !v54.RefreshRate.Denominator )
  {
    WdLogSingleEntry1(2LL, v54.RefreshRate.Numerator);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The miniport driver returned invalid refresh rate with denominator being 0; numerator is 0x%I64x",
      v54.RefreshRate.Numerator,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v20) = -1073741811;
    goto LABEL_35;
  }
  if ( v54.RefreshRate.Numerator == 64
    && v54.RefreshRate.Denominator == 1
    && v68[0].Numerator == -2
    && v68[0].Denominator == -2 )
  {
    v54.RefreshRate.Numerator = -2;
    v54.RefreshRate.Denominator = -2;
  }
  v24 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) == 0 )
  {
LABEL_38:
    Current = DXGPROCESS::GetCurrent();
    v65 = Current;
    Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage();
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304537) )
    {
      if ( v24 )
      {
        if ( Current )
        {
          if ( (*((_DWORD *)Current + 106) & 4) != 0 )
          {
            LOBYTE(v27) = (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*(_QWORD *)(v10 + 2920)) != 1;
            if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)v54.Format, HIDWORD(v70), v27) )
            {
              WdLogSingleEntry3(3LL, a2, v54.Format, SHIDWORD(v70));
              goto LABEL_33;
            }
          }
        }
      }
    }
    v68[0] = v54.RefreshRate;
    v67[3] = DmmMapVSyncFromRationalToInteger(&v54.RefreshRate, (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)a3, 0LL);
    v28 = *((_QWORD *)a2 + 6);
    v68[1].Numerator = a3;
    v69.m256i_i32[2] ^= (v69.m256i_i8[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v28 + 4))) & 0x10;
    v29 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v10 + 2920), v11);
    if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
            *(DXGADAPTER ***)(v10 + 2920),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
    {
      if ( v24
        || *((_DWORD *)v29 + 4) == v68[0].Numerator
        && *((_DWORD *)v29 + 5) == v68[0].Denominator
        && *((_DWORD *)v29 + 6) == v68[1].Numerator
        && *((_DWORD *)v29 + 7) == v68[1].Denominator
        && *((_DWORD *)v29 + 8) == v69.m256i_i32[0]
        && (v30 = *((_DWORD *)v29 + 9), (((unsigned __int8)v30 ^ v69.m256i_i8[4]) & 1) == 0)
        && (((unsigned __int8)v30 ^ v69.m256i_i8[4]) & 2) == 0
        && ((*((_BYTE *)v29 + 40) ^ v69.m256i_i8[8]) & 0xF) == 0 )
      {
        if ( *(_DWORD *)v29 == v67[0] && *((_DWORD *)v29 + 1) == v67[1] )
        {
          if ( (v31 = *((_DWORD *)v29 + 2), v31 == v67[2])
            || v31 == 21 && v67[2] == D3DDDIFMT_X8R8G8B8
            || v31 == 22 && v67[2] == D3DDDIFMT_A8R8G8B8 )
          {
            v32 = *((_DWORD *)v29 + 10);
            if ( (((unsigned __int8)v32 ^ v69.m256i_i8[8]) & 0x10) == 0
              && (((unsigned __int8)v32 ^ v69.m256i_i8[8]) & 0x20) == 0
              && !DmmNeedTargetModeWireformatOrColorspaceChange((_QWORD *)v10, v11, v67[2])
              && (v24 || *(_QWORD *)((char *)v29 + 44) == *(__int64 *)((char *)&v69.m256i_i64[1] + 4)) )
            {
              DXGDEVICE::SetDisplayedPrimary(this, v11, a2, 0, 1u);
              v33 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v10, 0LL, 0LL);
              if ( v33 < 0 )
              {
                v34 = v33;
                WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 2920), v33);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed on hAdapter 0x%I64x (Status = 0x%I64x).",
                  *(_QWORD *)(v10 + 2920),
                  v34,
                  0LL,
                  0LL,
                  0LL);
              }
              updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                          *(ADAPTER_DISPLAY **)(v10 + 2920),
                          this,
                          v11,
                          *((struct DXGADAPTERALLOCATION **)a2 + 6));
              v53 = 0LL;
              LODWORD(v20) = updated;
              DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v10 + 404), v11, 0LL);
LABEL_94:
              if ( (int)v20 >= 0 )
              {
                *((_DWORD *)this + v11 + 310) |= 0x200u;
                v66[1] = 0LL;
                v66[0] = 1LL;
                DxgkStatusChangeNotify(v66);
              }
              goto LABEL_34;
            }
          }
        }
      }
    }
    v53 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v10);
    v20 = DmmInterface;
    if ( DmmInterface < 0 )
    {
      WdLogSingleEntry5(2LL, DmmInterface, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v11);
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
    v63 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0;
    v55[0] = 0;
    v61 = 0LL;
    v20 = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                 v53,
                 (void *const)v10,
                 v11,
                 v37,
                 v49,
                 (struct _DXGK_DISPLAYMODE_INFO *)v67,
                 &v61,
                 &v63,
                 (unsigned int (*)[16])v50);
    DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
      (__int64)v55,
      (__int64)v61,
      *((_QWORD *)v53 + 8),
      v10);
    v38 = -1071774925LL;
    switch ( (_DWORD)v20 )
    {
      case 0xC01E0333:
        v39 = (unsigned int)v11;
LABEL_73:
        WdLogSingleEntry5(7LL, v38, v39, (unsigned int)v67[0], (unsigned int)v67[1], v67[2]);
        goto LABEL_74;
      case 0xC01E035A:
        v39 = *(_QWORD *)(v10 + 2920);
        v38 = (unsigned int)v11;
        goto LABEL_73;
      case 0xC01E0306:
        WdLogSingleEntry5(
          7LL,
          (unsigned int)v67[0],
          (unsigned int)v67[1],
          v67[2],
          v68[0].Numerator / v68[0].Denominator,
          (unsigned int)v11);
        goto LABEL_74;
    }
    if ( (int)v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, (unsigned int)v11, (unsigned int)v67[0], (unsigned int)v67[1], v67[2]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to create functional VidPN based on the active VidPN with source 0x%I64x enabled with %I"
                  "64d x %I64d x %I64d.",
        v20,
        (unsigned int)v11,
        (unsigned int)v67[0],
        (unsigned int)v67[1],
        v67[2]);
LABEL_74:
      if ( v55[0] )
        v57(v58, v56);
      goto LABEL_34;
    }
    DXGDEVICE::SetDisplayedPrimary(this, v11, a2, 0, 1u);
    memset(v71, 0, 0x104uLL);
    v52[0] = 0;
    v40 = v56;
    v71[8] = 1 << v11;
    v41 = DmmSetTimingsOnAdapter(v10, v56, 0LL, 2LL, v71, v52, 0LL, 0LL);
    v20 = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry5(2LL, v41, *(_QWORD *)(v10 + 2920), (unsigned int)v11, a2, this);
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
      DmmHandleSetTimingsResult((DXGADAPTER *)v10, (struct _DMM_SET_TIMING_RESULT *)v52, v64);
      if ( ((1 << v11) & v71[21]) != 0 )
        LODWORD(v20) = v71[v11 + 22];
      if ( v65 && (*((_DWORD *)v65 + 106) & 4) != 0 )
        goto LABEL_92;
      Global = DXGGLOBAL::GetGlobal();
      do
        v43 = _InterlockedIncrement((volatile signed __int32 *)Global + 344);
      while ( !v43 );
      ADAPTER_DISPLAY::SetDisplayId(
        *(ADAPTER_DISPLAY **)(v10 + 2920),
        (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
        v43);
      LOBYTE(v44) = 1;
      DxgkNotifyDisplayChange(v44);
    }
    v40 = v56;
LABEL_92:
    if ( v55[0] )
      v57(v58, v40);
    goto LABEL_94;
  }
  if ( DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v68, &v54.RefreshRate, 0)
    || DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
         (const struct _D3DDDI_RATIONAL *)&v69.m256i_u64[3],
         &v54.RefreshRate,
         v25) )
  {
    v54.RefreshRate = v68[0];
    goto LABEL_38;
  }
  WdLogSingleEntry5(
    3LL,
    a2,
    v54.RefreshRate.Numerator,
    v54.RefreshRate.Denominator,
    v68[0].Numerator,
    v68[0].Denominator);
LABEL_33:
  LODWORD(v20) = -1071775739;
LABEL_34:
  v9 = a3;
LABEL_35:
  v67[1] = (enum _D3DDDIFORMAT)v54.Height;
  v67[0] = (enum _D3DDDIFORMAT)v54.Width;
  v67[2] = v54.Format;
  if ( v54.RefreshRate.Denominator )
    v67[3] = DmmMapVSyncFromRationalToInteger(&v54.RefreshRate, v9, 0LL);
  else
    v67[3] = D3DDDIFMT_UNKNOWN;
  v68[0] = v54.RefreshRate;
  v68[1].Denominator = v60;
  v45 = *((_QWORD *)a2 + 6);
  v68[1].Numerator = v9;
  v46 = DmmCacheDisplayModeChangeRequest(v10, (*(_DWORD *)(v45 + 4) >> 6) & 0xF, v67);
  if ( v46 < 0 )
  {
    v47 = v46;
    WdLogSingleEntry1(2LL, v46);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmCacheDisplayModeChangeRequest (status = 0x%I64x)",
      v47,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v62, 8);
  return (unsigned int)v20;
}
