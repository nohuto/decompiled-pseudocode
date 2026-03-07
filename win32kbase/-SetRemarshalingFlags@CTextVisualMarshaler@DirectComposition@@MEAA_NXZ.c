char __fastcall DirectComposition::CTextVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 448);
  *((_QWORD *)this + 47) = 0LL;
  if ( *((_QWORD *)this + 49) )
    *v2 |= 2u;
  *((_QWORD *)this + 50) = 0LL;
  if ( *((_QWORD *)this + 52) )
    *v2 |= 4u;
  *((_QWORD *)this + 53) = 0LL;
  if ( *((_QWORD *)this + 55) )
    *v2 |= 8u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*v2 & 0xE) != 0 )
    return 1;
  return v1;
}
