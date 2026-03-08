/*
 * XREFs of ?CalcOutlinePosition@CCpuClipAntialiasSink@@QEBAMGAEBUD2D_POINT_2F@@@Z @ 0x18007E5B8
 * Callers:
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 * Callees:
 *     <none>
 */

float __fastcall CCpuClipAntialiasSink::CalcOutlinePosition(
        CCpuClipAntialiasSink *this,
        unsigned __int16 a2,
        const struct D2D_POINT_2F *a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // r9d
  float *v6; // r11
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  __m128i v10; // xmm0

  v3 = *((_QWORD *)this + 5);
  v4 = *(_QWORD *)(v3 + 40);
  v5 = 2 * a2;
  v6 = (float *)(v4 + v5 * (8 * *(_DWORD *)(v3 + 16) + 16));
  LODWORD(v3) = (8 * *(_DWORD *)(v3 + 16) + 16) * (v5 + 2);
  v7 = *(float *)((int)v3 + v4) - *v6;
  v8 = *(float *)((int)v3 + v4 + 4) - v6[1];
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) > COERCE_FLOAT(LODWORD(v8) & _xmm) )
    v9 = (float)(a3->x - *v6) / v7;
  else
    v9 = (float)(a3->y - v6[1]) / v8;
  if ( (float)(v9 - 0.0) <= 0.000081380211 )
  {
    v10 = _mm_cvtsi32_si128(a2);
    return _mm_cvtepi32_ps(v10).m128_f32[0] + 0.0;
  }
  if ( (float)(1.0 - v9) <= 0.000081380211 )
  {
    v10 = _mm_cvtsi32_si128((unsigned __int16)(a2 + 1));
    return _mm_cvtepi32_ps(v10).m128_f32[0] + 0.0;
  }
  return (float)a2 + v9;
}
