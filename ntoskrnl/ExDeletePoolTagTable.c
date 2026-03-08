/*
 * XREFs of ExDeletePoolTagTable @ 0x140604960
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmFreeIndependentPages @ 0x14087B250 (MmFreeIndependentPages.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v8; // r9
  int v9; // eax
  bool v10; // zf

  v1 = (__int64)*(&ExPoolTagTables + a1);
  v2 = 80 * (PoolTrackTableSize + 1);
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
  *(&ExPoolTagTables + a1) = 0LL;
  if ( KiIrqlFlags )
  {
    v6 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v9 & v8[5]) == 0;
      v8[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v1, v2);
}
