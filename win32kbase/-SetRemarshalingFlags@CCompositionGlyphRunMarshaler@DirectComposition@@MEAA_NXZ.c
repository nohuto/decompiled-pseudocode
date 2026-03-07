char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionGlyphRunMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) |= 0x300u;
  v2 = DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x300) != 0 )
    return 1;
  return v3;
}
