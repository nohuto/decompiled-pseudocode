/*
 * XREFs of ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180442DDC
 * Callers:
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1804434DC (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18044292C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_18044292C.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x180442C48 (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180442D24 (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

__int64 __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::operator=(__int64 a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView((OverlayModeTelemetry::ExitCompactOverlayModeForView *)v5);
  return a1;
}
