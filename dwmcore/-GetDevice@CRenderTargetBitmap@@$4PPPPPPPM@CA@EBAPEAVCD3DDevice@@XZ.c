/*
 * XREFs of ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ @ 0x18011FB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRenderTargetBitmap::GetDevice(__int64 a1)
{
  return CRenderTargetBitmap::GetDevice((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32));
}
