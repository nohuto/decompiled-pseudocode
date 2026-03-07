// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  struct _MDL *v5; // rcx
  VIDMM_LINEAR_POOL *v6; // rcx

  v3 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v3 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this, a2, a3);
  if ( this[17] != this + 17 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 12LL, this, 0LL, 0LL);
  }
  operator delete(this[31]);
  VIDMM_SEGMENT::FreeForwardProgressMdl((VIDMM_SEGMENT *)this);
  v5 = (struct _MDL *)this[34];
  if ( v5 )
  {
    MmFreePagesFromMdl(v5);
    ExFreePoolWithTag(this[34], 0);
    this[34] = 0LL;
  }
  v6 = (VIDMM_LINEAR_POOL *)this[19];
  if ( v6 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v6);
}
