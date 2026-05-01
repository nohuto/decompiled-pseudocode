/*
 * XREFs of ??$Start@AEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@AEAY03$$CBG@Z @ 0x1800CC950
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180014B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800140B4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800140B4.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z @ 0x1800CCD40 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::Start<unsigned short const (&)[4]>(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"LauncherInvokeActivity");
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  CommonStartTelemetry::LauncherInvokeActivity::StartActivity(this, L"{0}");
  return this;
}
