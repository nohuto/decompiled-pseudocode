/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18007D340
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049C3C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform(__int64 a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 *result; // rax
  __m128 v5; // xmm0
  __m128 v6; // xmm11
  __m128 v7; // xmm6
  __m128 v8; // xmm13
  __m128 v9; // xmm9

  v3 = a3[1];
  result = a2;
  v5 = *a3;
  v6 = a3[3];
  v7 = a3[2];
  v8 = (__m128)(unsigned int)FLOAT_1_0;
  v9 = (__m128)(unsigned int)FLOAT_1_0;
  v9.m128_f32[0] = 1.0 / *(float *)(a1 + 92);
  v8.m128_f32[0] = 1.0 / *(float *)(a1 + 96);
  a2[4].m128_i32[0] = 0;
  a2[2] = v7;
  a2[3] = v6;
  *a2 = _mm_mul_ps(v5, _mm_shuffle_ps(v9, v9, 0));
  a2[1] = _mm_mul_ps(v3, _mm_shuffle_ps(v8, v8, 0));
  return result;
}
