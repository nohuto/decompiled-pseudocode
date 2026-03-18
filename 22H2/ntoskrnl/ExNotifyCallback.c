/*
 * XREFs of ExNotifyCallback @ 0x14033BD40
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x1407B3FD0 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x140861390 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140966790 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140967084 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x14098ABC0 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopNotifyCallbacksPreSleep @ 0x14098BB2C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchAcDcCallback @ 0x140994540 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1409FA71C (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14033BD60 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
