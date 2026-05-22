/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180029518
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180028DD0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x180029490 (-DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180042660 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800878A0 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180087CC8 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800B6800 (-DeliverDeviceRemoval@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B6CE8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x1800FDBD8 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x1800FF320 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x180139560 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x180174D88 (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x180174EC4 (-DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x180175000 (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windo.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x18017513C (-DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@.c)
 *     ?StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z @ 0x18017622C (-StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 */

char __fastcall InputETW::IsVerboseEnabled(__int64 a1)
{
  __int64 v2; // rax
  char v3; // r8
  _DWORD *v4; // rcx

  v2 = wil::details::static_lazy<InputETW>::get(a1, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  v3 = 0;
  v4 = *(_DWORD **)(v2 + 8);
  if ( *v4 > 5u )
    return tlgKeywordOn((__int64)v4, a1);
  return v3;
}
