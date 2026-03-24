/*
 * XREFs of VidMmCreateDmaPool @ 0x1C00168E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C008C36C (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z.c)
 */

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

  v14 = (VIDMM_DMA_POOL *)operator new[](0x90uLL, 0x39326956u, (POOL_TYPE)512);
  result = 0LL;
  if ( v14 )
    return VIDMM_DMA_POOL::VIDMM_DMA_POOL(v14, a1, a2, a3, a4, a6, a7, a8, a9, a10, 0);
  return result;
}
