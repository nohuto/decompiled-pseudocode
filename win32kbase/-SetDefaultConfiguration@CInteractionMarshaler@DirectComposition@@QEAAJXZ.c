__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 332);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 332) = v1 & 0x3E | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
