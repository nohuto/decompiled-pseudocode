/*
 * XREFs of VidSchIsTDRPending @ 0x1C000C140
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0016990 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C880 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1C006E44C (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C007DD90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C007EC40 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C007EFE0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0085280 (VidSchiSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C008B4A0 (VidSchSwitchFromContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 *     VidSchiDrainFlipQueue @ 0x1C00CE7B0 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00CEA6C (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00CEBBC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00CED04 (VidSchiResetEngines.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00CEF10 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CF04C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00CFF30 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C00D1550 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2916) != 0;
}
