bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  unsigned int v1; // eax
  char v2; // dl
  bool result; // al

  v1 = *((_DWORD *)this + 4) & 0xFFFFFEDF;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 33) )
  {
    v1 |= 0x40u;
    *((_DWORD *)this + 4) = v1;
  }
  v2 = *((_BYTE *)this + 332);
  if ( (v2 & 0x3F) != 0 || *((_DWORD *)this + 82) != 4 )
  {
    v1 |= 0x200u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 39) )
  {
    v1 |= 0x400u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 40) )
  {
    v1 |= 0x2000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v2 & 0x40) == 0 || v2 >= 0 )
    *((_DWORD *)this + 4) = v1 | 0x800;
  *((_DWORD *)this + 17) |= 0x1Fu;
  result = 1;
  *((_DWORD *)this + 43) |= 0x1Fu;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 60) = 0;
  return result;
}
