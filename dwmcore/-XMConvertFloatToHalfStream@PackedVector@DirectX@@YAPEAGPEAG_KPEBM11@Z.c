/*
 * XREFs of ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z @ 0x180205B94
 * Callers:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180205A78 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800068D8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 */

DirectX::PackedVector *__fastcall DirectX::PackedVector::XMConvertFloatToHalfStream(
        DirectX::PackedVector *this,
        unsigned __int16 *a2,
        __int64 a3,
        const float *a4)
{
  float v4; // xmm1_4
  DirectX::PackedVector *v6; // rbx
  __int64 v7; // rsi

  v6 = this;
  v7 = 2LL;
  do
  {
    *(_WORD *)v6 = DirectX::PackedVector::XMConvertFloatToHalf(this, v4);
    v6 = (DirectX::PackedVector *)((char *)v6 + 2);
    --v7;
  }
  while ( v7 );
  return this;
}
