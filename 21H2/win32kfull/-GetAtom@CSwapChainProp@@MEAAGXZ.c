/*
 * XREFs of ?GetAtom@CSwapChainProp@@MEAAGXZ @ 0x1C0137B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
}
