char __fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) |= 0x200u;
  v2 = DirectComposition::CLegacyMilBrushMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x200) != 0 )
    return 1;
  return v3;
}
