/*
 * XREFs of ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C0120334
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<WindowMargins::CWindowMarginProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, WindowMargins::CWindowMarginProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
