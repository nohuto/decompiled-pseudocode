/*
 * XREFs of MmIsSessionAddress @ 0x1402BC7B0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403E3218 (KiLockExtendedServiceTable.c)
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x14067FAA8 (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     PnpInitializeNotifyEntry @ 0x14068840C (PnpInitializeNotifyEntry.c)
 *     KseDriverLoadImage @ 0x140694730 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     EtwpInitializeRegEntry @ 0x1406BF610 (EtwpInitializeRegEntry.c)
 *     CmpIsBufferGloballyVisible @ 0x14073EBA0 (CmpIsBufferGloballyVisible.c)
 *     CmFcpInitializeChangeSubscription @ 0x140810B98 (CmFcpInitializeChangeSubscription.c)
 *     MmEnumerateSystemImages @ 0x140828110 (MmEnumerateSystemImages.c)
 *     PspTlsAlloc @ 0x14084D1F4 (PspTlsAlloc.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A9BC3C (IopLiveDumpMarkLoadedModuleList.c)
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x140AB50E0 (KdpQueryMemory.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACB618 (VfDriverEnableVerifierForAll.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADC44C (VfThunkApplyWdmThunkToAllSession.c)
 *     ViPtLogStackTrace @ 0x140AE005C (ViPtLogStackTrace.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140AE0D00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 - qword_140C65AE8) < 0x8000000000LL;
}
