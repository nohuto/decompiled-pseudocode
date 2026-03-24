/*
 * XREFs of ExNotifyCallback @ 0x140307D90
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     NtNotifyChangeSession @ 0x1406791D0 (NtNotifyChangeSession.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077709C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x1407D0F60 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408AE014 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408AE904 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408E7990 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408F1470 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x14094E2B8 (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140990530 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140307DA8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
