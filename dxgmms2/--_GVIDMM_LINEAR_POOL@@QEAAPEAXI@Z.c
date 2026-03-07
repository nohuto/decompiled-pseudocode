VIDMM_LINEAR_POOL *__fastcall VIDMM_LINEAR_POOL::`scalar deleting destructor'(VIDMM_LINEAR_POOL *P)
{
  VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
