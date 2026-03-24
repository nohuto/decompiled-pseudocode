/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E63DC
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00E2B70 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001EA8 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0002A1C (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003610 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000B734 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001AFFC (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E0770 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00E59B4 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00E5A90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E6FD8 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC1CC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkQueryDmmInterface @ 0x1C00EC7C8 (DxgkQueryDmmInterface.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C012C6F0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C0168D20 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025EC9C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 *     DxgkNotifyDisplayChange @ 0x1C02A06B4 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v15; // xmm1_8
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 FunctionalVidPnWithEnabledVidPnSource; // rdi
  __int64 v24; // rcx
  enum _D3DDDIFORMAT Format; // eax
  char v26; // di
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v31; // rbx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  unsigned int updated; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // edx
  int DmmInterface; // eax
  struct _DXGDMM_INTERFACE *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v69; // rcx
  struct DXGGLOBAL *Global; // rax
  int v71; // r8d
  __int64 v72; // rcx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  int v76; // [rsp+20h] [rbp-E0h]
  _BYTE v77[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+54h] [rbp-ACh]
  _DXGKARG_DESCRIBEALLOCATION v79; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v80[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+98h] [rbp-68h]
  void (__fastcall *v82)(__int64, __int64); // [rsp+A0h] [rbp-60h]
  __int64 v83; // [rsp+A8h] [rbp-58h]
  int v84; // [rsp+B0h] [rbp-50h]
  enum _D3DDDI_ROTATION v85; // [rsp+B8h] [rbp-48h]
  struct _DXGDMM_INTERFACE *v86; // [rsp+C0h] [rbp-40h]
  __int64 v87; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v90; // [rsp+E0h] [rbp-20h]
  _QWORD v91[2]; // [rsp+E8h] [rbp-18h] BYREF
  enum _D3DDDIFORMAT v92[4]; // [rsp+F8h] [rbp-8h] BYREF
  _D3DDDI_RATIONAL v93[2]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v94[24]; // [rsp+118h] [rbp+18h]
  _DWORD v95[64]; // [rsp+130h] [rbp+30h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+188h]

  v90 = a7;
  v88 = retaddr;
  v9 = a3;
  v85 = a4;
  LODWORD(v78) = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v88, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v47 + 24) = 6684LL;
    WdLogEvent5_WdAssertion(v47);
  }
  v12 = *((_QWORD *)this + 231);
  v13 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v12 || !*(_QWORD *)(v12 + 2696) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v48 + 24) = 6692LL;
    WdLogEvent5_WdAssertion(v48);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2696), v13);
  *(_OWORD *)v92 = *(_OWORD *)DisplayModeInfo;
  *(_OWORD *)&v93[0].Numerator = *((_OWORD *)DisplayModeInfo + 1);
  *(_OWORD *)v94 = *((_OWORD *)DisplayModeInfo + 2);
  v15 = *((_QWORD *)DisplayModeInfo + 6);
  v79.Rotation = -1;
  v16 = *((_QWORD *)a2 + 6);
  *(_QWORD *)&v94[16] = v15;
  v79.Flags.Value = 1;
  memset(&v79.Width, 0, 32);
  v17 = *(void **)(v16 + 16);
  v18 = *((_QWORD *)this + 2);
  v79.hAllocation = v17;
  v19 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2704LL), &v79);
  FunctionalVidPnWithEnabledVidPnSource = v19;
  if ( v19 < 0 )
    goto LABEL_42;
  if ( v79.Width != v92[0] || v79.Height != v92[1] )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v74[3] = a2;
    v74[4] = v79.Width;
    v74[5] = v79.Height;
    v74[6] = (unsigned int)v92[0];
    v74[7] = (unsigned int)v92[1];
    WdLogEvent5_WdWarning(v74);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_31;
  }
  if ( v79.Rotation != -1 && v79.Rotation != v93[1].Denominator )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v50[3] = a2;
    v50[4] = v79.Rotation;
    v50[5] = (int)v93[1].Denominator;
LABEL_46:
    WdLogEvent5_WdWarning(v50);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071775739;
    goto LABEL_33;
  }
  v24 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v24) = (*(_DWORD *)&v94[8] >> 4) ^ v24;
  if ( (v24 & 1) == 0 && v79.PrivateDriverFormatAttribute != *(_DWORD *)&v94[20] )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v20);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1071774891;
    v51[3] = a2;
    v51[4] = v79.PrivateDriverFormatAttribute;
    v51[5] = *(unsigned int *)&v94[20];
    *a6 = v79.PrivateDriverFormatAttribute;
    goto LABEL_33;
  }
  *(D3DDDI_MULTISAMPLINGMETHOD *)&v94[12] = v79.MultisampleMethod;
  Format = v79.Format;
  v92[2] = v79.Format;
  if ( !*(_QWORD *)(v12 + 2704) )
  {
    if ( v79.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    v92[2] = Format;
  }
  if ( !v79.RefreshRate.Denominator )
  {
    v52 = WdLogNewEntry5_WdError(21LL, v20);
    *(_QWORD *)(v52 + 24) = v79.RefreshRate.Numerator;
    WdLogEvent5_WdError(v52);
    LODWORD(FunctionalVidPnWithEnabledVidPnSource) = -1073741811;
    goto LABEL_33;
  }
  if ( v79.RefreshRate.Numerator == 64
    && v79.RefreshRate.Denominator == 1
    && v93[0].Numerator == -2
    && v93[0].Denominator == -2 )
  {
    v79.RefreshRate.Numerator = -2;
    v79.RefreshRate.Denominator = -2;
  }
  v26 = *(_BYTE *)&a5 & 1;
  if ( (*(_BYTE *)&a5 & 1) != 0 && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(v93, &v79.RefreshRate, 0) )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
    v50[3] = a2;
    v50[4] = v79.RefreshRate.Numerator;
    v50[5] = v79.RefreshRate.Denominator;
    v50[6] = v93[0].Numerator;
    v50[7] = v93[0].Denominator;
    goto LABEL_46;
  }
  v93[0] = v79.RefreshRate;
  v92[3] = DmmMapVSyncFromRationalToInteger(&v79.RefreshRate, v9, 0LL);
  v30 = *((_QWORD *)a2 + 6);
  v93[1].Numerator = v9;
  *(_DWORD *)&v94[8] ^= (v94[8] ^ (unsigned __int8)BYTE1(*(_DWORD *)(v30 + 4))) & 0x10;
  v31 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v12 + 2696), v13);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(DXGADAPTER ***)(v12 + 2696),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF) )
  {
    if ( v26
      || *((_DWORD *)v31 + 4) == v93[0].Numerator
      && *((_DWORD *)v31 + 5) == v93[0].Denominator
      && *((_DWORD *)v31 + 6) == v93[1].Numerator
      && *((_DWORD *)v31 + 7) == v93[1].Denominator
      && *((_DWORD *)v31 + 8) == *(_DWORD *)v94
      && (v53 = *((_DWORD *)v31 + 9), (((unsigned __int8)v53 ^ v94[4]) & 1) == 0)
      && (((unsigned __int8)v53 ^ v94[4]) & 2) == 0
      && ((v94[8] ^ *((_BYTE *)v31 + 40)) & 0xF) == 0 )
    {
      if ( *(_DWORD *)v31 == v92[0] && *((_DWORD *)v31 + 1) == v92[1] )
      {
        if ( (v32 = *((_DWORD *)v31 + 2), v32 == v92[2])
          || v32 == 21 && v92[2] == D3DDDIFMT_X8R8G8B8
          || v32 == 22 && v92[2] == D3DDDIFMT_A8R8G8B8 )
        {
          if ( ((v94[8] ^ *((_BYTE *)v31 + 40)) & 0x10) == 0
            && ((v94[8] ^ (unsigned __int8)*((_DWORD *)v31 + 10)) & 0x20) == 0
            && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v12, v13, v92[2])
            && (v26 || *(_QWORD *)((char *)v31 + 44) == *(_QWORD *)&v94[12]) )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
            v33 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v12, (unsigned int)v13, 0);
            v36 = v33;
            if ( v33 < 0 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
              v60[3] = *(_QWORD *)(v12 + 2696);
              v60[4] = (unsigned int)v13;
              v60[5] = v36;
              WdLogEvent5_WdError(v60);
            }
            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                        *(PERESOURCE ***)(v12 + 2696),
                        (PERESOURCE **)this,
                        v13,
                        *((struct DXGADAPTERALLOCATION **)a2 + 6));
            v78 = 0LL;
            LODWORD(FunctionalVidPnWithEnabledVidPnSource) = updated;
            DxgkLogCodePointPacket(0x3Cu, updated, *(_DWORD *)(v12 + 316), v13, 0LL);
LABEL_29:
            if ( (int)FunctionalVidPnWithEnabledVidPnSource < 0 )
              goto LABEL_33;
            *((_DWORD *)this + v13 + 302) |= 0x200u;
            goto LABEL_31;
          }
        }
      }
    }
  }
  v86 = 0LL;
  DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)v12);
  FunctionalVidPnWithEnabledVidPnSource = DmmInterface;
  if ( DmmInterface < 0 )
  {
LABEL_42:
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v49[3] = FunctionalVidPnWithEnabledVidPnSource;
    v49[4] = this;
    v49[5] = *((unsigned int *)a2 + 4);
    v49[6] = a2;
    v49[7] = (unsigned int)v13;
    WdLogEvent5_WdError(v49);
    goto LABEL_31;
  }
  v55 = v86;
  v89 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0;
  v80[0] = 0;
  v87 = 0LL;
  FunctionalVidPnWithEnabledVidPnSource = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
                                                 v86,
                                                 (void *)v12,
                                                 v13,
                                                 v76,
                                                 (struct _D3DKMT_DISPLAYMODE *)v92,
                                                 (__int64)&v87,
                                                 (__int64)&v89);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v80,
    v87,
    *((_QWORD *)v55 + 8),
    v12);
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774925 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v59 = (unsigned int)v13;
    v58[3] = -1071774925LL;
LABEL_72:
    v58[4] = v59;
    v58[5] = (unsigned int)v92[0];
    v58[6] = (unsigned int)v92[1];
    v58[7] = v92[2];
    v61 = v58;
    goto LABEL_74;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource == -1071774886 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v58[3] = (unsigned int)v13;
    v59 = *(_QWORD *)(v12 + 2696);
    goto LABEL_72;
  }
  if ( (_DWORD)FunctionalVidPnWithEnabledVidPnSource != -1071774970 )
  {
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, (unsigned int)v13, a2, 0, 1u);
      memset(v95, 0, sizeof(v95));
      v64 = v81;
      v77[0] = 0;
      v95[8] = 1 << v13;
      v65 = DmmSetTimingsOnAdapter(v12, v81, 0LL, 2LL, v95, v77, 0LL, 0LL);
      FunctionalVidPnWithEnabledVidPnSource = v65;
      if ( v65 < 0 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
        v73[3] = FunctionalVidPnWithEnabledVidPnSource;
        v73[4] = *(_QWORD *)(v12 + 2696);
        v73[5] = (unsigned int)v13;
        v73[6] = a2;
        v73[7] = this;
        WdLogEvent5_WdError(v73);
      }
      else
      {
        DmmHandleSetTimingsResult((DXGADAPTER *)v12, (struct _DMM_SET_TIMING_RESULT *)v77, v90);
        if ( ((1 << v13) & v95[20]) != 0 )
          LODWORD(FunctionalVidPnWithEnabledVidPnSource) = v95[v13 + 21];
        Current = DXGPROCESS::GetCurrent();
        if ( !Current || !*((_BYTE *)Current + 346) )
        {
          Global = DXGGLOBAL::GetGlobal(v69, v38);
          do
            v71 = _InterlockedIncrement((volatile signed __int32 *)Global + 316);
          while ( !v71 );
          ADAPTER_DISPLAY::SetDisplayId(
            *(ADAPTER_DISPLAY **)(v12 + 2696),
            (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
            v71);
          LOBYTE(v72) = 1;
          DxgkNotifyDisplayChange(v72);
          v64 = v81;
        }
      }
      if ( v80[0] )
        v82(v83, v64);
      v9 = (int)v78;
      goto LABEL_29;
    }
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
    v63[4] = (unsigned int)v13;
    v63[3] = FunctionalVidPnWithEnabledVidPnSource;
    v63[5] = (unsigned int)v92[0];
    v63[6] = (unsigned int)v92[1];
    v63[7] = v92[2];
    WdLogEvent5_WdError(v63);
    if ( v80[0] )
      v82(v83, v81);
LABEL_31:
    if ( (int)FunctionalVidPnWithEnabledVidPnSource >= 0 )
    {
      v91[1] = 0LL;
      v91[0] = 1LL;
      DxgkStatusChangeNotify((int *)v91, v38, v39);
    }
    goto LABEL_33;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v62[3] = (unsigned int)v92[0];
  v62[4] = (unsigned int)v92[1];
  v62[5] = v92[2];
  v62[6] = v93[0].Numerator / v93[0].Denominator;
  v62[7] = (unsigned int)v13;
  v61 = v62;
LABEL_74:
  WdLogEvent5_WdDmmEvent(v61);
  if ( v80[0] )
    v82(v83, v81);
LABEL_33:
  v92[1] = (enum _D3DDDIFORMAT)v79.Height;
  v92[0] = (enum _D3DDDIFORMAT)v79.Width;
  v92[2] = v79.Format;
  if ( v79.RefreshRate.Denominator )
    v92[3] = DmmMapVSyncFromRationalToInteger(&v79.RefreshRate, v9, 0LL);
  else
    v92[3] = D3DDDIFMT_UNKNOWN;
  v93[0] = v79.RefreshRate;
  v93[1].Denominator = v85;
  v41 = *((_QWORD *)a2 + 6);
  v93[1].Numerator = v9;
  v42 = DmmCacheDisplayModeChangeRequest(
          (DXGADAPTER *)v12,
          (*(_DWORD *)(v41 + 4) >> 6) & 0xF,
          (__int64)v92,
          v40,
          FunctionalVidPnWithEnabledVidPnSource);
  v45 = v42;
  if ( v42 < 0 )
  {
    v75 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v75 + 24) = v45;
    WdLogEvent5_WdError(v75);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v88, 8);
  return (unsigned int)FunctionalVidPnWithEnabledVidPnSource;
}
