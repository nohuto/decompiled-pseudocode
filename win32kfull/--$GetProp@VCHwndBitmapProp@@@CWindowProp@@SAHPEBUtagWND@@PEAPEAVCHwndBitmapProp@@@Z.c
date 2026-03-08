/*
 * XREFs of ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C007DCD4
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0014674 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndBitmapProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndBitmapProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
