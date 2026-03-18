/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0059638
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C0058D0C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C005911C (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C005950C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C00595E8 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
