/*
 * XREFs of ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00E3CC8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00AEEA0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00E86E8 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT *__fastcall VIDMM_GLOBAL::GetMostPreferredSegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DDDI_SEGMENTPREFERENCE a3,
        bool *a4)
{
  __int64 v4; // r10
  UINT v5; // r8d

  v4 = 0LL;
  if ( a3.0 )
  {
    if ( (*(_BYTE *)&a3.0 & 0x1F) != 0 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 464)
                     + 8LL * ((*(_BYTE *)&a3.0 & 0x1Fu) + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28) - 1));
      *a4 = *(_BYTE *)(v4 + 80) & 1;
    }
    else
    {
      v5 = (a3.Value >> 6) & 0x1F;
      if ( v5 )
        return *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                        + 8LL * (v5 + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28) - 1));
    }
  }
  return (struct VIDMM_SEGMENT *)v4;
}
