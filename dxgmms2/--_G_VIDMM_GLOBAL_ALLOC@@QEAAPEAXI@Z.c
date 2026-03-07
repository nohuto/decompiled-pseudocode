_VIDMM_GLOBAL_ALLOC *__fastcall _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(_VIDMM_GLOBAL_ALLOC *P)
{
  _VIDMM_GLOBAL_ALLOC::~_VIDMM_GLOBAL_ALLOC(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
