/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140309A10
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x140308C98 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140309864 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14030A210 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14030AFE0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405B4F54 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
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
