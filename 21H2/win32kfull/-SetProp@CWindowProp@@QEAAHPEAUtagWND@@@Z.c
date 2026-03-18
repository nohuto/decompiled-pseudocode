/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090
 * Callers:
 *     ?CreateMarginsProp@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0082D50 (-CreateMarginsProp@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C008300C (CreateVisRgnTracker.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C00B0D2C (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C00B507C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00FF424 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C014F1C8 (UserSetWindowedSwapChain.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0238BAC (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, __int64 a2)
{
  unsigned __int16 v4; // ax
  CWindowProp *v5; // rax
  __int64 v6; // rdx
  CWindowProp *v7; // r8
  unsigned __int16 v8; // ax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = (CWindowProp *)InternalRemoveProp(a2, v4, 1u);
  v7 = v5;
  if ( v5 && v5 != this )
    (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *, __int64, CWindowProp *))(*(_QWORD *)this + 8LL))(this, v6, v7);
  result = InternalSetProp(a2, v8, this, 32769LL);
  *((_QWORD *)this + 2) = a2 & -(__int64)((_DWORD)result != 0);
  return result;
}
