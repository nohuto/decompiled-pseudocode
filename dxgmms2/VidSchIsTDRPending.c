/*
 * XREFs of VidSchIsTDRPending @ 0x1C0007920
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0014360 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0046F70 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00A46E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00A5590 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 *     VidSchSwitchFromDevice @ 0x1C00ADEF0 (VidSchSwitchFromDevice.c)
 *     VidSchSwitchFromContext @ 0x1C00AE3A0 (VidSchSwitchFromContext.c)
 *     VidSchiDrainFlipQueue @ 0x1C00B5A60 (VidSchiDrainFlipQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0106530 (VidSchiPreemptEngineNodes.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010667C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106954 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitQueueCommand @ 0x1C0106CD8 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C0107550 (VidSchFlushAdapter.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108A08 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 3012) != 0;
}
