/*
 * XREFs of ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00A7814
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A6BA0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7EBC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00E16DC (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E38C0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E6990 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00A78AC (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // edi

  v6 = *(int *)(a1 + 8);
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 64LL, a1, v6, a5);
  }
  ++*(_QWORD *)(a1 + 4624);
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 7032) = a3;
  *(_QWORD *)(a1 + 7040) = a4;
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 7016) )
    {
      do
        VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, v7++);
      while ( v7 < *(_DWORD *)(a1 + 7016) );
    }
  }
  else
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, a2);
  }
}
