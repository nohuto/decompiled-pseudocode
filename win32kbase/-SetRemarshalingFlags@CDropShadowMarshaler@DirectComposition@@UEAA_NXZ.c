char __fastcall DirectComposition::CDropShadowMarshaler::SetRemarshalingFlags(
        DirectComposition::CDropShadowMarshaler *this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf

  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4) | 0x180;
  if ( *((_QWORD *)this + 9) )
    v2 = *((_DWORD *)this + 4) | 0x380;
  if ( *((float *)this + 25) != 0.0 || *((float *)this + 26) != 0.0 || *((float *)this + 27) != 0.0 )
    v2 |= 0x400u;
  v3 = v2 | 0x800;
  v4 = *((_DWORD *)this + 29) == 0;
  *((_DWORD *)this + 4) = v3;
  if ( !v4 )
    *((_DWORD *)this + 4) = v3 | 0x1000;
  return 1;
}
