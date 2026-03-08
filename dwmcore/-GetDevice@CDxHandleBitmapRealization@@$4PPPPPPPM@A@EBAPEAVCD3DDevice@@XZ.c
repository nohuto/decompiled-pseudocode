/*
 * XREFs of ?GetDevice@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011E130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleBitmapRealization::GetDevice(__int64 a1)
{
  return CDxHandleBitmapRealization::GetDevice((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4)));
}
