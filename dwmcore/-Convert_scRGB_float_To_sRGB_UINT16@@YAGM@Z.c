/*
 * XREFs of ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x18027C4E4
 * Callers:
 *     ?GammaConvert_128bppABGR_64bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA100 (-GammaConvert_128bppABGR_64bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F6CCC (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor_0 @ 0x18011771C (floor_0.c)
 */

__int64 __fastcall Convert_scRGB_float_To_sRGB_UINT16(float a1)
{
  double v1; // xmm6_8
  __int64 v3; // rbx
  __int64 v4; // rcx

  v1 = a1 * 255.0;
  if ( v1 <= 0.0 )
    return 0LL;
  if ( v1 >= 255.0 )
    return 0xFFFFLL;
  v3 = Convert_scRGB_Channel_To_sRGB_Byte(a1);
  if ( (unsigned int)v3 >= 0xFE )
    v3 = 254LL;
  do
  {
    if ( GammaLUT_sRGB_to_scRGB[v3] <= v1 )
      break;
    v3 = (unsigned int)(v3 - 1);
  }
  while ( (unsigned int)v3 <= 0xFE );
  if ( (unsigned int)v3 >= 0xFE )
    v3 = 254LL;
  do
  {
    v4 = (unsigned int)(v3 + 1);
    if ( v1 < GammaLUT_sRGB_to_scRGB[v4] )
      break;
    v3 = (unsigned int)v4;
  }
  while ( (unsigned int)v4 <= 0xFE );
  if ( (unsigned int)v3 >= 0xFE )
    v3 = 254LL;
  return (unsigned int)(65793
                      * (((_DWORD)v3 << 8)
                       + (int)floor_0(
                                (v1 - GammaLUT_sRGB_to_scRGB[v3])
                              / (float)(GammaLUT_sRGB_to_scRGB[(unsigned int)(v3 + 1)] - GammaLUT_sRGB_to_scRGB[v3])
                              * 256.0
                              + 0.5))) >> 16;
}
