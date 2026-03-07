void __fastcall VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        VIDMM_EXPORT *this,
        struct _VIDMM_DMA_BUFFER *a2,
        struct _VIDMM_DMA_BUFFER **a3)
{
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, struct _VIDMM_DMA_BUFFER **))(*((_QWORD *)this + 1) + 496LL))(
    a2,
    a3);
}
