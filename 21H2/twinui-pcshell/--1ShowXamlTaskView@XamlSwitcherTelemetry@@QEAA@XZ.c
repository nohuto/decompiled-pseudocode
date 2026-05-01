/*
 * XREFs of ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18036CB3C
 * Callers:
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18036CC34 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18036CFF0 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180376890 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     _XamlAllUpViewHost::Show_::_1_::dtor$1 @ 0x180376D1C (_XamlAllUpViewHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180370C48 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView(
        XamlSwitcherTelemetry::ShowXamlTaskView *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
