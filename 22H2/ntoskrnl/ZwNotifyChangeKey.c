/*
 * XREFs of ZwNotifyChangeKey @ 0x1403FBD60
 * Callers:
 *     CcRegistryChangeCallback @ 0x14039A5D0 (CcRegistryChangeCallback.c)
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x1403B4A10 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     CcSetupWatchForRegistryChanges @ 0x1403CC768 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x140580CF8 (PspReadDfssConfigurationValues.c)
 *     PopUpdateUpgradeInProgress @ 0x1405CF3D0 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140791A98 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407A95E8 (ExpReadLeapSecondData.c)
 *     IopRegistryInitializeCallbacks @ 0x1407B3FD0 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1407B40F0 (IopRegistryCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14089B8A8 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1408E0C50 (PfpParametersWatcher.c)
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
  return KiServiceInternal(KeyHandle);
}
