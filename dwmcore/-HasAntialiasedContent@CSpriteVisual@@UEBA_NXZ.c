/*
 * XREFs of ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x1800D7350
 * Callers:
 *     <none>
 * Callees:
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1800D7390 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 */

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
