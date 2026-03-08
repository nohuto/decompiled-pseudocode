/*
 * XREFs of ?GetAtom@CVisRgnTrackerProp@@MEAAGXZ @ 0x1C0125B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisRgnTrackerProp::GetAtom(CVisRgnTrackerProp *this)
{
  return LOWORD(WPP_MAIN_CB.AlignmentRequirement);
}
