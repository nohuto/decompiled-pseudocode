/*
 * XREFs of ?IsEmptyDrawing@CShapeTree@@UEBA_NXZ @ 0x1800E7420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeTree::IsEmptyDrawing(CShapeTree *this)
{
  return !*((_BYTE *)this + 96) && *((_BYTE *)this + 97) == 0;
}
