/*
 * XREFs of ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A140
 * Callers:
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0089FF0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     ?PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A198 (-PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx

  if ( a3 )
  {
    v3 = a2;
    if ( (int)_VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + a2 + 143), a3) < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v6);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 1u, 0LL, 0LL, 0, 0);
      _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + v3 + 143), a3);
    }
  }
}
