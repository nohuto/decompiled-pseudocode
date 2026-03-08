/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x1403C5DA8
 * Callers:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403C50F0 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExConvertFastResourceExclusiveToShared @ 0x140607790 (ExConvertFastResourceExclusiveToShared.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(volatile signed __int32 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v15 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += (_DWORD)v5;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  KeWakeWaitChain(&v15, 0, 0);
  *(_BYTE *)(a2 + 17) &= ~4u;
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
