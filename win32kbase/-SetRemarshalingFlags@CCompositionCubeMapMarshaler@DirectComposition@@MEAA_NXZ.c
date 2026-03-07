bool __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 17) = 0;
  result = 1;
  *((_DWORD *)this + 4) |= 0x60u;
  return result;
}
