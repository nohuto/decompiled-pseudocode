/*
 * XREFs of ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C00AB90C
 * Callers:
 *     ?VidMmWaitOnAllocationDmaReferences@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0012650 (-VidMmWaitOnAllocationDmaReferences@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00878CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB984 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00E3424 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationDmaReferences(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // edi
  __int64 v9; // rcx

  v4 = 0;
  if ( (a4 & 4) != 0 )
  {
    VIDMM_GLOBAL::WaitOnAllocForceSync(this, a2);
    if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
      KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  }
  else if ( a2 )
  {
    if ( (a4 & 1) != 0 )
      VIDMM_GLOBAL::FlushPendingAllocationAccess(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2, a2, 1u);
    else
      VIDMM_GLOBAL::WaitOnAllocForceSync(this, a2);
    if ( (a4 & 2) != 0 )
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2);
  }
  else
  {
    WdLogSingleEntry1(1LL, 0LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return (unsigned int)-1073741811;
  }
  return v4;
}
