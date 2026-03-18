/*
 * XREFs of ??1SURFREF@@QEAA@XZ @ 0x1C0027A2C
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0091B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C01073E0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0129D50 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C012C190 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C014DC90 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C014E980 (NtGdiEngDeleteSurface.c)
 *     EngMarkBandingSurface @ 0x1C014F130 (EngMarkBandingSurface.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall SURFREF::~SURFREF(SURFREF *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this);
}
