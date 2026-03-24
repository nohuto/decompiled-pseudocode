/*
 * XREFs of ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x180161EB4
 * Callers:
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180161F48 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     swprintf_s @ 0x1800E7FD0 (swprintf_s.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180176CF8 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayNumber(
        struct IDWriteTextFormat **this,
        unsigned int a2,
        struct _D3DCOLORVALUE *a3,
        struct D2D_RECT_F *a4,
        struct CDrawingContext *a5)
{
  unsigned int v8; // r8d
  wchar_t Buffer[4]; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)Buffer = 0LL;
  swprintf_s(Buffer, 4uLL, L"%03d", a2 % 0x3E8);
  return CDrawingContext::DrawTextW(a5, Buffer, v8, this[4], a4, a3);
}
