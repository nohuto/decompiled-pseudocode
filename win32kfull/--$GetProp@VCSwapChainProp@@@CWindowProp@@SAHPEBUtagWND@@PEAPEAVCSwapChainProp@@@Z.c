/*
 * XREFs of ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C007D6D4
 * Callers:
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021EEC0 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C021EFC8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CSwapChainProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1u);
  *a2 = Prop;
  return Prop != 0;
}
