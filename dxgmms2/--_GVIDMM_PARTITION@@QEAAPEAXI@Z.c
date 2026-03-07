char **__fastcall VIDMM_PARTITION::`scalar deleting destructor'(char **P)
{
  VIDMM_PARTITION::~VIDMM_PARTITION(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
