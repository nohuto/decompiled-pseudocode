void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  int v5; // eax
  char v6; // al
  char v7; // al
  bool v8; // si
  bool v9; // dl
  bool v10; // dl
  __int64 v11; // rdx
  char v12; // al
  float v13; // xmm3_4
  CMILMatrix *v14; // rcx
  float v15; // xmm2_4
  float v16; // xmm1_4
  int v17; // eax
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  _OWORD *v44; // rax
  __int128 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-B0h]
  __int128 v47; // [rsp+68h] [rbp-A0h]
  __int128 v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+88h] [rbp-80h]
  _DWORD v50[6]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v51[6]; // [rsp+B0h] [rbp-58h] BYREF
  float v52[6]; // [rsp+C8h] [rbp-40h] BYREF

  if ( a3 == a2 )
  {
    v24 = *((_OWORD *)a1 + 1);
    v25 = *((_DWORD *)a1 + 16);
    v45 = *(_OWORD *)a1;
    v26 = *((_OWORD *)a1 + 2);
    v49 = v25;
    v46 = v24;
    v27 = *((_OWORD *)a1 + 3);
    v47 = v26;
    v48 = v27;
    CMILMatrix::Multiply((CMILMatrix *)&v45, a2);
    v28 = v46;
    v17 = v49;
    *(_OWORD *)a3 = v45;
    v29 = v47;
    *((_OWORD *)a3 + 1) = v28;
    v30 = v48;
    *((_OWORD *)a3 + 2) = v29;
    *((_OWORD *)a3 + 3) = v30;
    goto LABEL_25;
  }
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 16);
  *((_DWORD *)a3 + 16) = v5;
  v6 = (char)((_BYTE)v5 << 6) >> 6;
  if ( v6 )
  {
    v8 = 1;
    v10 = v6 == 1;
  }
  else
  {
    v7 = (char)(16 * *((_BYTE *)a3 + 65)) >> 6;
    if ( v7 )
    {
      v8 = 1;
      v9 = v7 == 1;
    }
    else
    {
      v8 = 1;
      v9 = (unsigned __int8)CMILMatrix::IsAffine<1>(a3, 0LL)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 8) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 9) - 0.0) & _xmm) < 0.000081380211;
      *((_BYTE *)a3 + 65) &= 0xF3u;
      *((_BYTE *)a3 + 65) |= (-4 - 8 * v9) & 0xC;
    }
    v10 = v9
       && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a3)
       && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 10) - 1.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 12) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 13) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 14) - 0.0) & _xmm) < 0.000081380211;
    *((_BYTE *)a3 + 64) &= 0xFCu;
    *((_BYTE *)a3 + 64) |= (-1 - 2 * v10) & 3;
  }
  if ( v10 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    v17 = *((_DWORD *)a2 + 16);
LABEL_25:
    *((_DWORD *)a3 + 16) = v17;
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2) )
    return;
  v12 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
  if ( v12 )
  {
    v8 = v12 == 1;
  }
  else
  {
    if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(a2, 0LL)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & _xmm) >= 0.000081380211 )
    {
      v8 = 0;
    }
    *((_BYTE *)a2 + 65) &= 0xF3u;
    *((_BYTE *)a2 + 65) |= (-4 - 8 * v8) & 0xC;
  }
  if ( v8
    && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a2)
    && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a2)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - 1.0) & _xmm) < 0.000081380211 )
  {
    v13 = *((float *)a2 + 14);
    v14 = a3;
    v15 = *((float *)a2 + 13);
    v16 = *((float *)a2 + 12);
LABEL_21:
    CMILMatrix::Translate(v14, v16, v15, v13);
    return;
  }
  if ( CMILMatrix::IsTranslate<1>((__int64)a3, v11) )
  {
    v18 = *((float *)a3 + 12);
    v19 = *((float *)a3 + 13);
    v20 = *((float *)a3 + 14);
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
    CMILMatrix::PrependTranslate(a3, v18, v19, v20);
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v21 = *((float *)a2 + 12);
    v22 = *((float *)a2 + 13);
    v23 = *((float *)a2 + 14);
    CMILMatrix::Scale(a3, *(float *)a2, *((float *)a2 + 5), *((float *)a2 + 10));
    v13 = v23;
    v15 = v22;
    v16 = v21;
    goto LABEL_21;
  }
  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a3) && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
  {
    v31 = *((_DWORD *)a3 + 1);
    v32 = *((float *)a3 + 10);
    v33 = *((float *)a3 + 14);
    v51[0] = *(_DWORD *)a3;
    v34 = *((_DWORD *)a3 + 4);
    v51[1] = v31;
    v35 = *((_DWORD *)a3 + 5);
    v51[2] = v34;
    v36 = *((_DWORD *)a3 + 12);
    v51[3] = v35;
    v37 = *((_DWORD *)a3 + 13);
    v51[4] = v36;
    v38 = *(_DWORD *)a2;
    v51[5] = v37;
    v39 = *((_DWORD *)a2 + 1);
    v50[0] = v38;
    v40 = *((_DWORD *)a2 + 4);
    v50[1] = v39;
    v41 = *((_DWORD *)a2 + 5);
    v50[2] = v40;
    v42 = *((_DWORD *)a2 + 12);
    v50[3] = v41;
    v43 = *((_DWORD *)a2 + 13);
    v50[4] = v42;
    v50[5] = v43;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v52,
      (const struct D2D1::Matrix3x2F *)v51,
      (const struct D2D1::Matrix3x2F *)v50);
    CMILMatrix::Set2DAffineMatrix(a3, v52[0], v52[1], v52[2], v52[3], v52[4], v52[5]);
    *((float *)a3 + 10) = v32 * *((float *)a2 + 10);
    *((float *)a3 + 14) = (float)(v33 * *((float *)a2 + 10)) + *((float *)a2 + 14);
  }
  else
  {
    v44 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v45, a3, a2);
    *(_OWORD *)a3 = *v44;
    *((_OWORD *)a3 + 1) = v44[1];
    *((_OWORD *)a3 + 2) = v44[2];
    *((_OWORD *)a3 + 3) = v44[3];
    *((_DWORD *)a3 + 16) = 0;
  }
}
