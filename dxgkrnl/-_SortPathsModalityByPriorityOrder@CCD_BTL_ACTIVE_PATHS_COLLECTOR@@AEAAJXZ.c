/*
 * XREFs of ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C01BD36C
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01BD298 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DBC1C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     qsort_0 @ 0x1C00243A1 (qsort_0.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v1 && *(_WORD *)(v1 + 20) )
    qsort_0(
      (void *)(v1 + 56),
      *(unsigned __int16 *)(v1 + 20),
      0x128uLL,
      CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback);
  return 0LL;
}
