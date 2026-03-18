/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C015D080 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C7270 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02C8030 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02C8120 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02C8190 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02C8210 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02C8280 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02C8380 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02C84B0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiEngAlphaBlend @ 0x1C02C8580 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02C8E50 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02C8EE0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C02C8FB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C02C9480 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02C96C0 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02C97C0 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02C98F0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02C9A40 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02C9C50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CA140 (NtGdiEngLineTo.c)
 *     NtGdiEngLockSurface @ 0x1C02CA430 (NtGdiEngLockSurface.c)
 *     NtGdiEngPaint @ 0x1C02CA560 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CA710 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CB750 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CBBC0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CBFB0 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CC410 (NtGdiEngTransparentBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C02CC690 (NtGdiEngUnlockSurface.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02CC6F0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CC810 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CCA70 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CCBC0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CCD00 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02CCE50 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02CCF60 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02CCFC0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CD2F0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CD450 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02CD5E0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CD670 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02CD7B0 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CD8C0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02CD9D0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02CDA30 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CDAA0 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CDF20 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02CE0E0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02CE1E0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02CE300 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02CE370 (NtGdiXLATEOBJ_iXlate.c)
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
