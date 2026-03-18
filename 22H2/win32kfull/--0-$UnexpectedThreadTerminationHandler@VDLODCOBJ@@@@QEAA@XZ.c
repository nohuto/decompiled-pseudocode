/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00DB850 (GreRectVisible.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     GreDrawStream @ 0x1C00F9710 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     GreGetDIBColorTable @ 0x1C0116BE0 (GreGetDIBColorTable.c)
 *     NtGdiGetDCObject @ 0x1C01190E0 (NtGdiGetDCObject.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119504 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
