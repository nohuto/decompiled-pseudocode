/*
 * XREFs of ?GetAtom@CSwapChainProp@@MEAAGXZ @ 0x1C0125B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2);
}
