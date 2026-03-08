/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140791FA0
 * Callers:
 *     EtwpUnsubscribeContainerStateWnf @ 0x1405FA480 (EtwpUnsubscribeContainerStateWnf.c)
 *     RtlpCtContextFree @ 0x1409BF13C (RtlpCtContextFree.c)
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x14071D44C (ExpWnfDeleteSubscription.c)
 */

char __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
