VIDMM_APERTURE_SEGMENT *__fastcall VIDMM_APERTURE_SEGMENT::`scalar deleting destructor'(
        VIDMM_APERTURE_SEGMENT *P,
        char a2)
{
  VIDMM_APERTURE_SEGMENT::~VIDMM_APERTURE_SEGMENT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
