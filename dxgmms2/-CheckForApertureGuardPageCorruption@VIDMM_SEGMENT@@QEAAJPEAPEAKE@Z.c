__int64 __fastcall VIDMM_SEGMENT::CheckForApertureGuardPageCorruption(VIDMM_SEGMENT *this, unsigned int **a2, char a3)
{
  if ( (*((_DWORD *)this + 20) & 1) != 0 )
    return VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(this, a2, a3);
  else
    return 0LL;
}
