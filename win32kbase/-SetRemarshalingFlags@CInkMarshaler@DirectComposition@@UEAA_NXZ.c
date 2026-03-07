bool __fastcall DirectComposition::CInkMarshaler::SetRemarshalingFlags(DirectComposition::CInkMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFF1F;
  result = 1;
  *((_DWORD *)this + 38) = 0;
  return result;
}
