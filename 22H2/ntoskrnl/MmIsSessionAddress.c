/*
 * XREFs of MmIsSessionAddress @ 0x1402C9800
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x140272208 (KiAbFindWakeupLockEntry.c)
 *     ViAvlNodeInitializeSessionId @ 0x14037255C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x1403DB7C8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KeAbCrossThreadDelete @ 0x140520DB8 (KeAbCrossThreadDelete.c)
 *     CmpIsBufferGloballyVisible @ 0x140678780 (CmpIsBufferGloballyVisible.c)
 *     PnpInitializeNotifyEntry @ 0x14069C4B4 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x14071B694 (PnpNotifyDriverCallback.c)
 *     KseDriverLoadImage @ 0x14075AD50 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x140762630 (EtwpAddKmRegEntry.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     MmEnumerateSystemImages @ 0x140792C70 (MmEnumerateSystemImages.c)
 *     CmFcpInitializeChangeSubscription @ 0x14087E4BC (CmFcpInitializeChangeSubscription.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     KdpQueryMemory @ 0x1409B771C (KdpQueryMemory.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C6B1C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C87C8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C9690 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1409D8B7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409D8C64 (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((a1 >> 39) & 0x1FF) - 256] == 1;
}
