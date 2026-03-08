/*
 * XREFs of Controller_ReportFatalError @ 0x1C0034770
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0003140 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00156F0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_SetControllerGone @ 0x1C00347AC (Controller_SetControllerGone.c)
 * Callees:
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 */

__int64 __fastcall Controller_ReportFatalError(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return Controller_ReportFatalErrorEx(a1, a2, a3, a4, 0LL, a5, a6, a7);
}
