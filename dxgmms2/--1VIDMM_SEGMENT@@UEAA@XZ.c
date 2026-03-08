/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00FC3B0
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0032940 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00F751C (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00F7F14 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00F8FA8 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C002D8CC (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BAC78 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00FD318 (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 */

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
