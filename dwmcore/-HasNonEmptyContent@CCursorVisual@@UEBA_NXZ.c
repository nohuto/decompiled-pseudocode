/*
 * XREFs of ?HasNonEmptyContent@CCursorVisual@@UEBA_NXZ @ 0x180225560
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800C2CC0 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x1802255C4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

char __fastcall CCursorVisual::HasNonEmptyContent(CCursorVisual *this)
{
  CVisual *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CCursorVisual::IsVisible(this) || CVisual::HasNonEmptyContent(v1) )
    return 1;
  return v2;
}
