/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0082FC8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C001EE10 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C00659E0 (GreReferenceObject.c)
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     GreGetDIBitsInternal @ 0x1C0082A14 (GreGetDIBitsInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CFD3C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011ECA0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     NtGdiEngCreateBitmap @ 0x1C015D510 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C015E8A0 (NtGdiEngDeleteSurface.c)
 *     EngMarkBandingSurface @ 0x1C015EB10 (EngMarkBandingSurface.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EFF0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016AEEC (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016B450 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    DEC_SHARE_REF_CNT(v3, a2);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
