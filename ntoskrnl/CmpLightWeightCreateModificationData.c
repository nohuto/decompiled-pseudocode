/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x140A25D48
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A26040 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A25F50 (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A272EC (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, unsigned int **a2)
{
  ULONG_PTR v4; // rbp
  __int64 Pool; // rax
  unsigned int *v6; // rdi
  int updated; // ebx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = CmpAllocatePool(256LL, 20LL, 2002079043LL);
  v6 = (unsigned int *)Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = 0LL;
    *(_DWORD *)(Pool + 8) = 0;
    ++*(_DWORD *)Pool;
    *(_DWORD *)(Pool + 12) = -1;
    *(_DWORD *)(Pool + 16) = -1;
    updated = CmpLightWeightDuplicateParentLists(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
    if ( updated < 0
      || (updated = CmpLightWeightUpdateModificationActions(
                      v6,
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL),
                      *(_QWORD *)(a1 + 56)),
          updated < 0) )
    {
      CmpLightWeightCleanupModifyKeyDataUoW(v4, v6);
    }
    else
    {
      updated = 0;
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
