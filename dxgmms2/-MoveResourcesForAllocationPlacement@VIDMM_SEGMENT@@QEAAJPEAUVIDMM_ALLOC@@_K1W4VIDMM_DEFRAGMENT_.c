/*
 * XREFs of ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FE23C
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E5E34 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00FCF70 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x1C0101FC8 (-FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA-AURegionSearchResult@1@_K00@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  __int64 v10[3]; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v8 = *MEMORY[0];
  VIDMM_LINEAR_POOL::FindBestDefragmentRegion(*(_QWORD *)(a1 + 152), v10);
  if ( v11 )
  {
    VIDMM_SEGMENT::DefragmentResourcesOverRange(a1, v10[0], v10[1], a5, (__int64)a6, (__int64)a7);
    return 0LL;
  }
  else
  {
    *a7 = v8;
    *a6 = 0;
    return 3221225495LL;
  }
}
