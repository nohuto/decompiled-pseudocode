/*
 * XREFs of WPP_SF_ @ 0x1C00334FC
 * Callers:
 *     RaidResumeIoQueue @ 0x1C0002C7C (RaidResumeIoQueue.c)
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     StorpAllocatePool @ 0x1C00160C8 (StorpAllocatePool.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0016C0C (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017CA4 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0019C30 (RaUnitWaitForRemoveLock.c)
 *     RaidGetStartIoPerfParams @ 0x1C001C5E0 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C002BF74 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C00316D4 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C0036C5C (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C00385E8 (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C003A7C8 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C003B17C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003B2B8 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C003B364 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C003B6B0 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003B75C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B9CC (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C003BC34 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C003BCB0 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C003BEC8 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003BFB0 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003C334 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003C4B0 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C63C (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C003D108 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003D208 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003D3A4 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C003E780 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C003E8D0 (RaUnitRequestPowerUp.c)
 *     RaUnitSmartReturnStatus @ 0x1C0048B70 (RaUnitSmartReturnStatus.c)
 *     RaidUnitRequestTimeout @ 0x1C004B1C8 (RaidUnitRequestTimeout.c)
 *     ATADeviceIdShimHookDeviceControl @ 0x1C0058340 (ATADeviceIdShimHookDeviceControl.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0058610 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0058B20 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0058C00 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E14 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
