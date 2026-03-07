bool __fastcall DirectComposition::CContainerShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CContainerShapeMarshaler *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    result = 1;
  }
  if ( *((_DWORD *)this + 18) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    result = 1;
    *((_DWORD *)this + 19) = 0;
  }
  return result;
}
