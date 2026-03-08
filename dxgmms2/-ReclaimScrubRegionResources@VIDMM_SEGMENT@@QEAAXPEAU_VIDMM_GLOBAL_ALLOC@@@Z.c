/*
 * XREFs of ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FF0DC
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00FF06C (-ReclaimAllocationForVPRCallback@@YAEPEAX0@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimScrubRegionResources(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // r9

  v2 = *((_QWORD *)this + 52);
  v3 = *((_QWORD *)this + 19);
  v4 = v2 - (~*((_QWORD *)this + 50) & (*((_QWORD *)this + 50) + *((_QWORD *)a2 + 2)));
  v5 = *(_QWORD *)(v3 + 80);
  v6 = v3 + 72;
  while ( v5 != v6 )
  {
    v7 = (unsigned __int64 *)(v5 - 40);
    v5 = *(_QWORD *)(v5 + 8);
    v8 = *v7;
    if ( *v7 >= v2 || v8 + v7[1] <= v4 )
    {
      if ( v8 + v7[1] <= v4 )
        return;
    }
    else if ( *((_BYTE *)v7 + 56) == 4 && !ReclaimAllocationForVPRCallback(0LL, (_QWORD *)v7[2]) )
    {
      return;
    }
  }
}
