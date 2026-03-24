/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00EF434
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00ECB14 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00ECE24 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     RemoveVisRgnTracker @ 0x1C00EF09C (RemoveVisRgnTracker.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2C08 (UserDetachQueueFromInputWindow.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C010AAC0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rcx
  void (__fastcall **v7)(CWindowProp *); // rax

  v2 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v3 = v2;
  v4 = v2 == (unsigned __int16)word_1C0339F44;
  v5 = *((_QWORD *)this + 1);
  v6 = *(_QWORD *)(v5 + 144);
  if ( v4 )
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v6, v3, 1LL);
  v7 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v7)(this);
}
