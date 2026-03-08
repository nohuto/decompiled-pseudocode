/*
 * XREFs of ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0097CD8
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0096528 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00C48C0 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::AccessZeroTransition(VIDMM_RECYCLE_RANGE *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 20);
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( !v2 || v2 == 2 )
      *((_DWORD *)this + 20) = 2;
  }
  else if ( dword_1C0076490 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
}
