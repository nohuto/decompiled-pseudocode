VIDMM_FENCE_STORAGE_PAGE *__fastcall VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(
        VIDMM_FENCE_STORAGE_PAGE *P)
{
  VIDMM_FENCE_STORAGE_PAGE::~VIDMM_FENCE_STORAGE_PAGE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
