/*
 * XREFs of FsRtlNotifyCleanupAll @ 0x14093D030
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140775FD8 (FsRtlNotifyCleanupOneEntry.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyCleanupAll(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *Flink; // rdi
  char *v6; // rcx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp+18h] BYREF

  SubjectContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  while ( Flink != NotifyList )
  {
    v6 = (char *)&Flink[-2];
    Flink = Flink->Flink;
    FsRtlNotifyCleanupOneEntry(v6, &SubjectContext);
    if ( SubjectContext )
    {
      SeReleaseSubjectContext(SubjectContext);
      ExFreePoolWithTag(SubjectContext, 0);
    }
  }
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
