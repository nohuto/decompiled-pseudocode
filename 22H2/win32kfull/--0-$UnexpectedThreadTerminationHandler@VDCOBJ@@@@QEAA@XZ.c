/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     NtGdiModifyWorldTransform @ 0x1C0017DB0 (NtGdiModifyWorldTransform.c)
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     GreSetStretchBltMode @ 0x1C00276B0 (GreSetStretchBltMode.c)
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     GrePolyPatBlt @ 0x1C0029770 (GrePolyPatBlt.c)
 *     DrawEdge @ 0x1C002995C (DrawEdge.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     GreSaveDCInternal @ 0x1C0092580 (GreSaveDCInternal.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00DB850 (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C00DBC80 (GreExcludeClipRect.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F4380 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreDrawStream @ 0x1C00F9710 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GreGetTextFaceW @ 0x1C0110B2C (GreGetTextFaceW.c)
 *     GreSetBkMode @ 0x1C0115C14 (GreSetBkMode.c)
 *     GreGetDIBColorTable @ 0x1C0116BE0 (GreGetDIBColorTable.c)
 *     NtGdiGetDCObject @ 0x1C01190E0 (NtGdiGetDCObject.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119504 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     DrawFrameControl @ 0x1C01197C0 (DrawFrameControl.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011B878 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     GreSelectFont @ 0x1C011BD80 (GreSelectFont.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0131300 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01366E0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0274E04 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0276684 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
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
