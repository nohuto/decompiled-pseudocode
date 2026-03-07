__int64 __fastcall ExpConvertFastResourceExclusiveToShared2(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = 4;
    if ( CurrentIrql != 2 )
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  --*(_DWORD *)(a1 + 96);
  ExpRemoveEntryListAndClear2(a1 + 64);
  *(_BYTE *)(v6 + 37) &= ~2u;
  *(_DWORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_BYTE *)(v6 + 36) = *(_BYTE *)(a1 + 100);
  *(_BYTE *)(a1 + 100) = 0;
  ExpAddFastOwnerEntryToThreadList2((__int64)CurrentThread, v7, 0, (_QWORD *)v6);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  LOBYTE(v8) = 1;
  v9 = *(volatile signed __int32 **)(a1 + 8);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  v18 = v9;
  ExpUpdateLockWordForRelease(a1, v10, v8);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v18, 0, 0);
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
