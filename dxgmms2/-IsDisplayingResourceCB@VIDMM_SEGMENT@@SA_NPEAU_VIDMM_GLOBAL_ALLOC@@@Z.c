bool __fastcall VIDMM_SEGMENT::IsDisplayingResourceCB(_VIDMM_GLOBAL_ALLOC_NONPAGED **a1)
{
  return _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a1[67]);
}
