/*
 * XREFs of MiMarkSessionDeletePending @ 0x1402007FC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMarkSessionDeletePending(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( *(_DWORD *)(a1 + 76) )
  {
    *(_DWORD *)(a1 + 84) = 0;
    *(_QWORD *)(a1 + 96) = a1 + 88;
    *(_QWORD *)(a1 + 88) = a1 + 88;
    *(_WORD *)(a1 + 80) = 263;
    *(_BYTE *)(a1 + 82) = 6;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return KeWaitForGate(a1 + 80, 18LL);
  }
  else
  {
    result = KxReleaseQueuedSpinLock(&LockHandle);
    v3 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & v11[5]) == 0;
        v11[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    __writecr8(v3);
  }
  return result;
}
