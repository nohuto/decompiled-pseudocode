/*
 * XREFs of ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E38C0
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093BA0 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C008AEC0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00A7814 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00A7930 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceUncommitVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_ALLOC *a3)
{
  __int64 v5; // rbp
  int v6; // esi

  v5 = **(_QWORD **)a3;
  if ( *((_DWORD *)this + 2) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    VIDMM_GLOBAL::StartPreparation((__int64)this, *(_DWORD *)(v5 + 68) & 0x3F, (__int64)a2, (__int64)a3, 218);
  }
  VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, a3);
  if ( !v6 )
    VIDMM_GLOBAL::EndPreparation(this, *(_DWORD *)(v5 + 68) & 0x3F, 0LL, 0, 0LL, 0LL);
}
