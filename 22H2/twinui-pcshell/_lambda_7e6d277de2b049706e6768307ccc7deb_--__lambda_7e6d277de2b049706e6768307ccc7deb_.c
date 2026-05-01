/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x18037F780
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb____::_1_::dtor$0 @ 0x18037E5C6 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7de.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$3 @ 0x1803834C2 (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F960 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_(_QWORD *a1)
{
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)(a1 + 1));
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
