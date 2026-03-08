/*
 * XREFs of ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C0029530
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        VIDMM_EXPORT *this,
        struct _VIDMM_DMA_BUFFER *a2,
        struct _VIDMM_DMA_BUFFER **a3)
{
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, struct _VIDMM_DMA_BUFFER **))(*((_QWORD *)this + 1) + 496LL))(
    a2,
    a3);
}
