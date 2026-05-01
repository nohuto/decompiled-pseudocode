/*
 * XREFs of ??$Start@PEAG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAPEAG@Z @ 0x1800CC970
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180014B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800140B4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800140B4.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z @ 0x1800CCD20 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::Start<unsigned short *>(
        CommonStartTelemetry::LauncherInvokeActivity *this,
        const unsigned __int16 **a2)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"LauncherInvokeActivity");
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  CommonStartTelemetry::LauncherInvokeActivity::StartActivity(this, *a2);
  return this;
}
