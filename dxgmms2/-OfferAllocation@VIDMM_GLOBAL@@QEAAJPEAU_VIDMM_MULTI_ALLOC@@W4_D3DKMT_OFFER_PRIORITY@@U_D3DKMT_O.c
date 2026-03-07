int __fastcall VIDMM_GLOBAL::OfferAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  if ( dword_1C007653C == -1 )
  {
    if ( *((_DWORD *)this + 8) >= 0x5022u )
      return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
  }
  else if ( dword_1C007653C )
  {
    return VIDMM_GLOBAL::OfferOneAllocation(this, a2, a3, a4);
  }
  return 0;
}
