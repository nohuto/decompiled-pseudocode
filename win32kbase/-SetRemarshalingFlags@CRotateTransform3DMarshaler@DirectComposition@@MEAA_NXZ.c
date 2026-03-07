char __fastcall DirectComposition::CRotateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // al
  char v3; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 18) != 0.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 20) != 0.0 )
    *v1 |= 0x200u;
  if ( *((float *)this + 21) != 1.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 22) != 0.0 )
    *v1 |= 0x800u;
  if ( *((float *)this + 23) != 0.0 )
    *v1 |= 0x1000u;
  if ( *((float *)this + 24) != 0.0 )
    *v1 |= 0x2000u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*v1 & 0x3F80) != 0 )
    return 1;
  return v3;
}
