/*
 * XREFs of ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C00E0F5C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001310 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011AEC (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2)
{
  struct _LIST_ENTRY *v3; // rdx
  unsigned int v4; // edx

  v3 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 4);
  if ( v3 )
  {
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(this, v3);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1), v4);
    operator delete(*((void **)a2 + 4));
    *((_QWORD *)a2 + 4) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
