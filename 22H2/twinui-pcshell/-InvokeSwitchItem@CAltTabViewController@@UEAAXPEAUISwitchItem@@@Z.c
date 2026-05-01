/*
 * XREFs of ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x180405FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804147F0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 */

void __fastcall CAltTabViewController::InvokeSwitchItem(CAltTabViewController *this, struct ISwitchItem *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  CMultitaskingViewControllerBase::InvokeSwitchItem(this, a2);
  ViewHostTelemetry::SendAppSwitchTelemetry(a2, 1LL);
}
