/*
 * XREFs of MiUnlinkWorkingSet @ 0x1402A4D2C
 * Callers:
 *     MiUnlinkSessionWorkingSet @ 0x140200794 (MiUnlinkSessionWorkingSet.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiUnlinkWorkingSet(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rbx
  char v4; // al
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  _DWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+28h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v18[0] = 393479;
  v18[1] = 0;
  v19[1] = v19;
  v19[0] = v19;
  p_LockHandle = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
  {
    p_LockHandle = &LockHandle;
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  }
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 185);
    if ( (v4 & 6) == 0 && (v4 & 0xF0) == 0 )
      break;
    *(_QWORD *)(a1 + 104) = v18;
    KxReleaseQueuedSpinLock(p_LockHandle);
    OldIrql = p_LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KeWaitForGate((__int64)v18, 18LL, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, p_LockHandle);
  }
  v5 = (_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = MmBadPointer;
  result = (unsigned __int64)&LockHandle;
  if ( p_LockHandle == &LockHandle )
  {
    result = KxReleaseQueuedSpinLock(p_LockHandle);
    v9 = p_LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v9 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = v16->SchedulerAssist;
        v15 = ((unsigned int)result & v17[5]) == 0;
        v17[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v9);
  }
  return result;
}
