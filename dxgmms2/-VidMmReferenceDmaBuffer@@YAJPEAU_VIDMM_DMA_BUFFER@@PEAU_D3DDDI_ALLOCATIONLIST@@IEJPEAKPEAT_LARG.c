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
