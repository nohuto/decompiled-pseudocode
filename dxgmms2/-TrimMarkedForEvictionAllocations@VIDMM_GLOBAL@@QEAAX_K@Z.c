/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00E8104
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C0100088 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
    if ( (*(_DWORD *)(v4 + 80) & 0x1001) != 0 && *(_QWORD *)(v4 + 176) != v4 + 176 )
    {
      VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_SEGMENT *)v4, &v5);
      if ( !v5 )
        break;
    }
  }
}
