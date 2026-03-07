bool __fastcall VidMmiIsSaveableResource(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a1);
}
