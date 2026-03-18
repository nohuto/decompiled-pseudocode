/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x140419600
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404195A0 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimerDpc(
        struct _KDPC *Dpc,
        volatile signed __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedAnd(DeferredContext + 424, 0xFFFFFFFB);
  _m_prefetchw((const void *)(DeferredContext + 424));
  if ( (_InterlockedOr(DeferredContext + 424, 2u) & 2) == 0 )
    CmFcpManagerArmFeatureUsageProviderFlushTimer((__int64)DeferredContext);
}
