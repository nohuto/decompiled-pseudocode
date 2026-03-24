/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1402873F4
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1402871AC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140287294 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140287DB0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402BD4D0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402FF000 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405955E4 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD40 (ExAcquireSpinLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, 0LL);
  return -1;
}
