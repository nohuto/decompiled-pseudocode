/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0009364 (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00097F8 (GreBeginGdiRenderingToDxSurface.c)
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     NtGdiGetDCforBitmap @ 0x1C002DB90 (NtGdiGetDCforBitmap.c)
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0057ED0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreReferenceObject @ 0x1C0079EC8 (GreReferenceObject.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z @ 0x1C0086C68 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C008E90C (GreIsReusedDeviceDependentBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C008E968 (RecreateRedirectionBitmap.c)
 *     GreSetBitmapContentOwner @ 0x1C00A8F1C (GreSetBitmapContentOwner.c)
 *     GreSetRedirection @ 0x1C00C830C (GreSetRedirection.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1C00E0D68 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01359C8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C013EE84 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C015BB30 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C015BD0A (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026BA54 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02815EC (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02A7D84 (GreGetBitmapDpiScaleValue.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1C02ADF94 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02B9F50 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C02C9260 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C02C9840 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x1C02CA490 (NtGdiEngMarkBandingSurface.c)
 *     GreCreateDIBBrush @ 0x1C02D0F20 (GreCreateDIBBrush.c)
 *     NtGdiMonoBitmap @ 0x1C02D13F0 (NtGdiMonoBitmap.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D53A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02D5620 (NtGdiGetColorSpaceforBitmap.c)
 *     ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DDF50 (-GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX.c)
 *     GreGetBitmapDimension @ 0x1C02DE5FC (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02DE71C (GreSetBitmapDimension.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
