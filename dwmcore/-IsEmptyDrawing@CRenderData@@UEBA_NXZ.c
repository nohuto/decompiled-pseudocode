/*
 * XREFs of ?IsEmptyDrawing@CRenderData@@UEBA_NXZ @ 0x180106B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderData::IsEmptyDrawing(CRenderData *this)
{
  return *((_BYTE *)this + 298);
}
