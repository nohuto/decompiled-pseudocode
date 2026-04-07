/*
 * XREFs of ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E46C
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090B30 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C70 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008E82C (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this)
{
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
