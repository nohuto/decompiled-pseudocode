/*
 * XREFs of ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C00596E4
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0015424 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndBitmapProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndBitmapProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
