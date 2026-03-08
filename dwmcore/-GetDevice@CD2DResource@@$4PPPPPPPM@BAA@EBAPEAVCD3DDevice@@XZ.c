/*
 * XREFs of ?GetDevice@CD2DResource@@$4PPPPPPPM@BAA@EBAPEAVCD3DDevice@@XZ @ 0x18011F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD2DResource::GetDevice(__int64 a1)
{
  return CD2DResource::GetDevice((CD2DResource *)(a1 - *(int *)(a1 - 4) - 256));
}
