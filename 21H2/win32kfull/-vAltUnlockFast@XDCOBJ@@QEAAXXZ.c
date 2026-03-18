/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x1C0090814 (GreConvertMemToRedirectionDC.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0123DD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C015D7F0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C015DC5C (--1MDCOBJA@@QEAA@XZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0274220 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0274500 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C02750C0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0275120 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C02751C0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C02752C0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0275320 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C029DF48 (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C029F7CC (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02B6290 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockFast(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    bDeleteDCInternalEx(v2, 0LL);
}
