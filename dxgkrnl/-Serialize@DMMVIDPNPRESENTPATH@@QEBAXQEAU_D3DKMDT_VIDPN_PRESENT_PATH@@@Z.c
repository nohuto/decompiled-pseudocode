void __fastcall DMMVIDPNPRESENTPATH::Serialize(DMMVIDPNPRESENTPATH *this, struct _D3DKMDT_VIDPN_PRESENT_PATH *const a2)
{
  UINT MacroVisionTriggerBits; // esi
  __int64 v5; // rax
  __int128 v6; // xmm0
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v7; // xmm1_8

  MacroVisionTriggerBits = 0;
  a2->VidPnSourceId = *(_DWORD *)(*((_QWORD *)this + 11) + 24LL);
  a2->VidPnTargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  a2->ImportanceOrdinal = *((_DWORD *)this + 26);
  a2->ContentTransformation.Scaling = *((_DWORD *)this + 28);
  a2->ContentTransformation.Rotation = *((_DWORD *)this + 29);
  a2->VisibleFromActiveTLOffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 16);
  a2->VisibleFromActiveBROffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 17);
  a2->VidPnTargetColorBasis = *((_DWORD *)this + 36);
  a2->VidPnTargetColorCoeffDynamicRanges = *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148);
  a2->Content = *((_DWORD *)this + 41);
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
  {
    v6 = *(_OWORD *)(v5 + 16);
    v7 = *(D3DDDI_GAMMA_RAMP_RGB256x3x16 **)(v5 + 32);
  }
  else
  {
    v6 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v7 = 0LL;
  }
  *(_OWORD *)&a2->GammaRamp.Type = v6;
  a2->GammaRamp.Data.pRgb256x3x16 = v7;
  a2->CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  a2->CopyProtection.CopyProtectionType = *((_DWORD *)this + 43);
  DMMVIDPNPRESENTPATH::GetScalingSupport(this, &a2->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::GetRotationSupport(this, &a2->ContentTransformation.RotationSupport);
  if ( *((_DWORD *)this + 43) == 2 )
    MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  a2->CopyProtection.APSTriggerBits = MacroVisionTriggerBits;
  memset(a2->CopyProtection.OEMCopyProtection, 0, sizeof(a2->CopyProtection.OEMCopyProtection));
}
