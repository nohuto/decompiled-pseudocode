/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC
 * Callers:
 *     GreSetBrushOrg @ 0x1C004558C (GreSetBrushOrg.c)
 *     GreGetLayout @ 0x1C0045F14 (GreGetLayout.c)
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     GreGetTextFaceW @ 0x1C0097590 (GreGetTextFaceW.c)
 *     NtGdiModifyWorldTransform @ 0x1C0098390 (NtGdiModifyWorldTransform.c)
 *     ulGetFontData @ 0x1C009B358 (ulGetFontData.c)
 *     GreGetCharSet @ 0x1C009B6E0 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009B9F8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreExtTextOutRect @ 0x1C00AA01C (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C00AA69C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAC5C (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00B2680 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreGetAppClipBox @ 0x1C00B670C (GreGetAppClipBox.c)
 *     GreTransformPoints @ 0x1C00FA30C (GreTransformPoints.c)
 *     GreGetBoundsRect @ 0x1C00FC608 (GreGetBoundsRect.c)
 *     NtGdiSetMetaRgn @ 0x1C0100AA0 (NtGdiSetMetaRgn.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137920 (--0DCOBJ@@QEAA@XZ.c)
 *     NtGdiLineTo @ 0x1C0144E10 (NtGdiLineTo.c)
 *     NtGdiSetFontXform @ 0x1C014D2F0 (NtGdiSetFontXform.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027AFCC (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
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
