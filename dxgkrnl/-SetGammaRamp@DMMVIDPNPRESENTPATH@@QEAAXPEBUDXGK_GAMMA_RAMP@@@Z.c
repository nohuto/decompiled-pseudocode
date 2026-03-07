void __fastcall DMMVIDPNPRESENTPATH::SetGammaRamp(DMMVIDPNPRESENTPATH *this, const struct DXGK_GAMMA_RAMP *a2)
{
  ReferenceCounted *v4; // rcx

  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v4 = (ReferenceCounted *)*((_QWORD *)this + 23);
  if ( v4 )
    ReferenceCounted::Release(v4);
  *((_QWORD *)this + 23) = a2;
}
