/*
 * XREFs of ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x1804B2630
 * Callers:
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x1804B2590 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1804B31A0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1804B45E0 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x1804B23BC (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1804B4F00 (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopGestureHandler::Cleanup(VirtualDesktopGestureHandler *this)
{
  VirtualDesktopGestureContext *v2; // rcx
  VirtualDesktopGestureContext *v3; // rcx

  v2 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    VirtualDesktopGestureContext::Uninitialize(v2);
    v3 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v3 )
      VirtualDesktopGestureContext::`scalar deleting destructor'(v3);
  }
}
