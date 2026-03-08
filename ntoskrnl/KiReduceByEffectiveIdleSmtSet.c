/*
 * XREFs of KiReduceByEffectiveIdleSmtSet @ 0x1403C8C94
 * Callers:
 *     KiTryLocalThreadSchedule @ 0x140259D60 (KiTryLocalThreadSchedule.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiReduceByEffectiveIdleSmtSet(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  unsigned int v10; // edx
  unsigned int v11; // ecx

  v3 = *(_QWORD *)(a1 + 34912) & ~*(_QWORD *)(a1 + 200);
  if ( (*a2 & v3) == 0
    || (*a2 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v3) != v3
    || (*(_BYTE *)(a1 + 13244) & 1) != 0
    || *(_DWORD *)(a1 + 32472) )
  {
    return 0;
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    _disable();
    KiUpdateTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 8), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  v10 = *(_DWORD *)(v5 + 80);
  v11 = *(_DWORD *)(v5 + 84);
  if ( v10 < v11 && v11 - v10 >= KiShortExecutionCycles )
    return 0;
  *a2 &= v3;
  return 1;
}
