/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00E0BDC
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00E4730 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001BEAC (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0032FF4 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C00332B4 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00335C8 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3,
        struct _MDL **a4)
{
  __int64 *v4; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct _MDL *v9; // rax
  __int64 v10; // rcx
  int v11; // edi

  v4 = *a2;
  v7 = **a2;
  if ( VIDMM_CPU_HOST_APERTURE::ReclaimRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v8);
  }
  else
  {
    v11 = VIDMM_CPU_HOST_APERTURE::AcquireRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      return (unsigned int)v11;
    }
    v11 = VIDMM_CPU_HOST_APERTURE::MapRange((VIDMM_SEGMENT **)a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      goto LABEL_6;
    }
  }
  v9 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
         a3,
         (void *)v4[2],
         (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 496),
         *(_QWORD *)(v7 + 128),
         *(_QWORD *)(v7 + 16));
  if ( !v9 )
  {
    WdLogSingleEntry1(1LL, 24108LL);
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    v11 = -1073741801;
LABEL_6:
    *a4 = 0LL;
    return (unsigned int)v11;
  }
  *a4 = v9;
  return 0LL;
}
