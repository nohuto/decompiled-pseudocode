/*
 * XREFs of ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C0102450
 * Callers:
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00FD460 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 * Callees:
 *     ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C00FD1D4 (-EvictAllocationCallback@@YAEPEAX0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rdx

  v4 = *((_QWORD *)this + 8);
  v5 = (char *)this + 56;
  while ( (char *)v4 != v5 )
  {
    v9 = v4 - 24;
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)v9 < a3
      && *(_QWORD *)(v9 + 8) + *(_QWORD *)v9 > a2
      && *(_BYTE *)(v9 + 56) == 3
      && !EvictAllocationCallback(a4, *(_QWORD **)(v9 + 16)) )
    {
      break;
    }
  }
}
