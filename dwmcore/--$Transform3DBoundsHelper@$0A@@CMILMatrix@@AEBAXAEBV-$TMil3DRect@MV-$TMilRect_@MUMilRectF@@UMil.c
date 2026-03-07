char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(CMILMatrix *this, float *a2, float *a3)
{
  int v4; // xmm5_4
  float *v5; // rsi
  char v7; // al
  bool v8; // dl
  _BYTE *v9; // r11
  char v10; // al
  bool v11; // dl
  float *v12; // rax
  bool v13; // dl
  char v14; // al
  bool v15; // dl
  char v16; // al
  bool v17; // cl
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  _BYTE *v27; // r11
  int v28; // xmm5_4
  int v29; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // rcx
  float v33; // xmm2_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  float v37; // xmm3_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int128 v41; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+30h] [rbp-B8h]
  _BYTE v43[4]; // [rsp+40h] [rbp-A8h] BYREF
  char v44; // [rsp+44h] [rbp-A4h] BYREF

  v4 = _xmm;
  v5 = a2;
  v7 = (char)(16 * *((_BYTE *)this + 65)) >> 6;
  if ( v7 )
  {
    v8 = v7 == 1;
  }
  else
  {
    v8 = (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & v4) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & v4) < 0.000081380211;
    *((_BYTE *)this + 65) &= 0xF3u;
    *((_BYTE *)this + 65) |= (-4 - 8 * v8) & 0xC;
  }
  if ( !v8 )
    goto LABEL_13;
  v9 = (char *)this + 64;
  v10 = (char)(16 * *((_BYTE *)this + 64)) >> 6;
  if ( v10 )
  {
    v11 = v10 == 1;
  }
  else
  {
    LOBYTE(a2) = 1;
    v11 = (unsigned __int8)CMILMatrix::IsAffine<1>(this, a2)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 2) - 0.0) & v4) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 6) - 0.0) & v4) < 0.000081380211;
    *v9 &= 0xF3u;
    *v9 |= (-4 - 8 * v11) & 0xC;
  }
  if ( v11
    && ((LOBYTE(v12) = (char)(4 * *v9) >> 6, !(_BYTE)v12)
      ? (!(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(this)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 1.0) & v4) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & v4) >= 0.000081380211
       ? (v13 = 0)
       : (v13 = 1),
         *v27 &= 0xCFu,
         LOBYTE(v12) = 32 * v13,
         *v27 |= (-16 - 32 * v13) & 0x30)
      : (v13 = (_BYTE)v12 == 1),
        v13 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 10) - 1.0) & v4) < 0.000081380211) )
  {
    *a3 = *v5 + *((float *)this + 12);
    a3[1] = v5[1] + *((float *)this + 13);
    a3[4] = v5[4] + *((float *)this + 14);
    a3[2] = v5[2] + *((float *)this + 12);
    a3[3] = v5[3] + *((float *)this + 13);
    a3[5] = v5[5] + *((float *)this + 14);
  }
  else
  {
LABEL_13:
    v14 = (char)(16 * *((_BYTE *)this + 65)) >> 6;
    if ( v14 )
    {
      v15 = v14 == 1;
    }
    else
    {
      v15 = (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL)
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & v28) < 0.000081380211
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & v28) < 0.000081380211;
      *((_BYTE *)this + 65) &= 0xF3u;
      *((_BYTE *)this + 65) |= (-4 - 8 * v15) & 0xC;
    }
    if ( v15
      && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(this)
      && (LOBYTE(v12) = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(this), (_BYTE)v12) )
    {
      v21 = (float)(*v5 * *(float *)this) + *((float *)this + 12);
      *a3 = v21;
      v22 = (float)(v5[1] * *((float *)this + 5)) + *((float *)this + 13);
      a3[1] = v22;
      v23 = (float)(v5[4] * *((float *)this + 10)) + *((float *)this + 14);
      a3[4] = v23;
      v24 = (float)(v5[2] * *(float *)this) + *((float *)this + 12);
      a3[2] = v24;
      v25 = (float)(v5[3] * *((float *)this + 5)) + *((float *)this + 13);
      a3[3] = v25;
      v26 = (float)(v5[5] * *((float *)this + 10)) + *((float *)this + 14);
      a3[5] = v26;
      if ( *(float *)this <= 0.0 || *((float *)this + 5) <= 0.0 || *((float *)this + 10) <= 0.0 )
      {
        if ( v21 > v24 )
        {
          *a3 = v24;
          a3[2] = v21;
        }
        if ( v22 > v25 )
        {
          a3[1] = v25;
          a3[3] = v22;
        }
        if ( v23 > v26 )
        {
          a3[4] = v26;
          a3[5] = v23;
        }
      }
    }
    else
    {
      v16 = (char)(16 * *((_BYTE *)this + 65)) >> 6;
      if ( v16 )
      {
        v17 = v16 == 1;
      }
      else
      {
        v17 = (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL)
           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 0.0) & v29) < 0.000081380211
           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 9) - 0.0) & v29) < 0.000081380211;
        *((_BYTE *)this + 65) &= 0xF3u;
        *((_BYTE *)this + 65) |= (-4 - 8 * v17) & 0xC;
      }
      if ( v17 && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(this) )
      {
        v42 = 0LL;
        v41 = *(_OWORD *)v5;
        LOBYTE(v12) = CMILMatrix::Transform2DBoundsHelper<0>(this, (struct MilRectF *)&v41);
        v18 = *((float *)this + 10);
        v19 = (float)(v18 * v5[5]) + *((float *)this + 14);
        v20 = (float)(v18 * v5[4]) + *((float *)this + 14);
        if ( v20 > v19 )
        {
          v30 = v20;
          v20 = v19;
          v19 = v30;
        }
        *(_OWORD *)a3 = v42;
        a3[4] = v20;
        a3[5] = v19;
      }
      else
      {
        CMILMatrix::Transform3DRectToPerspective(this, v5, v43);
        *a3 = 3.4028235e38;
        v12 = (float *)&v44;
        v31 = FLOAT_3_4028235e38;
        v32 = 8LL;
        v33 = FLOAT_N3_4028235e38;
        v34 = FLOAT_3_4028235e38;
        v35 = FLOAT_N3_4028235e38;
        v36 = FLOAT_N3_4028235e38;
        v37 = FLOAT_3_4028235e38;
        do
        {
          v38 = *(v12 - 1);
          if ( v37 > v38 )
          {
            *a3 = v38;
            v37 = v38;
          }
          if ( v38 > v33 )
            v33 = v38;
          if ( v31 > *v12 )
            v31 = *v12;
          if ( *v12 > v35 )
            v35 = *v12;
          v39 = v12[1];
          if ( v34 > v39 )
            v34 = v12[1];
          if ( v39 > v36 )
            v36 = v12[1];
          v12 += 3;
          --v32;
        }
        while ( v32 );
        a3[1] = v31;
        a3[4] = v34;
        a3[2] = v33;
        a3[3] = v35;
        a3[5] = v36;
      }
    }
  }
  return (char)v12;
}
