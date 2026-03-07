__int64 __fastcall VidMmCreateContextAllocation(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  struct _DXGK_SEGMENTBANKPREFERENCE v15; // [rsp+58h] [rbp-20h]

  return VIDMM_GLOBAL::CreateContextAllocation(a1, a3, a2, a4, a5, a6, a7, a8, a9, a10, a11, v15, a13, a14);
}
