/*
 * XREFs of CiSystemAcquireSpinLock @ 0x1C0001010
 * Callers:
 *     CiSchedulerSetMultimediaMode @ 0x1C0003178 (CiSchedulerSetMultimediaMode.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquireSpinLock(KSPIN_LOCK *a1)
{
  struct _KTHREAD *result; // rax

  KeAcquireSpinLockRaiseToDpc(a1);
  result = KeGetCurrentThread();
  a1[1] = (KSPIN_LOCK)result;
  return result;
}
