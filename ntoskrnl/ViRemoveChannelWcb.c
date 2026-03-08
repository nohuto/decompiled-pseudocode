/*
 * XREFs of ViRemoveChannelWcb @ 0x1405CC73C
 * Callers:
 *     VfCancelAdapterChannel @ 0x140AC2BE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC3030 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140AC3400 (VfFreeMapRegisters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r14
  volatile signed __int64 *v8; // r15
  KIRQL v9; // al
  _QWORD *v10; // r8
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  __int64 v19; // rdx
  _QWORD *v20; // rcx

  v6 = 0;
  if ( a2 && a3 )
    return 0LL;
  v8 = (volatile signed __int64 *)(a1 + 176);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 176));
  v10 = (_QWORD *)(a1 + 160);
  v11 = v9;
  v12 = *(_QWORD **)(a1 + 160);
  v13 = (__int64)(v12 - 9);
  if ( v10 != v12 )
  {
    while ( (!a2 || *(_QWORD *)(v13 + 96) != a2 && *(_QWORD *)(v13 + 88) != a2)
         && (!a3 || *(_QWORD *)(v13 + 40) != a3)
         && *(_DWORD *)(v13 + 52) >= 2u )
    {
      v13 = *v12 - 72LL;
      v12 = (_QWORD *)*v12;
      if ( v10 == v12 )
        goto LABEL_12;
    }
    v19 = *(_QWORD *)(v13 + 72);
    v20 = *(_QWORD **)(v13 + 80);
    if ( *(_QWORD *)(v19 + 8) != v13 + 72 || *v20 != v13 + 72 )
      __fastfail(3u);
    *v20 = v19;
    v6 = 1;
    *(_QWORD *)(v19 + 8) = v20;
  }
LABEL_12:
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v11);
  if ( v6 != 1 )
    return 0LL;
  return v13;
}
