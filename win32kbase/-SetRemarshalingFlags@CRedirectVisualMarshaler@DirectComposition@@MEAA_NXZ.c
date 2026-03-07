char __fastcall DirectComposition::CRedirectVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  char v1; // bl
  char v2; // di

  v1 = 0;
  v2 = 0;
  if ( *((_QWORD *)this + 47) )
  {
    *((_DWORD *)this + 96) |= 1u;
    v2 = 1;
  }
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || v2 )
    return 1;
  return v1;
}
