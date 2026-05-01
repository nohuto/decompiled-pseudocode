/*
 * XREFs of ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1802D1450
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1802D00B0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801AD14C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180239AD0 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_180239AD0.c)
 *     ?IncrementExpectedStopCount@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023B054 (-IncrementExpectedStopCount@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$.c)
 */

struct wil::details::IFailureCallback *__fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  const struct wil::FailureInfo *v4; // rdx
  _BYTE v6[152]; // [rsp+20h] [rbp-98h] BYREF

  if ( **(_DWORD **)(a1 + 48) != 1 )
  {
    memset_0(v6, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v6, v4);
  }
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::IncrementExpectedStopCount(a1);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1);
  *(_QWORD *)a2 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  return a2;
}
