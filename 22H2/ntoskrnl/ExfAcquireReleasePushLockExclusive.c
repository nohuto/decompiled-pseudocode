/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140201DF4
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1402278E4 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1403613D8 (PspLockUnlockProcessExclusive.c)
 *     ObpDeleteDirectoryObject @ 0x140698950 (ObpDeleteDirectoryObject.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PsLookupProcessByProcessId @ 0x1406FA420 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406FAFC0 (PsLookupThreadByThreadId.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DC68 (AlpcReferenceBlobByHandle.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     PfpRpCHashDeleteEntries @ 0x1407B5CC0 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409AE5A8 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EC3C4 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1402BD8E0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  result = ExfReleasePushLockExclusive(BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
