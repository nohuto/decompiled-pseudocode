/*
 * XREFs of PipDgqInsertEntry @ 0x14096F100
 * Callers:
 *     PiDmaGuardQueueInsertEntry @ 0x14096F04C (PiDmaGuardQueueInsertEntry.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void __fastcall PipDgqInsertEntry(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PipDgqListLock, 1u);
  v3 = (_QWORD *)qword_140C5AC58;
  if ( *(PVOID **)qword_140C5AC58 != &PipDgqListHead )
    __fastfail(3u);
  *a1 = &PipDgqListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140C5AC58 = (__int64)a1;
  ExReleaseResourceLite(&PipDgqListLock);
  KeLeaveCriticalRegion();
}
