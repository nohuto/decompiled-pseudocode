/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1408612A4
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140850640 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v3; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C654F0;
    if ( qword_140C654F0 == &qword_140C654F0 )
      break;
    if ( *((PVOID **)qword_140C654F0 + 1) != &qword_140C654F0
      || (v3 = *(_QWORD *)qword_140C654F0, *(PVOID *)(*(_QWORD *)qword_140C654F0 + 8LL) != qword_140C654F0) )
    {
      __fastfail(3u);
    }
    qword_140C654F0 = *(PVOID *)qword_140C654F0;
    *(_QWORD *)(v3 + 8) = &qword_140C654F0;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
