/*
 * XREFs of ZwNotifyChangeKey @ 0x1403FC6E0
 * Callers:
 *     CcRegistryChangeCallback @ 0x14039ACD0 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B5070 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403CCE68 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x140580DB8 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140796C08 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407A91B8 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x1407B3B90 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1407B3CB0 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14089B858 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408E0C00 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
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
