/*
 * XREFs of ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C024A298
 * Callers:
 *     ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x1C0160078 (-ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndBitmapProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndBitmapProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
