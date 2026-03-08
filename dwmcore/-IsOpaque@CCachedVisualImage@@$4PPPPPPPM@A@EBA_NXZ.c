/*
 * XREFs of ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801188B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOpaque(__int64 a1)
{
  return CCachedVisualImage::IsOpaque((CCachedVisualImage *)(a1 - *(int *)(a1 - 4)));
}
