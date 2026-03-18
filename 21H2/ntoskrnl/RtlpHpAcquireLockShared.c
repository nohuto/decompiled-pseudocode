/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140364760
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14034A490 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140362C48 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhContextCompact @ 0x1403644A4 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403645A4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403650F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405F3924 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, a2);
  return -1;
}
