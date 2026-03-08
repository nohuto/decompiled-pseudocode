/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140201D54
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140205E34 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1402F6A6C (PspLockUnlockProcessExclusive.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     AlpcReferenceBlobByHandle @ 0x1406D1E94 (AlpcReferenceBlobByHandle.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PfpRpCHashDeleteEntries @ 0x14075FBBC (PfpRpCHashDeleteEntries.c)
 *     ObpDeleteDirectoryObject @ 0x14078DDD0 (ObpDeleteDirectoryObject.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409AB528 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409E9524 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfReleasePushLockExclusive @ 0x140238EF0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
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
