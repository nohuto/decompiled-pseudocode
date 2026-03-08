/*
 * XREFs of ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C007C8E4
 * Callers:
 *     ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C007CE48 (-CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::CalcTransformChange(float *a1, float *a2)
{
  float v2; // xmm5_4
  __int64 result; // rax
  float v4; // xmm3_4

  v2 = a1[1];
  result = 3LL;
  if ( v2 == a2[1] )
  {
    v4 = a1[2];
    if ( v4 == a2[2] && a1[4] == a2[4] && a1[5] == a2[5] )
    {
      if ( *a1 == *a2 && a1[3] == a2[3] )
      {
        return 1LL;
      }
      else if ( *a1 > 0.0 && *a2 > 0.0 && a1[3] > 0.0 && a2[3] > 0.0 && v2 == 0.0 && v4 == 0.0 )
      {
        return 2LL;
      }
    }
  }
  return result;
}
