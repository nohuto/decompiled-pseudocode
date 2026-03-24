/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C0169E3C
 * Callers:
 *     GreDrawStream @ 0x1C00839D0 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0087CC8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GrePolyTextOutW @ 0x1C00AA69C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00AAC5C (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00ADD74 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00B56A0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreGetAppClipBox @ 0x1C00B670C (GreGetAppClipBox.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C014C1A8 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
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
