void __fastcall Convert_MilColorB_sRGB_To_MilColorF_scRGB(unsigned int a1, struct _D3DCOLORVALUE *a2)
{
  a2->a = (float)HIBYTE(a1) / 255.0;
  a2->r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a1] / 255.0;
  a2->g = GammaLUT_sRGB_to_scRGB[BYTE1(a1)] / 255.0;
  a2->b = GammaLUT_sRGB_to_scRGB[BYTE2(a1)] / 255.0;
}
