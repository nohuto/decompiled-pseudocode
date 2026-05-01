/*
 * XREFs of ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18038F660
 * Callers:
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$0 @ 0x1803905A2 (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180359684 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::OnAltKeyUp::~OnAltKeyUp(XamlSwitcherTelemetry::OnAltKeyUp *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
