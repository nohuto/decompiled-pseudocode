/*
 * XREFs of WPP_SF_ @ 0x1C00334DC
 * Callers:
 *     RaidResumeIoQueue @ 0x1C0002C7C (RaidResumeIoQueue.c)
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 *     StorpAllocatePool @ 0x1C0016058 (StorpAllocatePool.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0016B9C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017C34 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019BC0 (RaUnitWaitForRemoveLock.c)
 *     RaidGetStartIoPerfParams @ 0x1C001C570 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C002BF54 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C00316B4 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C0036C3C (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C00385C8 (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C003A7A8 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C003B15C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003B298 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003B344 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003B690 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003B73C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B9AC (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003BC14 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003BC90 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C003BEA8 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003BF90 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003C314 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003C490 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C61C (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003D0E8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003D1E8 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003D384 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003E760 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003E8B0 (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C0048B50 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1A8 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0058320 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C00585F0 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0058B00 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0058BE0 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E14 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
