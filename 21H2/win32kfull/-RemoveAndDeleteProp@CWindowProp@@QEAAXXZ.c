/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00EF784
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00ECE64 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00ED174 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 *     RemoveVisRgnTracker @ 0x1C00EF3EC (RemoveVisRgnTracker.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2F58 (UserDetachQueueFromInputWindow.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C010AE40 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
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
  v4 = v2 == (unsigned __int16)word_1C033AF44;
  v5 = *((_QWORD *)this + 1);
  v6 = *(_QWORD *)(v5 + 144);
  if ( v4 )
    *(_QWORD *)(*(_QWORD *)(v5 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v6, v3, 1LL);
  v7 = *(void (__fastcall ***)(CWindowProp *))this;
  *((_QWORD *)this + 1) = 0LL;
  (*v7)(this);
}
