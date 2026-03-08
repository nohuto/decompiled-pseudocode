/*
 * XREFs of ExNotifyCallback @ 0x1402D2F00
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x14075E0F0 (NtNotifyChangeSession.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     PopDispatchCallback @ 0x14085D520 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140963770 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140964064 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x140987B10 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopNotifyCallbacksPreSleep @ 0x140988A7C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchAcDcCallback @ 0x140991490 (PopDispatchAcDcCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1409F788C (SLSendPolicyChangeNotifications.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1402D2F20 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
