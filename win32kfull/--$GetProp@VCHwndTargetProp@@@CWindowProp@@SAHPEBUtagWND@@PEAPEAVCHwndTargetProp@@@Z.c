/*
 * XREFs of ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C007DC28
 * Callers:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C007D2FC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C007D70C (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C007DAFC (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C007DBD8 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CHwndTargetProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CHwndTargetProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
