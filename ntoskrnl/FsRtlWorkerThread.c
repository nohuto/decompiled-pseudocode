/*
 * XREFs of FsRtlWorkerThread @ 0x1403AEA70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KeRemoveQueue @ 0x1402E9390 (KeRemoveQueue.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY BugCheckParameter4; // rbx

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    BugCheckParameter4 = KeRemoveQueue(v2, 0, 0LL);
    ((void (__fastcall *)(struct _LIST_ENTRY *))BugCheckParameter4[1].Flink)(BugCheckParameter4[1].Blink);
  }
  while ( !KeGetCurrentIrql() );
  KeBugCheckEx(
    0xC8u,
    ((unsigned __int64)KeGetCurrentIrql() << 16) | 2,
    (ULONG_PTR)BugCheckParameter4[1].Flink,
    (ULONG_PTR)BugCheckParameter4[1].Blink,
    (ULONG_PTR)BugCheckParameter4);
}
