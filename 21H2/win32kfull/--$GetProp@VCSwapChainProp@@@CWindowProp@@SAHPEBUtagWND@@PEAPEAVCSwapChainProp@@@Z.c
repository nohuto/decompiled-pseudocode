/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00ECBC0
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x1C015EBB8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0161A40 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
  *a2 = Prop;
  return Prop != 0;
}
