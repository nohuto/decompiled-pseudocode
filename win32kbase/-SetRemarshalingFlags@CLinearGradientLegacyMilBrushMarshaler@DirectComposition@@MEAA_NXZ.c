char __fastcall DirectComposition::CLinearGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientLegacyMilBrushMarshaler *this)
{
  char v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) |= 0x6000u;
  v2 = DirectComposition::CGradientLegacyMilBrushMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x6000) != 0 )
    return 1;
  return v3;
}
