/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x1C014F9C8
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C007D59C (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C007D9E8 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C00C0680 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C00C06A0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00D1BF0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00D45A0 (EtwTracePowerOnGdiEnd.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00D45C0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00D46B0 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00D46D0 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00D46F0 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceFlipManagerLost @ 0x1C00D8330 (EtwTraceFlipManagerLost.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C014C8E0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C014C970 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C014CB30 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C014CBF0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerCreate @ 0x1C014D180 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceFlipManagerDestroy @ 0x1C014D1B0 (EtwTraceFlipManagerDestroy.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C014E3D0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C014E400 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C014E490 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C014E4C0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C014E59C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C014E8D0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C014EAF0 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0178890 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0047300 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 2u, &v5);
}
