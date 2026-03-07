bool __fastcall DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionLightMarshaler *this)
{
  int v1; // edx
  bool result; // al
  int v3; // edx

  v1 = *((_DWORD *)this + 4);
  result = 1;
  *((_DWORD *)this + 17) = 0;
  v3 = v1 | 0x60;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 4) = v3;
  if ( *((_BYTE *)this + 88) != 1 )
    *((_DWORD *)this + 4) = v3 | 0x80;
  return result;
}
