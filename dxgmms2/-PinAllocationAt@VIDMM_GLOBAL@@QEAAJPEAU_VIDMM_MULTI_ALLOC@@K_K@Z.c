__int64 __fastcall VIDMM_GLOBAL::PinAllocationAt(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        int a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, 0LL, a3, a4, 0LL);
}
