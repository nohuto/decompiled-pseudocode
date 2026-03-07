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
