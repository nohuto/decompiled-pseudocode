/*
 * XREFs of ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F6CCC
 * Callers:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800EF3F0 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x18027C380 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x18027C4E4 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x1802B37CC (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA050 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 */

unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 < 1.0 )
    return GammaLUT_scRGB_to_sRGB[floorf_0((float)(a1 * 3354.0) + 0.5)];
  return -1;
}
