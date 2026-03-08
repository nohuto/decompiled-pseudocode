/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0007358
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006F30 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00DC7AC (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C014D3B0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C014D450 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C014D4A0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C014D550 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngLockVisRgn @ 0x1C014D600 (DxgkEngLockVisRgn.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0271C50 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngIsRedirectionDC @ 0x1C02727E0 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02AB190 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02AFFC4 (GreConvertRedirectionToMemDC.c)
 *     GreSetPaletteEntries @ 0x1C02D3E00 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx(v3, a2, 0LL);
  return this;
}
