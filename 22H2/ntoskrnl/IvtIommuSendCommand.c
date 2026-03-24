/*
 * XREFs of IvtIommuSendCommand @ 0x1404E0770
 * Callers:
 *     IvtFlushTbInternal @ 0x1404DF9E4 (IvtFlushTbInternal.c)
 *     IvtInvalidateAllContextEntries @ 0x1404E05A0 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x1404E05E0 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateExtendedContextEntry @ 0x1404E063C (IvtInvalidateExtendedContextEntry.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404E06FC (IvtInvalidateRemappingTableEntries.c)
 *     IvtIommuWaitCommand @ 0x1404E0970 (IvtIommuWaitCommand.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IvtIommuSendCommand(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 result; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 == 1 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 21;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, a1 + 21);
  }
  v7 = a1[1];
  v8 = *(_QWORD *)(v7 + 136);
  v9 = a1[9];
  v22 = v9;
  v10 = 0;
  v11 = 0;
  if ( ((v8 >> 4) & 0x7FFF) + 1 != (unsigned int)(a1[11] >> 4) )
    v11 = ((*(_QWORD *)(v7 + 136) >> 4) & 0x7FFF) + 1;
  v12 = v11;
  if ( v11 == ((*(_QWORD *)(v7 + 128) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v10 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v10);
    }
    while ( v12 == ((*(_QWORD *)(v7 + 128) >> 4) & 0x7FFFLL) );
    v9 = v22;
  }
  v13 = 2 * ((v8 >> 4) & 0x7FFF);
  *(_QWORD *)(v9 + 8 * v13) = *a2;
  result = a2[1];
  *(_QWORD *)(v9 + 8 * v13 + 8) = result;
  *(_QWORD *)(v7 + 136) = ((unsigned int)v8 ^ (16 * (_DWORD)v12)) & 0x7FFF0 ^ v8;
  _InterlockedOr(v20, 0);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
