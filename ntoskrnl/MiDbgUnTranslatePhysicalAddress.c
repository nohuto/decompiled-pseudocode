/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x140641E70
 * Callers:
 *     MiDbgCopyMemory @ 0x140347088 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnfreezeIoPfnNode @ 0x14062C658 (MiUnfreezeIoPfnNode.c)
 */

void __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_140C67CC8 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_140C67CC8, ZeroPte);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 1u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 0x18) != 0 )
    {
      MiUnfreezeIoPfnNode((__int64 *)a1 + 2);
    }
  }
  v5 = *((unsigned __int8 *)a1 + 4);
  if ( (_BYTE)v5 != 17 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
}
