/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C03B5780
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C017A800 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017ABB4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C03AA694 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00034A0 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C02C8184 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C03B4DC4 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B5294 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(
        DMMVIDPNPRESENTPATH *this,
        const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  DXGADAPTER **v6; // rdi
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v7; // r8
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v8; // xmm1_8
  _D3DKMDT_VIDPN_PRESENT_PATH *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int64 v24; // r8
  int updated; // eax
  unsigned int v26; // edi
  _D3DKMDT_VIDPN_PRESENT_PATH v28; // [rsp+20h] [rbp-2F8h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v29; // [rsp+190h] [rbp-188h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88LL);
  if ( !*(_QWORD *)(v5 + 8) )
    WdLogSingleEntry0(1LL);
  v6 = *(DXGADAPTER ***)(v5 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    return 0LL;
  if ( !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  memset(&v29.VidPnPresentPathInfo.VidPnTargetId, 0, 0x164uLL);
  memset(&v28, 0, sizeof(v28));
  DMMVIDPNPRESENTPATH::Serialize(this, &v28);
  v7 = &v29;
  v8 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a2 + 4);
  v9 = &v28;
  *(_OWORD *)&v28.GammaRamp.Type = *((_OWORD *)a2 + 1);
  v28.GammaRamp.Data.pRgb256x3x16 = v8;
  v10 = 2LL;
  do
  {
    v11 = *(_OWORD *)&v9->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v7->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v9->VidPnSourceId;
    v12 = *(_OWORD *)&v9->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v7->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v11;
    VidPnTargetColorCoeffDynamicRanges = v9->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v7->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v12;
    v14 = *(_OWORD *)&v9->Content;
    v7->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v15 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v7->VidPnPresentPathInfo.Content = v14;
    v16 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v15;
    v17 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[36];
    v9 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v9 + 128);
    *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v16;
    v7 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v7 + 128);
    *(_OWORD *)&v7[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v17;
    --v10;
  }
  while ( v10 );
  v18 = *(_OWORD *)&v9->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v7->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v9->VidPnSourceId;
  v19 = *(_OWORD *)&v9->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v7->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v18;
  v20 = v9->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v7->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v19;
  v21 = *(_OWORD *)&v9->Content;
  v7->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v20;
  v22 = *(_OWORD *)&v9->CopyProtection.OEMCopyProtection[4];
  v23 = *(_QWORD *)&v9->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v7->VidPnPresentPathInfo.Content = v21;
  *(_OWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v22;
  *(_QWORD *)&v7->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v23;
  v29.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v6, &v29, v24);
  v26 = updated;
  if ( updated >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, updated);
  return v26;
}
