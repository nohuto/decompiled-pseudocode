/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1407E1610
 * Callers:
 *     EtwpUnsubscribeContainerStateWnf @ 0x1405FC920 (EtwpUnsubscribeContainerStateWnf.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x1406800EC (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     RtlpCtContextFree @ 0x1409C216C (RtlpCtContextFree.c)
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x14076CF0C (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
