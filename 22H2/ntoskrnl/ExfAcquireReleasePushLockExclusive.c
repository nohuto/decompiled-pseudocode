/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14031C3B4
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x14031C374 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x14032F7BC (EtwpLockUnlockBufferList.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PsLookupThreadByThreadId @ 0x140625A50 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140625D50 (PspThreadFromTicket.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D9700 (AlpcReferenceBlobByHandle.c)
 *     PfpRpCHashDeleteEntries @ 0x14070AA3C (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140907798 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14094157C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x140271BA0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 */

char __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx
  char result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
