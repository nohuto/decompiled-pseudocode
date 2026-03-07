bool __fastcall DirectComposition::CVisualGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualGroupMarshaler *this)
{
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
