char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicExclusiveViewMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) | 0x20;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 12) )
  {
    v2 |= 0x40u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_QWORD *)this + 10) )
  {
    v2 |= 0x80u;
    *((_DWORD *)this + 4) = v2;
  }
  if ( *((_DWORD *)this + 14) || (v2 & 0xC0) != 0 )
    return 1;
  return v1;
}
