VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(VIDMM_RECYCLE_BLOCK *P)
{
  VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
