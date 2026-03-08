/*
 * XREFs of ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18027C380
 * Callers:
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x18026402C (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x180264124 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F6CCC (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  __m128i v4; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  retstr->r = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->r) / 255.0;
  retstr->g = (float)Convert_scRGB_Channel_To_sRGB_Byte(a2->g) / 255.0;
  v4 = _mm_cvtsi32_si128(Convert_scRGB_Channel_To_sRGB_Byte(a2->b));
  retstr->a = a2->a;
  result = retstr;
  retstr->b = _mm_cvtepi32_ps(v4).m128_f32[0] / 255.0;
  return result;
}
