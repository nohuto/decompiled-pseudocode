/*
 * XREFs of ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C000D690 (NtGdiGetCharWidthInfo.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiExtEscape @ 0x1C00BB120 (NtGdiExtEscape.c)
 *     NtGdiFontIsLinked @ 0x1C00E3840 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00E42F0 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetWidthTable @ 0x1C010F0B0 (NtGdiGetWidthTable.c)
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C0111840 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetTextCharsetInfo @ 0x1C0111C80 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0112170 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetTextMetricsW @ 0x1C0112560 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetRealizationInfo @ 0x1C0112910 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextExtentExW @ 0x1C0112F00 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetFontData @ 0x1C0113400 (NtGdiGetFontData.c)
 *     GreExtTextOutW @ 0x1C0113604 (GreExtTextOutW.c)
 *     ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C01136A4 (-GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0113BC4 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0114038 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     NtGdiExtTextOutW @ 0x1C01143A0 (NtGdiExtTextOutW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0121580 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetGlyphOutline @ 0x1C0124280 (NtGdiGetGlyphOutline.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0244494 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024FB18 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C027ADF0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x1C027B370 (NtGdiStartDoc.c)
 *     GreGetTextCharsetInfo @ 0x1C0290D68 (GreGetTextCharsetInfo.c)
 *     NtGdiGetStringBitmapW @ 0x1C02A37B0 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetCharWidthW @ 0x1C02C4C30 (NtGdiGetCharWidthW.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02C4E40 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02C54D0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C02C5930 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetKerningPairs @ 0x1C02C5A20 (NtGdiGetKerningPairs.c)
 *     NtGdiGetTextExtent @ 0x1C02C5CE0 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFI @ 0x1C02C5EB0 (NtGdiGetUFI.c)
 *     NtGdiPolyTextOutW @ 0x1C02C6840 (NtGdiPolyTextOutW.c)
 *     NtGdiGetETM @ 0x1C02D79C0 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

EUDCCountRegion *__fastcall EUDCCountRegion::EUDCCountRegion(
        EUDCCountRegion *this,
        struct Gre::Full::SESSION_GLOBALS *a2)
{
  __int64 v3; // rbx

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = a2;
  v3 = *((_QWORD *)a2 + 1661);
  GreAcquireSemaphoreSharedInternal(v3);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v3);
  GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  ++*(_DWORD *)(*((_QWORD *)this + 5) + 13300LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  if ( !*((_DWORD *)this + 8) )
  {
    PushThreadGuardedObject(this, 0LL, _lambda_15f19474c8d9c079cbb9d12a9c9e3b8f_::_lambda_invoker_cdecl_);
    *((_DWORD *)this + 8) = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v3);
  return this;
}
