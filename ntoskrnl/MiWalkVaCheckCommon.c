/*
 * XREFs of MiWalkVaCheckCommon @ 0x140349290
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x1402DE91C (MiEmptyWorkingSetHelper.c)
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 *     MiUpdateOldPte @ 0x140463D20 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140632C70 (MiSimpleAgePte.c)
 * Callees:
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiIsPageTableLocked @ 0x1402F2A4C (MiIsPageTableLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v8; // r8

  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(a3 + 40), 0x28u) )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 > 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(a1, a2, v8 | 0x8000000000000000uLL) )
        *a5 = MI_READ_PTE_LOCK_FREE(a2);
    }
  }
  return 1LL;
}
