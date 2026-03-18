/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00E28B4
 * Callers:
 *     ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C000E9C8 (-HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00A9568 (UserDetachQueueFromInputWindow.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E2830 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0157404 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01574BA (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CInputQueueProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
