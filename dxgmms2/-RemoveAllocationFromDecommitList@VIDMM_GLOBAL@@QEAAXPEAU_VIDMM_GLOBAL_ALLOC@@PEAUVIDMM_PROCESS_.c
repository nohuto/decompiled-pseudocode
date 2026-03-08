/*
 * XREFs of ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00AF5E8
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AF5B8 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS_ADAPTER_INFO *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *i; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 32LL);
  v5 = v4 + 464;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 464, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 480));
  v6 = (_QWORD *)(v4 + 488);
  v7 = (_QWORD *)((char *)a2 + 440);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v11 = (_QWORD *)i[2];
    if ( v11 == v7 )
      i[2] = *v11;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v9 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v7 = 0LL;
}
