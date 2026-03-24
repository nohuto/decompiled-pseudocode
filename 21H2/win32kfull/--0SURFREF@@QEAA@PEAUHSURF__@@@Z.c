/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0017FB8 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C001816C (GreEndGdiRenderingToDxSurface.c)
 *     GreGetBitmapBits @ 0x1C001842C (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0018890 (GreSetBitmapBits.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C00659E0 (GreReferenceObject.c)
 *     EngCopyBits @ 0x1C007EB40 (EngCopyBits.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C0082170 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0082A14 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     GreSelectRedirectionBitmap @ 0x1C00834D0 (GreSelectRedirectionBitmap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB5AC (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreSetRedirection @ 0x1C00EFA08 (GreSetRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00F18E8 (RecreateRedirectionBitmap.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00F2BF0 (GreIsReusedDeviceDependentBitmap.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C01049B8 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     NtGdiGetDCforBitmap @ 0x1C010A110 (NtGdiGetDCforBitmap.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C01182CC (GreSetRedirectionBitmapOwner.c)
 *     GreSetDIBitsInternal @ 0x1C0122108 (GreSetDIBitsInternal.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C0158EF0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C015D510 (NtGdiEngCreateBitmap.c)
 *     GreCreateDIBBrush @ 0x1C015DBC8 (GreCreateDIBBrush.c)
 *     NtGdiEngDeleteSurface @ 0x1C015E8A0 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x1C015EA40 (NtGdiEngMarkBandingSurface.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EFF0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016AEEC (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016B364 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283974 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C028DBB0 (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C029ED3C (GreGetBitmapDpiScaleValue.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02A2830 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02A39E0 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     NtGdiMonoBitmap @ 0x1C02B7CB0 (NtGdiMonoBitmap.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02BB150 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDimension @ 0x1C02C1210 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02C12C0 (GreSetBitmapDimension.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C016A05C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
