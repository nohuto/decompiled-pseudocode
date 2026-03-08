/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C0150220 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C9A30 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02CA6E0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02CA7D0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02CA840 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02CA8C0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02CA930 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02CAA30 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02CAB60 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiEngAlphaBlend @ 0x1C02CAC30 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02CB4E0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02CB570 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C02CBB20 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02CBD60 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02CBE60 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02CBF90 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02CC0E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02CC2F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CC710 (NtGdiEngLineTo.c)
 *     NtGdiEngLockSurface @ 0x1C02CC940 (NtGdiEngLockSurface.c)
 *     NtGdiEngPaint @ 0x1C02CCA50 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CCC00 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C02CE660 (NtGdiEngUnlockSurface.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02CE6C0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CE7E0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CEA40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CEB90 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CECD0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02CEE20 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02CEF40 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02CEFA0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CF2D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CF430 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02CF5C0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CF650 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02CF790 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CF8A0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02CF9B0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02CFA10 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CFA80 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CFEE0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02D00A0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02D01A0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02D02C0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02D0330 (NtGdiXLATEOBJ_iXlate.c)
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
