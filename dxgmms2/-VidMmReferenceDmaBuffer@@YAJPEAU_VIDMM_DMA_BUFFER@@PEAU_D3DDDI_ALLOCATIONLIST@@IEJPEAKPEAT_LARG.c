/*
 * XREFs of ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0001E10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0098120 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 */

__int64 __fastcall VidMmReferenceDmaBuffer(
        VIDMM_GLOBAL ***a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        unsigned int a3,
        char a4,
        int a5,
        unsigned int *a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        struct VIDMM_ALLOC **a9,
        struct _VIDMM_PRIMARIES_REFERENCES *a10,
        struct DXGALLOCATION **a11)
{
  return VIDMM_GLOBAL::ReferenceDmaBuffer(
           *a1[17],
           (struct _VIDMM_DMA_BUFFER *)a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
