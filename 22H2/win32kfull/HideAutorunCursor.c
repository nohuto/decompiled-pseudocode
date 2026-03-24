/*
 * XREFs of HideAutorunCursor @ 0x1C01D3D70
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     zzzUpdateCursorImage @ 0x1C0080E90 (zzzUpdateCursorImage.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
