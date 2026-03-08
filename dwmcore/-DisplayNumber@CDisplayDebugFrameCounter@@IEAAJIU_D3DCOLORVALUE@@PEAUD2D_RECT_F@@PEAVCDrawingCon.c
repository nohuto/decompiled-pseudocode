/*
 * XREFs of ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801EEE74
 * Callers:
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801EEF14 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     swprintf_s @ 0x18010F628 (swprintf_s.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D25A4 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayNumber(
        struct IDWriteTextFormat **this,
        unsigned int a2,
        struct _D3DCOLORVALUE *a3,
        struct D2D_RECT_F *a4,
        struct CDrawingContext *a5)
{
  struct _D3DCOLORVALUE v5; // xmm0
  __int64 v8; // r8
  struct _D3DCOLORVALUE v10; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  *(struct _D3DCOLORVALUE *)&v5.r = *(struct _D3DCOLORVALUE *)&a3->r;
  *(_QWORD *)Buffer = 0LL;
  *(struct _D3DCOLORVALUE *)&v10.r = *(struct _D3DCOLORVALUE *)&v5.r;
  swprintf_s(Buffer, 4uLL, L"%03d", a2 % 0x3E8);
  return CDrawingContext::DrawTextW(a5, Buffer, v8, this[2], a4, &v10);
}
