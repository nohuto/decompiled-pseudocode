/*
 * XREFs of ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803A2FE0
 * Callers:
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1803A3060 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180014084 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180014084.c)
 *     ??4?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180016948 (--4-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180016948.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18039B0B8 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v5);
  return a1;
}
