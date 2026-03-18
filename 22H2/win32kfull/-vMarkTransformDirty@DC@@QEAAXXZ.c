/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     NtGdiModifyWorldTransform @ 0x1C0017DB0 (NtGdiModifyWorldTransform.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     GrePolyPatBlt @ 0x1C0029770 (GrePolyPatBlt.c)
 *     DrawEdge @ 0x1C002995C (DrawEdge.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiSelectBitmap @ 0x1C008C7F0 (NtGdiSelectBitmap.c)
 *     GreSaveDCInternal @ 0x1C0092580 (GreSaveDCInternal.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F4380 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreDrawStream @ 0x1C00F9710 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
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
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C011CA30 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01366E0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C02CF9D4 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
