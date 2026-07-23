/*
 * XREFs of PopHandleSystemRequiredPowerRequestsUpdate @ 0x14026F3FC
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14066D454 (PopHandleConvergedPowerRequestUpdate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCheckResiliencyScenarios @ 0x14066D4E0 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopHandleSystemRequiredPowerRequestsUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = (int)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_DWORD)a1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    if ( (_DWORD)a1 != 3 )
      return result;
    v4 = 2;
  }
  PopAcquirePolicyLock(a1, a2);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( PopPowerRequestAttributes[4 * v3] <= 0 )
    v5 = ~v4 & dword_140C23984;
  else
    v5 = v4 | dword_140C23984;
  dword_140C23984 = v5;
  if ( !v5 )
    dword_140C239A0 = dword_140C23968;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = (unsigned int)LockHandle.OldIrql + 1;
        v6 = -1LL << (LockHandle.OldIrql + 1);
        v14 = ~(unsigned __int16)v6;
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PopCheckResiliencyScenarios(v7, v6);
  return PopReleasePolicyLock(v10, v9);
}
