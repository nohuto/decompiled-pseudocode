char __fastcall CSpriteVisual::HasAntialiasedContent(CSpriteVisual *this)
{
  bool HasAntialiasedContent; // al
  char v3; // dl

  HasAntialiasedContent = CVisual::HasAntialiasedContent(this);
  v3 = 0;
  if ( HasAntialiasedContent || (**((_DWORD **)this + 29) & 0x10000) != 0 )
    return 1;
  return v3;
}
