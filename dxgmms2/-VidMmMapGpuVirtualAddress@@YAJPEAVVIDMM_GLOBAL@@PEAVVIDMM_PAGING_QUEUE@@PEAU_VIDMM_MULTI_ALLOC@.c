/*
 * XREFs of ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0001780
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C008EFF0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

__int64 __fastcall VidMmMapGpuVirtualAddress(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  return VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(a1, a2, a3, a4, a5, a6);
}
