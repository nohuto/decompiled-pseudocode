/*
 * XREFs of ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143F60
 * Callers:
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00EC44C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143EE0 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015095C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DF6D0 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C000B794 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH@@@Z @ 0x1C0144118 (-DdiUpdateActiveVidPnPresentPath@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C014429C (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01442D8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(
        DMMVIDPNPRESENTPATH *this,
        D3DDDI_GAMMA_RAMP_RGB256x3x16 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  DXGADAPTER **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *v10; // rdx
  __int64 v11; // rcx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v12; // xmm1_8
  _D3DKMDT_VIDPN_PRESENT_PATH *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // rax
  int updated; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _D3DKMDT_VIDPN_PRESENT_PATH v36; // [rsp+20h] [rbp-308h] BYREF
  _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH v37; // [rsp+190h] [rbp-198h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v32);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(DXGADAPTER ***)(v6 + 8);
  if ( !v7 )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v33);
    v7 = *(DXGADAPTER ***)(v6 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7[2]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a2 )
    return 0LL;
  if ( !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  memset(&v37.VidPnPresentPathInfo.VidPnTargetId, 0, 0x164uLL);
  memset(&v36, 0, sizeof(v36));
  DMMVIDPNPRESENTPATH::Serialize(this, &v36);
  v10 = &v37;
  v11 = 2LL;
  v12 = a2[4];
  v13 = &v36;
  *(_OWORD *)&v36.GammaRamp.Type = *((_OWORD *)a2 + 1);
  v36.GammaRamp.Data.pRgb256x3x16 = v12;
  do
  {
    v14 = *(_OWORD *)&v13->ContentTransformation.ScalingSupport;
    *(_OWORD *)&v10->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v13->VidPnSourceId;
    v15 = *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy;
    *(_OWORD *)&v10->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v14;
    VidPnTargetColorCoeffDynamicRanges = v13->VidPnTargetColorCoeffDynamicRanges;
    *(_OWORD *)&v10->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v15;
    v17 = *(_OWORD *)&v13->Content;
    v10->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
    v18 = *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4];
    *(_OWORD *)&v10->VidPnPresentPathInfo.Content = v17;
    v19 = *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[20];
    *(_OWORD *)&v10->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v18;
    v20 = *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[36];
    v13 = (_D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v13 + 128);
    *(_OWORD *)&v10->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v19;
    v10 = (_DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH *)((char *)v10 + 128);
    *(_OWORD *)&v10[-1].VidPnPresentPathInfo.GammaRamp.DataSize = v20;
    --v11;
  }
  while ( v11 );
  v21 = *(_OWORD *)&v13->ContentTransformation.ScalingSupport;
  *(_OWORD *)&v10->VidPnPresentPathInfo.VidPnSourceId = *(_OWORD *)&v13->VidPnSourceId;
  v22 = *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy;
  *(_OWORD *)&v10->VidPnPresentPathInfo.ContentTransformation.ScalingSupport = v21;
  v23 = v13->VidPnTargetColorCoeffDynamicRanges;
  *(_OWORD *)&v10->VidPnPresentPathInfo.VisibleFromActiveTLOffset.cy = v22;
  v24 = *(_OWORD *)&v13->Content;
  v10->VidPnPresentPathInfo.VidPnTargetColorCoeffDynamicRanges = v23;
  v25 = *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4];
  v26 = *(_QWORD *)&v13->CopyProtection.OEMCopyProtection[20];
  *(_OWORD *)&v10->VidPnPresentPathInfo.Content = v24;
  *(_OWORD *)&v10->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[4] = v25;
  *(_QWORD *)&v10->VidPnPresentPathInfo.CopyProtection.OEMCopyProtection[20] = v26;
  v37.VidPnPresentPathInfo.ContentTransformation.Rotation = DMMVIDPNPRESENTPATH::GetContentRotationHw(this);
  updated = ADAPTER_DISPLAY::DdiUpdateActiveVidPnPresentPath((ADAPTER_DISPLAY *)v7, &v37);
  v30 = updated;
  if ( updated >= 0 )
    return 0LL;
  v35 = WdLogNewEntry5_WdError(v29, v28);
  *(_QWORD *)(v35 + 24) = this;
  *(_QWORD *)(v35 + 32) = v30;
  WdLogEvent5_WdError(v35);
  return (unsigned int)v30;
}
