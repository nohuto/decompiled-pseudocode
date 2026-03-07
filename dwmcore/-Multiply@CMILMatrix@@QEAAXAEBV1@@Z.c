void __fastcall CMILMatrix::Multiply(CMILMatrix *this, const struct CMILMatrix *a2)
{
  int v2; // xmm5_4
  char v5; // r11
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // dl
  char v10; // al
  char v11; // r9
  char v12; // al
  bool v13; // r8
  bool v14; // r8
  bool v15; // dl
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  bool v20; // dl
  bool v21; // cl
  char v22; // al
  bool v23; // dl
  char v24; // al
  char v25; // al
  bool v26; // dl
  char v27; // al
  int v28; // xmm5_4
  char v29; // al
  bool v30; // cl
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  char v34; // al
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  CMILMatrix *v38; // rcx
  int v39; // xmm5_4
  int v40; // xmm5_4
  int v41; // xmm1_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  int v44; // xmm0_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // xmm0_4
  int v51; // xmm1_4
  int v52; // xmm0_4
  int v53; // xmm1_4
  _OWORD *v54; // rax
  _BYTE v55[64]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v56[6]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v57[6]; // [rsp+98h] [rbp-70h] BYREF
  float v58[6]; // [rsp+B0h] [rbp-58h] BYREF

  v2 = _xmm;
  v5 = -1;
  v6 = (char)(*((_BYTE *)this + 64) << 6) >> 6;
  if ( !v6 )
  {
    v7 = (char)(16 * *((_BYTE *)this + 65)) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_21;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)this, 0)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & v2) >= 0.000081380211 )
      {
        *((_BYTE *)this + 65) |= 0xCu;
        goto LABEL_21;
      }
      *((_BYTE *)this + 65) &= ~8u;
      *((_BYTE *)this + 65) |= 4u;
    }
    v8 = (char)(16 * *((_BYTE *)this + 64)) >> 6;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_21;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)this, 1)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 2) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 6) - 0.0) & v2) >= 0.000081380211 )
      {
        *((_BYTE *)this + 64) |= 0xCu;
        goto LABEL_21;
      }
      *((_BYTE *)this + 64) &= ~8u;
      *((_BYTE *)this + 64) |= 4u;
    }
    v9 = *((_BYTE *)this + 64);
    v10 = (char)(4 * v9) >> 6;
    if ( v10 )
    {
      v14 = v10 == 1;
      goto LABEL_18;
    }
    if ( v9 >> 6 )
    {
      if ( v9 >> 6 != 1 )
        goto LABEL_56;
    }
    else
    {
      v11 = *((_BYTE *)this + 65);
      v12 = (char)(4 * v11) >> 6;
      if ( v12 )
      {
        v13 = v12 == 1;
      }
      else
      {
        v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v2) * 61440.0)
                                           + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v2) * 61440.0))
                                   + COERCE_FLOAT(*((_DWORD *)this + 15) & v2))
                           - 1.0) & v2) < 0.000081380211;
        *((_BYTE *)this + 65) = v11 ^ (v11 ^ (-16 - 32 * v13)) & 0x30;
      }
      if ( !v13
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & v2) >= 0.000081380211 )
      {
        v9 |= 0xC0u;
        goto LABEL_56;
      }
      v9 = v9 & 0x3F | 0x40;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 1.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & v2) < 0.000081380211 )
    {
      v14 = 1;
LABEL_17:
      *((_BYTE *)this + 64) = v9 ^ (v9 ^ (-16 - 32 * v14)) & 0x30;
LABEL_18:
      if ( v14
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 10) - 1.0) & v2) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 12) - 0.0) & v2) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 13) - 0.0) & v2) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 0.0) & v2) < 0.000081380211 )
      {
        v15 = 1;
        goto LABEL_22;
      }
LABEL_21:
      v15 = 0;
LABEL_22:
      *((_BYTE *)this + 64) &= 0xFCu;
      *((_BYTE *)this + 64) |= (v5 - 2 * v15) & 3;
      goto LABEL_23;
    }
LABEL_56:
    v14 = 0;
    goto LABEL_17;
  }
  v15 = v6 == 1;
LABEL_23:
  if ( v15 )
  {
    *(_OWORD *)this = *(_OWORD *)a2;
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
    *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
    return;
  }
  v16 = (char)(*((_BYTE *)a2 + 64) << 6) >> 6;
  if ( !v16 )
  {
    v17 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_33;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)a2, 0)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & v2) >= 0.000081380211 )
      {
        *((_BYTE *)a2 + 65) |= 0xCu;
        goto LABEL_33;
      }
      *((_BYTE *)a2 + 65) &= ~8u;
      *((_BYTE *)a2 + 65) |= 4u;
    }
    v18 = (char)(16 * *((_BYTE *)a2 + 64)) >> 6;
    if ( v18 )
    {
      if ( v18 != 1 )
        goto LABEL_33;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)a2, 1)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 6) - 0.0) & v2) >= 0.000081380211 )
      {
        *((_BYTE *)a2 + 64) |= 0xCu;
        goto LABEL_33;
      }
      *((_BYTE *)a2 + 64) &= ~8u;
      *((_BYTE *)a2 + 64) |= 4u;
    }
    v19 = (char)(4 * *((_BYTE *)a2 + 64)) >> 6;
    if ( v19 )
    {
      v20 = v19 == 1;
    }
    else
    {
      v20 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 1.0) & v2) < 0.000081380211
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 1.0) & v2) < 0.000081380211;
      *((_BYTE *)a2 + 64) &= 0xCFu;
      *((_BYTE *)a2 + 64) |= (-16 - 32 * v20) & 0x30;
    }
    if ( v20
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - 1.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 12) - 0.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 13) - 0.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 14) - 0.0) & v2) < 0.000081380211 )
    {
      v21 = 1;
      goto LABEL_34;
    }
LABEL_33:
    v21 = 0;
LABEL_34:
    *((_BYTE *)a2 + 64) &= 0xFCu;
    *((_BYTE *)a2 + 64) |= (v5 - 2 * v21) & 3;
    goto LABEL_35;
  }
  v21 = v16 == 1;
LABEL_35:
  if ( v21 )
    return;
  v22 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
  if ( v22 )
  {
    v23 = v22 == 1;
  }
  else
  {
    v23 = CMILMatrix::IsAffine<1>((__int64)a2, 0)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & v2) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & v2) < 0.000081380211;
    *((_BYTE *)a2 + 65) &= 0xF3u;
    *((_BYTE *)a2 + 65) |= (-4 - 8 * v23) & 0xC;
  }
  if ( v23 )
  {
    v24 = (char)(16 * *((_BYTE *)a2 + 64)) >> 6;
    if ( v24 )
    {
      if ( v24 != 1 )
        goto LABEL_45;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)a2, 1)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - 0.0) & v2) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 6) - 0.0) & v2) >= 0.000081380211 )
      {
        *((_BYTE *)a2 + 64) |= 0xCu;
        goto LABEL_45;
      }
      *((_BYTE *)a2 + 64) &= ~8u;
      *((_BYTE *)a2 + 64) |= 4u;
    }
    v25 = (char)(4 * *((_BYTE *)a2 + 64)) >> 6;
    if ( v25 )
    {
      v26 = v25 == 1;
    }
    else
    {
      v26 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 1.0) & v2) < 0.000081380211
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 1.0) & v2) < 0.000081380211;
      *((_BYTE *)a2 + 64) &= 0xCFu;
      *((_BYTE *)a2 + 64) |= (-16 - 32 * v26) & 0x30;
    }
    if ( v26 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - 1.0) & v2) < 0.000081380211 )
    {
      CMILMatrix::Translate(this, *((float *)a2 + 12), *((float *)a2 + 13), *((float *)a2 + 14));
      return;
    }
  }
LABEL_45:
  v27 = (char)(16 * *((_BYTE *)this + 65)) >> 6;
  if ( v27 )
  {
    if ( v27 != 1 )
      goto LABEL_68;
  }
  else
  {
    if ( !CMILMatrix::IsAffine<1>((__int64)this, 0)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & v39) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & v39) >= 0.000081380211 )
    {
      *((_BYTE *)this + 65) |= 0xCu;
      goto LABEL_68;
    }
    *((_BYTE *)this + 65) &= ~8u;
    *((_BYTE *)this + 65) |= 4u;
  }
  if ( CMILMatrix::ProducesUniformZ<1>((__int64)this) )
  {
    v29 = (char)(4 * *((_BYTE *)this + 64)) >> 6;
    if ( v29 )
    {
      v30 = v29 == 1;
    }
    else
    {
      v30 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)this)
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 1.0) & v28) < 0.000081380211
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & v28) < 0.000081380211;
      *((_BYTE *)this + 64) &= 0xCFu;
      *((_BYTE *)this + 64) |= (-16 - 32 * v30) & 0x30;
    }
    if ( v30 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 10) - 1.0) & v28) < 0.000081380211 )
    {
      v31 = *((float *)this + 12);
      v32 = *((float *)this + 13);
      v33 = *((float *)this + 14);
      *(_OWORD *)this = *(_OWORD *)a2;
      *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
      *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
      CMILMatrix::PrependTranslate(this, v31, v32, v33);
      return;
    }
  }
LABEL_68:
  v34 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
  if ( v34 )
  {
    if ( v34 == 1 )
    {
LABEL_70:
      if ( CMILMatrix::ProducesUniformZ<1>((__int64)a2) && CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2) )
      {
        v35 = *((float *)a2 + 12);
        v36 = *((float *)a2 + 13);
        v37 = *((float *)a2 + 14);
        CMILMatrix::Scale(this, *(float *)a2, *((float *)a2 + 5), *((float *)a2 + 10));
        CMILMatrix::Translate(v38, v35, v36, v37);
        return;
      }
    }
  }
  else
  {
    if ( CMILMatrix::IsAffine<1>((__int64)a2, 0)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & v40) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & v40) < 0.000081380211 )
    {
      *((_BYTE *)a2 + 65) &= ~8u;
      *((_BYTE *)a2 + 65) |= 4u;
      goto LABEL_70;
    }
    *((_BYTE *)a2 + 65) |= 0xCu;
  }
  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(this) && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
  {
    v41 = *((_DWORD *)this + 1);
    v42 = *((float *)this + 10);
    v43 = *((float *)this + 14);
    v57[0] = *(_DWORD *)this;
    v44 = *((_DWORD *)this + 4);
    v57[1] = v41;
    v45 = *((_DWORD *)this + 5);
    v57[2] = v44;
    v46 = *((_DWORD *)this + 12);
    v57[3] = v45;
    v47 = *((_DWORD *)this + 13);
    v57[4] = v46;
    v48 = *(_DWORD *)a2;
    v57[5] = v47;
    v49 = *((_DWORD *)a2 + 1);
    v56[0] = v48;
    v50 = *((_DWORD *)a2 + 4);
    v56[1] = v49;
    v51 = *((_DWORD *)a2 + 5);
    v56[2] = v50;
    v52 = *((_DWORD *)a2 + 12);
    v56[3] = v51;
    v53 = *((_DWORD *)a2 + 13);
    v56[4] = v52;
    v56[5] = v53;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v58,
      (const struct D2D1::Matrix3x2F *)v57,
      (const struct D2D1::Matrix3x2F *)v56);
    CMILMatrix::Set2DAffineMatrix(this, v58[0], v58[1], v58[2], v58[3], v58[4], v58[5]);
    *((float *)this + 10) = v42 * *((float *)a2 + 10);
    *((float *)this + 14) = (float)(v43 * *((float *)a2 + 10)) + *((float *)a2 + 14);
  }
  else
  {
    v54 = (_OWORD *)Windows::Foundation::Numerics::operator*(v55, this, a2);
    *(_OWORD *)this = *v54;
    *((_OWORD *)this + 1) = v54[1];
    *((_OWORD *)this + 2) = v54[2];
    *((_OWORD *)this + 3) = v54[3];
    *((_DWORD *)this + 16) = 0;
  }
}
