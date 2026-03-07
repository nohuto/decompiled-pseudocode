struct _D3DCOLORVALUE *__fastcall Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  int v4; // ecx
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  int v7; // ecx
  unsigned __int8 v8; // al
  int v9; // eax
  float v10; // xmm0_4
  struct _D3DCOLORVALUE *result; // rax

  v4 = (int)floorf_0((float)(a2->r * 255.0) + 0.5);
  v5 = -1;
  if ( v4 <= 255 )
  {
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
  }
  else
  {
    v6 = -1;
  }
  retstr->r = GammaLUT_sRGB_to_scRGB[v6] / 255.0;
  v7 = (int)floorf_0((float)(a2->g * 255.0) + 0.5);
  if ( v7 <= 255 )
  {
    v8 = 0;
    if ( v7 >= 0 )
      v8 = v7;
  }
  else
  {
    v8 = -1;
  }
  retstr->g = GammaLUT_sRGB_to_scRGB[v8] / 255.0;
  v9 = (int)floorf_0((float)(a2->b * 255.0) + 0.5);
  if ( v9 <= 255 )
  {
    v5 = 0;
    if ( v9 >= 0 )
      v5 = v9;
  }
  v10 = GammaLUT_sRGB_to_scRGB[v5];
  retstr->a = a2->a;
  result = retstr;
  retstr->b = v10 / 255.0;
  return result;
}
