/*
 * XREFs of ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00E9E94
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00E86E8 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(
        VIDMM_GLOBAL *this,
        struct _D3DDDI_SEGMENTPREFERENCE a2,
        int a3)
{
  unsigned int v3; // r9d
  UINT v4; // eax
  unsigned __int8 v5; // cl
  int v6; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (a2.Value >> v3) & 0x1F;
    if ( v4 )
    {
      v5 = v4 - 1;
      v6 = ~a3;
      if ( _bittest(&v6, v5) )
        break;
    }
    v3 += 6;
    if ( v3 >= 0x1E )
      return 1;
  }
  return 0;
}
