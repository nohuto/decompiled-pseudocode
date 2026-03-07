bool __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CAtlasedRectsGroupMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x20u;
  *((_QWORD *)this + 8) = 0LL;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x40u;
  return (*v1 & 0x60) != 0;
}
