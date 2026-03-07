__int64 __fastcall DMMVIDPNPRESENTPATH::SetDriverGammaRamp(DMMVIDPNPRESENTPATH *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88LL);
  if ( !*(_QWORD *)(v5 + 8) )
    WdLogSingleEntry0(1LL);
  if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2264LL) )
    return 3221225659LL;
  if ( *((_BYTE *)this + 110) )
    return DMMVIDPNPRESENTPATH::SetTargetGamma(this, a2);
  return DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(this, a2);
}
