/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0082F38
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C001ED70 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     GreDereferenceObject @ 0x1C004B8AC (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0065940 (GreReferenceObject.c)
 *     EngCopyBits @ 0x1C007EAA0 (EngCopyBits.c)
 *     GreGetDIBitsInternal @ 0x1C0082984 (GreGetDIBitsInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF9EC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     RecreateRedirectionBitmap @ 0x1C00F1598 (RecreateRedirectionBitmap.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011E920 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngCreateBitmap @ 0x1C015CF30 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C015DBE0 (NtGdiEngDeleteSurface.c)
 *     EngMarkBandingSurface @ 0x1C015E360 (EngMarkBandingSurface.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015E840 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016A68C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016AB40 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     DxgkEngBltViaGDI @ 0x1C0276750 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    DEC_SHARE_REF_CNT(v3, a2);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
