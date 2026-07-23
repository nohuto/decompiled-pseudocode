/*
 * XREFs of ZwNotifyChangeKey @ 0x1403FC8C0
 * Callers:
 *     CcRegistryChangeCallback @ 0x14039AE20 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B51E0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403CCFD8 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x140580FF8 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140796E08 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407A93B8 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x1407B3D30 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1407B3E50 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14089B9B8 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408E0D60 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
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
  return KiServiceInternal(KeyHandle);
}
