/*
 * XREFs of MmIsSessionAddress @ 0x140239ED0
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403DDCF8 (KiLockExtendedServiceTable.c)
 *     EtwpInitializeRegEntry @ 0x140694D00 (EtwpInitializeRegEntry.c)
 *     CmpIsBufferGloballyVisible @ 0x1406B18D8 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x1406F543C (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x140818A88 (CmFcpInitializeChangeSubscription.c)
 *     PspTlsAlloc @ 0x140849A64 (PspTlsAlloc.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A98AFC (IopLiveDumpMarkLoadedModuleList.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x140AB10F0 (KdpQueryMemory.c)
 *     VfDriverEnableVerifierForAll @ 0x140AC7618 (VfDriverEnableVerifierForAll.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 *     ViPtLogStackTrace @ 0x140ADC05C (ViPtLogStackTrace.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140ADCD00 (VfMiscIoInitializeWorkItem_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 - qword_140C65668) < 0x8000000000LL;
}
