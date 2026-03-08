/*
 * XREFs of ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x180255960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubVisualTree::Initialize(CLayerVisual **this)
{
  return CVisual::CalcRootBounds(this[8], (__int64)(this + 9));
}
