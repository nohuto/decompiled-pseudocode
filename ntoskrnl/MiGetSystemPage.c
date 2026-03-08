/*
 * XREFs of MiGetSystemPage @ 0x1402141C8
 * Callers:
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 * Callees:
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  unsigned __int32 v3; // ebx
  __int64 i; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v10; // edx
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v3 = *(_DWORD *)(a2 + 12) | *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  for ( i = MiGetPage(a1, v3, 770LL); i == -1; i = MiGetPage(a1, v3, 770LL) )
  {
    if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      return 0LL;
    MiWaitForFreePage(a1);
  }
  v5 = 48 * i - 0x220000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v5);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v5;
}
