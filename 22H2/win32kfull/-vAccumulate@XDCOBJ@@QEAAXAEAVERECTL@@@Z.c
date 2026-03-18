/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C001E16C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreDrawStream @ 0x1C00F9710 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0106B60 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C026F1A0 (DxgkEngAccumD3DPresentBounds.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A8594 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     GreRectangle @ 0x1C02ACBA0 (GreRectangle.c)
 *     NtGdiUpdateColors @ 0x1C02D2A60 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6E10 (NtGdiSetPixel.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  XDCOBJ *v2; // r8
  __int64 v3; // rcx

  v2 = this;
  v3 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v3 + 36) & 0x20) != 0 )
    ERECTL::operator|=(v3 + 1064, a2);
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=(*(_QWORD *)v2 + 1096LL, a2);
}
