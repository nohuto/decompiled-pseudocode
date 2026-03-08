/*
 * XREFs of ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00EFBD4
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_DMA_POOL::FlushPendingCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2)
{
  if ( *((_DWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 120LL) + 56LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 120LL));
}
