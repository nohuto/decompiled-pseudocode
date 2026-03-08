/*
 * XREFs of MiGetPteMappingSet @ 0x14032E050
 * Callers:
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x140630B44 (MiSlowRotateCopy.c)
 *     MiFillPageWithImageExtentContents @ 0x14063AC90 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiCreatePteCopyList @ 0x1402F54C0 (MiCreatePteCopyList.c)
 */

__int64 __fastcall MiGetPteMappingSet(int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned __int64 *MmInternal; // rdi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // r10

  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = MiCreatePteCopyList(a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v9) = 4;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    result = (((unsigned __int64)MiGetUltraMapping(MmInternal + 1556, 3u, a2, 0) >> 9) & 0x7FFFFFFFF8LL)
           - 0x98000000000LL;
    MmInternal[1543] = result;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = a2;
    *(_QWORD *)(a3 + 16) = result;
    *(_BYTE *)(a3 + 9) = 1;
  }
  return result;
}
