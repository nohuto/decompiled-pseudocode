void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  VIDMM_RECYCLE_MULTIRANGE::Destroy(a2);
  VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
    this,
    *((struct _LOOKASIDE_LIST_EX **)this + 165),
    a2,
    (void **)this + 207,
    (unsigned int *)this + 405);
}
