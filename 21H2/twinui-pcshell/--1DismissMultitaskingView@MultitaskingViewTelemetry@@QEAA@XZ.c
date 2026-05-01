/*
 * XREFs of ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18036C9F0
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x180371180 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAllUpViewHost_::DismissView_::_1_::dtor$1 @ 0x180371343 (_CMultitaskingViewHostBase_IAllUpViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180380E60 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAltTabViewHost_::DismissView_::_1_::dtor$1 @ 0x18038104B (_CMultitaskingViewHostBase_IAltTabViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180384760 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$1 @ 0x18038494B (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1803FF0E0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180219550 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(
        MultitaskingViewTelemetry::DismissMultitaskingView *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
