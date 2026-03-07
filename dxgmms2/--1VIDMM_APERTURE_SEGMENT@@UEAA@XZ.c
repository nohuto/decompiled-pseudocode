void __fastcall VIDMM_APERTURE_SEGMENT::~VIDMM_APERTURE_SEGMENT(VIDMM_APERTURE_SEGMENT *this)
{
  *(_QWORD *)this = &VIDMM_APERTURE_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_APERTURE_SEGMENT::FreeGuardPages(this);
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
