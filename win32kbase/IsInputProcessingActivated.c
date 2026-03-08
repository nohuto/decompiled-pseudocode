/*
 * XREFs of IsInputProcessingActivated @ 0x1C00D36E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char IsInputProcessingActivated()
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LOBYTE(BufferChainingDpc) = LODWORD(BufferChainingDpc->DeferredRoutine) == 2;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  return (char)BufferChainingDpc;
}
