/*
 * XREFs of ?GetTransformParent@CVisual@@UEBAPEAV1@XZ @ 0x180043A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this)
{
  return (struct CVisual *)*((_QWORD *)this + 3);
}
