void __fastcall VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(VIDMM_SYSMEM_SEGMENT *this)
{
  *(_QWORD *)this = &VIDMM_SYSMEM_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
