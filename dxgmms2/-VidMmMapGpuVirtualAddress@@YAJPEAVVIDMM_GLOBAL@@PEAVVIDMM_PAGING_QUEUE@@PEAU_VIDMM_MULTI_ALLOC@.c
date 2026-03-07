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
