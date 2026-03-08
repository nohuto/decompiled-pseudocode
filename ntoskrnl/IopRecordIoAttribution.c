/*
 * XREFs of IopRecordIoAttribution @ 0x14030C324
 * Callers:
 *     IoDiskIoAttributionQuery @ 0x1402946F0 (IoDiskIoAttributionQuery.c)
 *     IoRecordIoAttribution @ 0x14030BC80 (IoRecordIoAttribution.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopRecordIoAttribution(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  int v5; // r8d
  int v6; // eax
  _QWORD *v8; // rbx
  KSPIN_LOCK v9; // rsi
  KSPIN_LOCK v10; // r13
  KSPIN_LOCK v11; // r15
  KSPIN_LOCK v12; // rcx
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (unsigned __int8)v6 == 3 )
  {
    v8 = a1 + 10;
  }
  else if ( (unsigned __int8)v6 == 4 )
  {
    v8 = a1 + 15;
  }
  else
  {
    if ( (a3 & 1) == 0 )
      return (unsigned int)-1073741637;
    v8 = a1 + 10;
    if ( !a1[10] )
    {
      v8 = a1 + 15;
      if ( !a1[15] )
        return 0;
    }
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0LL;
  v11 = 0LL;
  if ( (a3 & 2) == 0 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
    v5 = 1;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
  {
    v14 = a1[9];
    if ( !v14 || v9 < a1[8] )
      a1[8] = v9;
    a1[9] = v14 + 1;
    ++*v8;
  }
  else
  {
    if ( (a3 & 1) == 0 )
    {
      --a1[9];
      --*v8;
    }
    if ( !_bittest((const signed __int32 *)(a2 + 4), 9u) )
    {
      v12 = a1[6];
      if ( v12 <= *(_QWORD *)(a2 + 16) )
        v12 = *(_QWORD *)(a2 + 16);
      if ( v9 >= v12 )
      {
        a1[6] = v9;
        v10 = v9 - v12;
      }
      v9 = *(_QWORD *)(a2 + 16);
    }
    v13 = a1[7];
    if ( v13 <= a1[8] )
      v13 = a1[8];
    if ( v9 >= v13 )
    {
      a1[7] = v9;
      v11 = v9 - v13;
    }
    v8[1] += v11;
    if ( !_bittest((const signed __int32 *)(a2 + 4), 9u) )
    {
      v8[2] += v10;
      v8[3] += *(unsigned int *)(a2 + 8);
      v8[4] += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1) / (unsigned int)IopDiskIoAttributionBaseIoSize;
    }
  }
  v15 = 0;
  if ( v5 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return v15;
}
