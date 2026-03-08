/*
 * XREFs of KeFlushEntireTb @ 0x1403AD590
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140B38F54 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 *     KiIsFlushEntire @ 0x140457F9C (KiIsFlushEntire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x14060AC48 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushEntireTb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  if ( (HvlEnlightenments & 4) != 0
    && ((HvlEnlightenments & 2) != 0
     || (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(3LL)
     || (_DWORD)KeNumberProcessors_0 != 1) )
  {
    LOBYTE(a4) = 1;
    LOBYTE(a3) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, a3, a4);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v7) = 0x8000;
      else
        v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v7;
    }
    ExFlushTb(0LL, 0LL, 3LL);
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
