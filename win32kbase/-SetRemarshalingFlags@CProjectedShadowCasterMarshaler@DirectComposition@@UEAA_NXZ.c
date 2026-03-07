char __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetRemarshalingFlags(
        DirectComposition::CProjectedShadowCasterMarshaler *this)
{
  _DWORD *v2; // rdx

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x80u;
  if ( *((_QWORD *)this + 10) )
    *v2 |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x100u;
  if ( *((_QWORD *)this + 12) )
    *v2 |= 0x400u;
  return 1;
}
