/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B1CC8
 * Callers:
 *     _Microsoft::WRL::Details::Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x1804B1701 (_Microsoft--WRL--Details--Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwi.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$6 @ 0x1804B38D5 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$6.c)
 *     _CWRLImpWndProc_VirtualDesktopGestureWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x1804B547C (_CWRLImpWndProc_VirtualDesktopGestureWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
             result + 16,
             a2);
  }
  return result;
}
