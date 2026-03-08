/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x1C016524C
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C00D382C (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00D384C (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00D4440 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00D48C0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00D8B40 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00D8CD0 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00D8CF0 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00D8D10 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C0161C90 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C0161D20 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C0162030 (EtwTraceDockState.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C01620C0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C01620F0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C0162150 (EtwTraceEdgyDetectionStop.c)
 *     EtwTraceFlipManagerCreate @ 0x1C0162780 (EtwTraceFlipManagerCreate.c)
 *     EtwTraceFlipManagerDestroy @ 0x1C01627B0 (EtwTraceFlipManagerDestroy.c)
 *     EtwTraceFlipManagerLost @ 0x1C01627E0 (EtwTraceFlipManagerLost.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C0163DF0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C0163E20 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C0163EB0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C0163EE0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C0163FBC (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C0164270 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C0164490 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0198530 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
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
