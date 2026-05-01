/*
 * XREFs of ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1804A8C7C
 * Callers:
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804AD900 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternal_::_1_::dtor$0 @ 0x1804ADC1A (_CVirtualDesktopManager--SwitchDesktopInternal_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802193A0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
