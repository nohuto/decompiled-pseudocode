_DWORD *__fastcall CCompositionLight::CalcEyePointOrVector(__int64 a1, _DWORD *a2, __int64 a3)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm14_4
  float v16; // xmm15_4
  float v17; // xmm11_4
  float v18; // xmm12_4
  float v19; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm13_4
  float v22; // xmm4_4
  float v23; // xmm0_4
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  unsigned int v27; // xmm1_4
  CCompositionLight *v28; // rcx
  unsigned int v29; // xmm1_4
  __int128 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h]
  __int128 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h]
  __int128 v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  __int128 v39; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-40h]
  __int128 v41; // [rsp+D8h] [rbp-30h]
  __int128 v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F8h] [rbp-10h]
  __int128 v44; // [rsp+108h] [rbp+0h] BYREF
  __int64 v45; // [rsp+118h] [rbp+10h]
  __int128 v46; // [rsp+128h] [rbp+20h] BYREF
  __int64 v47; // [rsp+138h] [rbp+30h]
  _OWORD v48[4]; // [rsp+148h] [rbp+40h] BYREF
  int v49; // [rsp+188h] [rbp+80h]

  v3 = *(CTransform3D **)(a3 + 240);
  if ( !v3 )
    goto LABEL_6;
  Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(a3 + 140));
  v6 = *((_OWORD *)Matrix + 1);
  v39 = *(_OWORD *)Matrix;
  v7 = *((_OWORD *)Matrix + 2);
  v40 = v6;
  v8 = *((_OWORD *)Matrix + 3);
  LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
  v41 = v7;
  v42 = v8;
  v43 = (int)Matrix;
  if ( !CMILMatrix::Invert((CMILMatrix *)&v39, v9, v10) )
  {
LABEL_6:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 1065353216;
    goto LABEL_7;
  }
  v48[0] = v39;
  v48[1] = v40;
  v49 = v43;
  v48[2] = v41;
  v48[3] = v42;
  CalcFrustumOutline(v48, &v37, &v31, &v33, &v35);
  v11 = *(float *)&v37 - *(float *)&v35;
  v12 = *(float *)&v31 - *(float *)&v33;
  v13 = *((float *)&v31 + 1) - *((float *)&v33 + 1);
  v14 = *((float *)&v31 + 2) - *((float *)&v33 + 2);
  v15 = *(float *)&v35 - *(float *)&v33;
  v16 = *((float *)&v35 + 1) - *((float *)&v33 + 1);
  v17 = *(float *)&v37 - *(float *)&v31;
  v18 = *((float *)&v37 + 1) - *((float *)&v31 + 1);
  v19 = *((float *)&v37 + 2) - *((float *)&v31 + 2);
  v44 = v35;
  v20 = *((float *)&v37 + 2) - *((float *)&v35 + 2);
  v21 = *((float *)&v35 + 2) - *((float *)&v33 + 2);
  v22 = (float)(*((float *)&v37 + 1) - *((float *)&v35 + 1)) * (float)(*((float *)&v37 + 1) - *((float *)&v35 + 1));
  v35 = v33;
  v45 = v36;
  v33 = v31;
  v36 = v34;
  v34 = v32;
  v46 = v37;
  v47 = v38;
  v23 = sqrtf_0((float)(v22 + (float)(v11 * v11)) + (float)(v20 * v20));
  v24 = (float)(v23 + sqrtf_0((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14))) * 0.5;
  v25 = sqrtf_0((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  v26 = sqrtf_0((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v21 * v21));
  if ( !(unsigned __int8)IntersectFourLines(
                           &v46,
                           &v33,
                           &v35,
                           &v44,
                           (float)(v24 + (float)((float)(v25 + v26) * 0.5)) / 20.0,
                           &v31) )
  {
    *(_QWORD *)&v31 = 0LL;
    DWORD2(v31) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform3DVector((CMILMatrix *)&v39, (struct D2D_VECTOR_3F *)&v33, (const struct D2D_VECTOR_3F *)&v31);
    LODWORD(v31) = v33;
    *(_QWORD *)((char *)&v31 + 4) = *(_QWORD *)((char *)&v33 + 4);
    CCompositionLight::NormalizeVec3(
      v28,
      (const struct Windows::Foundation::Numerics::float3 *)&v31,
      (struct Windows::Foundation::Numerics::float3 *)&v33);
    v29 = DWORD1(v33);
    *a2 = v33;
    *(_QWORD *)(a2 + 1) = __PAIR64__(DWORD2(v33), v29);
LABEL_7:
    a2[3] = 0;
    return a2;
  }
  v27 = DWORD1(v31);
  *a2 = v31;
  *(_QWORD *)(a2 + 1) = __PAIR64__(DWORD2(v31), v27);
  a2[3] = 1065353216;
  return a2;
}
