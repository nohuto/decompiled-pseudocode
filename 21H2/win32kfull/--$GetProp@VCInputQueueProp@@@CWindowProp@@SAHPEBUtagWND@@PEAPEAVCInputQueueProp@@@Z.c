/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00FF5E0
 * Callers:
 *     ?HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z @ 0x1C0002554 (-HasFallbackInteractionSink@@YAHPEBUtagWND@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010E3C8 (UserDetachQueueFromInputWindow.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C016E15E (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CInputQueueProp::s_atom, 1u);
  *a2 = Prop;
  return Prop != 0;
}
