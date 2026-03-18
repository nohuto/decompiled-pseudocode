/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00A6820
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00A672C (GreConvertMemToRedirectionDC.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C015A0F0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C015A1E0 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C015A330 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C026F1A0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngIsRedirectionDC @ 0x1C026FDC0 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C02A8B7C (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C02ADA74 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013E478 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 16);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v4, 0LL);
  return this;
}
