/*
 * XREFs of ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800EF3F0
 * Callers:
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800EF28C (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUM.c)
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1802B37CC (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F6CCC (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_MilColorF_scRGB_To_MilColorF_sRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  v4 = fmaxf(a2->a, 0.0);
  *(struct _D3DCOLORVALUE *)&retstr->r = *(const struct _D3DCOLORVALUE *)&a2->r;
  retstr->a = fminf(1.0, v4);
  retstr->r = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->r) / 255.0;
  retstr->g = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->g) / 255.0;
  v5 = _mm_cvtsi32_si128(Convert_scRGB_Channel_To_sRGB_Byte(a2->b));
  result = retstr;
  retstr->b = _mm_cvtepi32_ps(v5).m128_f32[0] / 255.0;
  return result;
}
