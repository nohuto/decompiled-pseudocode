/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C003823C
 * Callers:
 *     CreateVisRgnTracker @ 0x1C0036014 (CreateVisRgnTracker.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C00ECE64 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C010AE40 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0123424 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C015EBB8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, unsigned __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  CWindowProp *v6; // rax
  CWindowProp *v7; // rdx
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = *(_QWORD *)(a2 + 144);
  if ( v4 == word_1C033AF44 )
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 312LL) = 0LL;
  v6 = (CWindowProp *)RealInternalRemoveProp(v5, v4, 1LL);
  v7 = v6;
  if ( v6 && v6 != this )
    (**(void (__fastcall ***)(CWindowProp *))v6)(v6);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v7);
  result = InternalSetProp(a2, v8, this, 32769LL);
  *((_QWORD *)this + 1) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
