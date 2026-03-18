/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28
 * Callers:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C0127D20 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C0128640 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C012A7A0 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C012A800 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C013B330 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiEngLockSurface @ 0x1C014DAE0 (NtGdiEngLockSurface.c)
 *     NtGdiEngUnlockSurface @ 0x1C014ED60 (NtGdiEngUnlockSurface.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C01702C0 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B05CC (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02B0AF0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02B0BF0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B0C70 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02B0D00 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02B0D80 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02B0EC0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B1210 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02B12B0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCreateClip @ 0x1C02B1380 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02B1420 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02B14B0 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02B1540 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B2D50 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B2E70 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B30C0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B3200 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B3350 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02B3460 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02B3680 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B37F0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02B39D0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02B3C40 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B3D60 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02B3E80 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02B3EF0 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02B4020 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02B41E0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02B42F0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B4370 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( !a1 )
    return 0LL;
  v1 = (char *)a1 + 40;
  v2 = (char *)*((_QWORD *)a1 + 5);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(v2 - 40);
}
