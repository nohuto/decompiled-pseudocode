struct _D3DCOLORVALUE *__fastcall CSystemMemoryBitmap::GetPixelColor(
        CSystemMemoryBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v3; // rbx
  int v4; // r11d
  UINT32 y; // eax
  unsigned __int8 *v6; // r8
  __int64 v7; // rax
  float v8; // xmm0_4
  __int64 v9; // rax

  v3 = *((_QWORD *)this + 1);
  *(_OWORD *)&retstr->r = 0LL;
  if ( v3 )
  {
    v4 = *((_DWORD *)this - 8);
    if ( (unsigned int)(v4 - 87) <= 1 && a3->x < *((_DWORD *)this - 12) )
    {
      y = a3->y;
      if ( y < *((_DWORD *)this - 11) )
      {
        v6 = (unsigned __int8 *)(v3 + *((_DWORD *)this + 4) * y + 4 * a3->x);
        v7 = v6[1];
        retstr->b = GammaLUT_sRGB_to_scRGB[*v6] / 255.0;
        v8 = GammaLUT_sRGB_to_scRGB[v7];
        v9 = v6[2];
        retstr->g = v8 / 255.0;
        retstr->r = GammaLUT_sRGB_to_scRGB[v9] / 255.0;
        if ( v4 != 87 || *((_DWORD *)this - 7) == 3 )
          retstr->a = 1.0;
        else
          retstr->a = (float)v6[3] / 255.0;
      }
    }
  }
  return retstr;
}
