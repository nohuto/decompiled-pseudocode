_DWORD *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, _DWORD *a2, unsigned int a3)
{
  void (__fastcall ***v6)(_QWORD, int *); // rcx
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  int v14; // xmm0_4
  _DWORD *result; // rax
  float v16; // xmm1_4
  float v17; // xmm3_4
  int v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  int v21; // [rsp+28h] [rbp-49h] BYREF
  int v22; // [rsp+2Ch] [rbp-45h]
  float v23; // [rsp+30h] [rbp-41h] BYREF
  int v24; // [rsp+34h] [rbp-3Dh]
  int v25; // [rsp+38h] [rbp-39h]
  float v26; // [rsp+3Ch] [rbp-35h]
  float v27; // [rsp+40h] [rbp-31h]
  float v28; // [rsp+44h] [rbp-2Dh]
  D2D1_MATRIX_3X2_F v29; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v30[24]; // [rsp+60h] [rbp-11h] BYREF

  v6 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 8)
                                            + 8LL);
  (**v6)(v6, &v21);
  v7 = *(float *)(a1 + 280);
  v8 = (float)*(int *)(a1 + 16);
  v9 = (float)*(int *)(a1 + 20);
  v10 = (float)(*(float *)(a1 + 196) - v8) * v7;
  v11 = (float)(*(float *)(a1 + 200) - v9) * v7;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 256) + 728LL) )
  {
    v10 = *(float *)(a1 + 228) - v8;
    v11 = *(float *)(a1 + 232) - v9;
  }
  v29 = *(D2D1_MATRIX_3X2_F *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 112LL)
                                                                        + 24LL))(
                                *(_QWORD *)(*(_QWORD *)(a1 + 248) + 112LL),
                                a3);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v29) )
  {
    D2D1::Matrix3x2F::Invert(&v29);
    v10 = v10 + v29.dx;
    v29.dx = 0.0;
    v11 = v11 + v29.dy;
    v29.dy = 0.0;
  }
  v24 = 0;
  v25 = 0;
  v12 = (float)v22;
  v23 = 1.0 / (float)v21;
  v26 = 1.0 / (float)v22;
  v27 = 0.0 - (float)(v23 * 0.0);
  v28 = 0.0 - (float)(v26 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v23,
    (const struct D2D1::Matrix3x2F *)&v29);
  v29.dx = v10 / v13;
  v29.dy = v11 / v12;
  *(_OWORD *)&v29.m11 = *(_OWORD *)&_xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v23,
    (const struct D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v29);
  v14 = v25;
  result = a2;
  v16 = v26;
  v17 = v23;
  v18 = v24;
  a2[2] = 0;
  a2[5] = 0;
  a2[3] = v14;
  v19 = v27;
  *((float *)a2 + 4) = v16;
  v20 = v28;
  *((float *)a2 + 6) = v19;
  *((float *)a2 + 7) = v20;
  *(float *)a2 = v17;
  a2[1] = v18;
  a2[8] = 1065353216;
  return result;
}
