VIDMM_DMA_POOL *__fastcall VidMmCreateDmaPool(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        struct VIDMM_DEVICE *a3,
        struct DXGCONTEXT *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  VIDMM_DMA_POOL *v14; // r10
  VIDMM_DMA_POOL *result; // rax

  v14 = (VIDMM_DMA_POOL *)operator new(144LL, 0x39326956u, 64LL);
  result = 0LL;
  if ( v14 )
    return VIDMM_DMA_POOL::VIDMM_DMA_POOL(v14, a1, a2, a3, a4, a6, a7, a8, a9, a10, 0);
  return result;
}
