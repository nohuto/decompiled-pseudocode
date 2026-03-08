/*
 * XREFs of MiDemoteLargeFreePage @ 0x14039BCC8
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 * Callees:
 *     MiInsertDemotedPages @ 0x1402CACC8 (MiInsertDemotedPages.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbp
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf

  CurrentIrql = KeGetCurrentIrql();
  v9 = a2 & ~(MiLargePageSizes[a3] - 1);
  v10 = 25408LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v9) >> 4)) + 2);
  v11 = 320;
  v12 = *(_QWORD *)(a1 + 16) + v10;
  if ( CurrentIrql < 2u && (a4 & 8) == 0 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    v11 = 448;
  result = MiTryUnlinkNodeLargePages(a1, v9, a3, 1LL, v11, a5, 0LL);
  if ( result )
  {
    MiInsertDemotedPages(v12, result, a3, a3 + 1, 0LL);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 1LL;
  }
  return result;
}
