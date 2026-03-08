/*
 * XREFs of ?HasContent@CVisual@@UEBA_NXZ @ 0x1800D7330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 32) != 0LL;
}
