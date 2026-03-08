/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032984
 * Callers:
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x1C00EBD44 (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032524 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::CheckForApertureGuardPageCorruption(VIDMM_SEGMENT *this, unsigned int **a2, char a3)
{
  if ( (*((_DWORD *)this + 20) & 1) != 0 )
    return VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(this, a2, a3);
  else
    return 0LL;
}
