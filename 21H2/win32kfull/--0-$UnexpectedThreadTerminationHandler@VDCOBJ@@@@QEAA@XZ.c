/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C
 * Callers:
 *     GreSetBrushOrg @ 0x1C004562C (GreSetBrushOrg.c)
 *     GreGetLayout @ 0x1C0045FB4 (GreGetLayout.c)
 *     NtGdiAlphaBlend @ 0x1C00851E0 (NtGdiAlphaBlend.c)
 *     GreGetTextFaceW @ 0x1C0097620 (GreGetTextFaceW.c)
 *     NtGdiModifyWorldTransform @ 0x1C0098420 (NtGdiModifyWorldTransform.c)
 *     ulGetFontData @ 0x1C009B3E8 (ulGetFontData.c)
 *     GreGetCharSet @ 0x1C009B770 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009BA88 (GreGetOutlineTextMetricsInternalW.c)
 *     GreExtTextOutRect @ 0x1C00AA21C (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C00AA89C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AAFE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00AE0CC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF5A0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00B29E0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B4D10 (GreStretchBltInternal.c)
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     GreTransformPoints @ 0x1C00FA65C (GreTransformPoints.c)
 *     GreGetBoundsRect @ 0x1C00FC958 (GreGetBoundsRect.c)
 *     NtGdiSetMetaRgn @ 0x1C0100DF0 (NtGdiSetMetaRgn.c)
 *     GreMaskBlt @ 0x1C010979C (GreMaskBlt.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137CD0 (--0DCOBJ@@QEAA@XZ.c)
 *     NtGdiLineTo @ 0x1C01453C0 (NtGdiLineTo.c)
 *     NtGdiSetFontXform @ 0x1C014D8A0 (NtGdiSetFontXform.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027B5FC (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
