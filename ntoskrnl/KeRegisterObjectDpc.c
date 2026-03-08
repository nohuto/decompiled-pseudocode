/*
 * XREFs of KeRegisterObjectDpc @ 0x140565CE8
 * Callers:
 *     ExQueueDpcEventWait @ 0x140609C40 (ExQueueDpcEventWait.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x140293B88 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRegisterObjectDpc(__int64 a1, ULONG_PTR a2, __int64 a3, char a4)
{
  __int64 v8; // r10
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  char v11; // bp
  __int64 *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // edx
  bool v17; // zf

  *(_WORD *)(a3 + 16) = 1028;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  LODWORD(v8) = 4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v11 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( *(int *)(a1 + 4) <= 0 || (KiWaitSatisfyOther(a1), v11 = 1, a4) )
  {
    v12 = *(__int64 **)(a1 + 16);
    if ( *v12 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = a1 + 8;
    *(_QWORD *)(a3 + 8) = v12;
    *v12 = a3;
    *(_QWORD *)(a1 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueDpc(a2, a1, a3, 0LL, 0);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  }
  return v11;
}
