/*
 * XREFs of IsInputThread @ 0x1C007CC40
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     <none>
 */

char IsInputThread()
{
  PKDPC BufferChainingDpc; // rdi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LOBYTE(BufferChainingDpc) = (unsigned int)PsGetCurrentThreadId() == LODWORD(BufferChainingDpc->SystemArgument2);
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  return (char)BufferChainingDpc;
}
