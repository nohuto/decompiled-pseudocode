/*
 * XREFs of ViRemoveChannelWcb @ 0x1405A14E8
 * Callers:
 *     VfCancelAdapterChannel @ 0x1409CC590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CC950 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x1409CCCF0 (VfFreeMapRegisters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r14
  KSPIN_LOCK *v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 i; // rbx
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf
  __int64 v18; // rdx
  _QWORD *v19; // rcx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 144);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  v10 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v12 + 72) )
  {
    v12 = i - 72;
    if ( v10 == v12 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v12 + 96) == a2 || *(_QWORD *)(v12 + 88) == a2)
      || a3 && *(_QWORD *)(v12 + 40) == a3
      || *(_DWORD *)(v12 + 52) <= 1u )
    {
      v18 = *(_QWORD *)(v12 + 72);
      v19 = *(_QWORD **)(v12 + 80);
      if ( *(_QWORD *)(v18 + 8) != v12 + 72 || *v19 != v12 + 72 )
        __fastfail(3u);
      *v19 = v18;
      v6 = 1;
      *(_QWORD *)(v18 + 8) = v19;
      break;
    }
  }
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v6 != 1 )
    return 0LL;
  return v12;
}
