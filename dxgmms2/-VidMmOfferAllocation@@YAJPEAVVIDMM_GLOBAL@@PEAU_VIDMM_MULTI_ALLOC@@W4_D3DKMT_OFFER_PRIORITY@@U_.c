__int64 __fastcall VidMmOfferAllocation(
        struct VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  return VIDMM_GLOBAL::OfferAllocation(a1, a2, a3, a4);
}
