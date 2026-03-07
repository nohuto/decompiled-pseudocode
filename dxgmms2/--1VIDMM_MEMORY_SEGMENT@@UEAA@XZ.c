void __fastcall VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(VIDMM_MEMORY_SEGMENT *this)
{
  VIDMM_CPU_HOST_APERTURE *v1; // rdi
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v3; // rdx

  v1 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
  *(_QWORD *)this = &VIDMM_MEMORY_SEGMENT::`vftable';
  if ( v1 )
  {
    VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(v1);
    operator delete(v1);
  }
  v3 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)*((_QWORD *)this + 60);
  if ( v3 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL), v3);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
