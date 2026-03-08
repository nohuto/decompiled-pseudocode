/*
 * XREFs of ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18026DE6C
 * Callers:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026C8DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x1802A377C (-CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MM.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixMultiply(double a1, __m128 *a2)
{
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 170), a2[2]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0), *a2)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), a2[3]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 85), a2[1])));
}
