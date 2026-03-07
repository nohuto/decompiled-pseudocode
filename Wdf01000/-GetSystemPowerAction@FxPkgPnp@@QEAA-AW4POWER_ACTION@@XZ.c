__int64 __fastcall FxPkgPnp::GetSystemPowerAction(FxPkgPnp *this, unsigned int a2)
{
  bool IsVersionGreaterThanOrEqualTo; // al
  __int64 v3; // r9
  unsigned int v4; // r8d
  _DWORD *v5; // rdx

  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, a2, 0x1Fu);
  v4 = 0;
  if ( !IsVersionGreaterThanOrEqualTo )
    return *(unsigned __int8 *)(v3 + 1137);
  v5 = *(_DWORD **)(v3 + 888);
  if ( !v5 )
    return *(unsigned __int8 *)(v3 + 1137);
  if ( v5[186] == 2 )
  {
    return (unsigned int)v5[188];
  }
  else if ( v5[186] == 3 )
  {
    return (unsigned int)v5[189];
  }
  return v4;
}
