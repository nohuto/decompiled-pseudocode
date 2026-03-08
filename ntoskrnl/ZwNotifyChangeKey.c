/*
 * XREFs of ZwNotifyChangeKey @ 0x140414730
 * Callers:
 *     CcSetupWatchForRegistryChanges @ 0x1403ACDFC (CcSetupWatchForRegistryChanges.c)
 *     CcRegistryChangeCallback @ 0x1403C1550 (CcRegistryChangeCallback.c)
 *     PspReadDfssConfigurationValues @ 0x1405A12D4 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1405EEF30 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x1408364DC (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1408365F0 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140850DB4 (ExpReadLeapSecondData.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140857318 (PopPowerButtonBugcheckConfigure.c)
 *     PopUpdateUpgradeInProgress @ 0x14085E230 (PopUpdateUpgradeInProgress.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140872CF0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14094F158 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x14097D180 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140B619EC (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, Event);
}
