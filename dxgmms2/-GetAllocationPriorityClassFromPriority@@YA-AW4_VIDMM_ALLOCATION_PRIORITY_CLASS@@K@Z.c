/*
 * XREFs of ?GetAllocationPriorityClassFromPriority@@YA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00F14EC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAllocationPriorityClassFromPriority(unsigned int a1)
{
  if ( a1 <= 0x28000000 )
    return 0LL;
  if ( a1 < 0x78000000 )
    return 1LL;
  if ( a1 >= 0xA0000000 )
    return 4 - (unsigned int)(a1 < 0xC8000000);
  return 2LL;
}
