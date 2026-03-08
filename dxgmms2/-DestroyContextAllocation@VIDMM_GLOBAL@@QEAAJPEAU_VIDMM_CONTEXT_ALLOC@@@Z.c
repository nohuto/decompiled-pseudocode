/*
 * XREFs of ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00B3AD0
 * Callers:
 *     VidMmDestroyContextAllocation @ 0x1C00177F0 (VidMmDestroyContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00A25B0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     VidSchRemoveContextAllocation @ 0x1C00B3B54 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DestroyContextAllocation(VIDMM_GLOBAL *this, struct _VIDMM_CONTEXT_ALLOC *a2)
{
  struct _KEVENT *v3; // rbx
  struct VIDMM_DEVICE *Flink; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v5; // rdi
  __int64 v7; // rcx

  if ( a2 )
  {
    v3 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
    Flink = (struct VIDMM_DEVICE *)v3->Header.WaitListHead.Flink;
    v5 = **(struct _VIDMM_GLOBAL_ALLOC ***)&v3->Header.Lock;
    VidSchRemoveContextAllocation(a2);
    VIDMM_GLOBAL::CloseOneAllocation(this, v3, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)this, Flink, v5, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 2395LL);
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
