unsigned __int64 __fastcall VIDMM_GLOBAL::QueryAllocationSizeInSegment(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2)
{
  return *(_QWORD *)(**(_QWORD **)a2 + 16LL);
}
