/*
 * XREFs of ??1?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@QEAA@XZ @ 0x1803E7D7C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop___&_IThumbnailDeviceSource___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopNotificationService___&__::_1_::dtor$2 @ 0x1803E7AD1 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualD_ea_1803E7AD1.c)
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$0 @ 0x1803E8B83 (_VirtualDesktop_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktop>::~ComPtr<VirtualDesktop>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(a1);
}
