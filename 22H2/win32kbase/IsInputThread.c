/*
 * XREFs of IsInputThread @ 0x1C0057E50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00AB130 (NtMITGetCursorUpdateHandle.c)
 *     NtMITSetInputDelegationMode @ 0x1C0141F60 (NtMITSetInputDelegationMode.c)
 *     NtMITSetLastInputRecipient @ 0x1C0142180 (NtMITSetLastInputRecipient.c)
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
