/*
 * XREFs of ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180133694
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801335E0 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1802493D8 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802498E4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadow::GetBlurForBoundary(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
    return *(float *)(a1 + 392) * 0.5;
  v2 = a2 - 1;
  if ( !v2 )
    return *(float *)(a1 + 392);
  v3 = v2 - 1;
  if ( !v3 )
    return *(float *)(a1 + 392) + *(float *)(a1 + 392);
  if ( v3 == 1 )
    return *(float *)(a1 + 392) * 3.0;
  return 0.0;
}
