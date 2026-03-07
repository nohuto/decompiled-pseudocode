unsigned __int16 *__fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        _DWORD *a3,
        __int64 a4)
{
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  unsigned __int64 v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]
  _DWORD v13[3]; // [rsp+30h] [rbp-38h] BYREF
  float v14; // [rsp+3Ch] [rbp-2Ch]

  if ( this )
  {
    CMILMatrix::TransformIgnoreZW(this, a1, (struct MilPoint4F *)v13, a4);
    v7 = *(float *)&v13[1];
    v8 = *(float *)&v13[2];
    *(_DWORD *)(a4 + 16) = v13[0];
    *(float *)(a4 + 20) = v7;
    *(float *)(a4 + 24) = v8;
    if ( v14 != 1.0 && v14 != 0.0 )
    {
      v9 = 1.0 / v14;
      *(float *)(a4 + 16) = (float)(1.0 / v14) * *(float *)(a4 + 16);
      *(float *)(a4 + 20) = v7 * v9;
      *(float *)(a4 + 24) = v8 * v9;
    }
    *(_DWORD *)(a4 + 32) = *a3;
    *(_DWORD *)(a4 + 36) = a3[1];
    *(_DWORD *)(a4 + 40) = a3[2];
    *(_DWORD *)(a4 + 44) = a3[3];
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    *(_QWORD *)(a4 + 20) = LODWORD(a1->y);
    *(_QWORD *)(a4 + 32) = 0LL;
    *(_DWORD *)(a4 + 40) = 0;
    *(_DWORD *)(a4 + 44) = 1065353216;
  }
  return DirectX::PackedVector::XMConvertFloatToHalfStream(
           (DirectX::PackedVector *)(a4 + 28),
           (unsigned __int16 *)this,
           (unsigned __int64)a1,
           (const float *)a4,
           v11,
           v12);
}
