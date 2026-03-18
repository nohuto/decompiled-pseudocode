/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1C00B36BC (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 *     RemoveVisRgnTracker @ 0x1C00B3BEC (RemoveVisRgnTracker.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C00B507C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C010E3C8 (UserDetachQueueFromInputWindow.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  void (__fastcall **v3)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  InternalRemoveProp(*((_QWORD *)this + 2), v2, 1u);
  v3 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 2) = 0LL;
  (*v3)(this);
}
