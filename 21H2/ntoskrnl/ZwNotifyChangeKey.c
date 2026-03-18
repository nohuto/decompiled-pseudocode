/*
 * XREFs of ZwNotifyChangeKey @ 0x14041DB60
 * Callers:
 *     CcRegistryChangeCallback @ 0x1403A73E0 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403DC824 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x1405DFE94 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1406214C0 (DifZwNotifyChangeKeyWrapper.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140811B60 (PipUpdateAsyncOptionsCallback.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14081BE48 (PopPowerButtonBugcheckConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x14084C25C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14084C370 (IopRegistryCallback.c)
 *     ExpReadLeapSecondData @ 0x140857F38 (ExpReadLeapSecondData.c)
 *     PopUpdateUpgradeInProgress @ 0x1408620D0 (PopUpdateUpgradeInProgress.c)
 *     PipUpdateSetupInProgressNotify @ 0x140940408 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x140989150 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
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
