char __fastcall DirectComposition::CVisualTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualTargetMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 8) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return result;
}
