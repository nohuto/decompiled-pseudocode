/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828
 * Callers:
 *     GreHintDCWnd @ 0x1C0097030 (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1C0097150 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00DC7AC (GreConvertMemToRedirectionDC.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C012FB74 (--1DCOBJA@@QEAA@XZ.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C014D3B0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetDC @ 0x1C014D4A0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C014D550 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngLockVisRgn @ 0x1C014D600 (DxgkEngLockVisRgn.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0271C50 (DxgkEngAccumD3DPresentBounds.c)
 *     GreWatchVisRgnChange @ 0x1C02AB190 (GreWatchVisRgnChange.c)
 *     GreCancelDC @ 0x1C02AC7D8 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02AFFC4 (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02D3E00 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
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
    GrepDeleteDC(v2, 0x2000000LL);
}
