__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rax
  char v4; // si
  unsigned __int64 OldIrql; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &v12);
  v2 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 64) += v2;
  v4 = *(_BYTE *)(a1 + 27);
  v13 = v3;
  KxReleaseQueuedSpinLock(&v12);
  OldIrql = v12.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = KeWakeWaitChain(&v13, 0LL, 0LL);
  if ( v2 && v4 )
    result = ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
  __incgsdword(0x8A74u);
  return result;
}
