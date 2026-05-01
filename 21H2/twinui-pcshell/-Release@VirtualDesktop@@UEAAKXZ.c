/*
 * XREFs of ?Release@VirtualDesktop@@UEAAKXZ @ 0x1800802B0
 * Callers:
 *     ?Release@VirtualDesktop@@W7EAAKXZ @ 0x18016EA90 (-Release@VirtualDesktop@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBA@EAAKXZ @ 0x18016EAA0 (-Release@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBI@EAAKXZ @ 0x18016EAB0 (-Release@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCA@EAAKXZ @ 0x18016EAC0 (-Release@VirtualDesktop@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktop::Release(VirtualDesktop *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Microsoft::WRL::ChainInterfaces<VirtualDesktopNotificationBase<IVirtualDesktopNotification2>,IVirtualDesktopNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(this);
}
