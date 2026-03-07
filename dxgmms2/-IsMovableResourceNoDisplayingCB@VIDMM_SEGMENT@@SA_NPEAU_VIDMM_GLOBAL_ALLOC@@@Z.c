bool __fastcall VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(_VIDMM_GLOBAL_ALLOC_NONPAGED **a1)
{
  struct _VIDMM_GLOBAL_ALLOC *v1; // r8

  return !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a1[67])
      && VIDMM_SEGMENT::IsMovableResourceCB(v1);
}
