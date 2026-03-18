/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338
 * Callers:
 *     NtGdiGetDCforBitmap @ 0x1C0026650 (NtGdiGetDCforBitmap.c)
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0026D68 (GreReferenceObject.c)
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 *     EngCopyBits @ 0x1C0028BB0 (EngCopyBits.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C008EE28 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreSetRedirection @ 0x1C00B42C4 (GreSetRedirection.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00B8138 (GreIsReusedDeviceDependentBitmap.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00CBDF4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetBitmapBits @ 0x1C00E67A4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00E6BE0 (GreSetBitmapBits.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00F3208 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C00FF9EC (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0100F28 (GreBeginGdiRenderingToDxSurface.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C0105B50 (GreSetRedirectionBitmapOwner.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C012C190 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     GreSetDIBitsInternal @ 0x1C014A310 (GreSetDIBitsInternal.c)
 *     NtGdiEngCreateBitmap @ 0x1C014DC90 (NtGdiEngCreateBitmap.c)
 *     GreCreateDIBBrush @ 0x1C014E4E8 (GreCreateDIBBrush.c)
 *     NtGdiEngDeleteSurface @ 0x1C014E980 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x1C014F060 (NtGdiEngMarkBandingSurface.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155820 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C016F950 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C016FB2C (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C029D640 (GreGetBitmapDpiScaleValue.c)
 *     NtGdiMonoBitmap @ 0x1C02B5DC0 (NtGdiMonoBitmap.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02B93C0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B9570 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDimension @ 0x1C02BFBA8 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02BFC5C (GreSetBitmapDimension.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
