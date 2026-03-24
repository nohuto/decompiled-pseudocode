/*
 * XREFs of MiDeleteTopLevelPage @ 0x1402EA238
 * Callers:
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1402EA0BC (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiClearContainingMapping @ 0x1402EA2CC (MiClearContainingMapping.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v4 = 48 * a2 - 0x58000000000LL;
  v5 = (unsigned __int8)MiLockPageInline(v4, a2, a3, a4);
  MiClearContainingMapping(v4);
  *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v4);
  v6 = MiDecrementShareCount(v4);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v6;
}
