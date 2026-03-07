char __fastcall CMILMatrix::Transform2DBoundsHelper<0>(CMILMatrix *this, struct MilRectF *a2, float *a3)
{
  char v4; // dl
  CMILMatrix *v6; // r11
  unsigned __int64 v7; // rax
  bool v8; // cl
  char v9; // dl
  char v10; // cl
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  char v15; // cl
  char v16; // al
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  char v21; // r8
  float v22; // xmm5_4
  float v24; // [rsp+20h] [rbp-38h] BYREF
  float v25[7]; // [rsp+24h] [rbp-34h]

  v4 = *((_BYTE *)this + 64);
  v6 = this;
  LOBYTE(v7) = (char)(4 * v4) >> 6;
  if ( (_BYTE)v7 )
  {
    v8 = (_BYTE)v7 == 1;
    goto LABEL_3;
  }
  if ( v4 >> 6 )
  {
    if ( v4 >> 6 == 1 )
      goto LABEL_23;
LABEL_31:
    v8 = 0;
    goto LABEL_26;
  }
  v15 = *((_BYTE *)this + 65);
  v16 = (char)(4 * v15) >> 6;
  if ( v16 )
  {
    if ( v16 != 1 )
      v16 = 0;
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v6 + 7) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)v6 + 3) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)v6 + 15) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v16 = 0;
      v21 = 48;
    }
    else
    {
      v16 = 1;
      v21 = 16;
    }
    *((_BYTE *)v6 + 65) = v21 | v15 & 0xCF;
  }
  if ( !v16
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 1) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 4) - 0.0) & _xmm) >= 0.000081380211 )
  {
    v4 |= 0xC0u;
    goto LABEL_31;
  }
  v4 = v4 & 0x3F | 0x40;
LABEL_23:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v6 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 5) - 1.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_31;
  }
  v8 = 1;
LABEL_26:
  LOBYTE(v7) = 32 * v8;
  v4 ^= (v4 ^ (-16 - 32 * v8)) & 0x30;
  *((_BYTE *)v6 + 64) = v4;
LABEL_3:
  if ( v8 )
  {
    *a3 = *((float *)v6 + 12) + *(float *)a2;
    a3[1] = *((float *)a2 + 1) + *((float *)v6 + 13);
    a3[2] = *((float *)a2 + 2) + *((float *)v6 + 12);
    a3[3] = *((float *)a2 + 3) + *((float *)v6 + 13);
  }
  else
  {
    v9 = v4 >> 6;
    if ( v9 )
    {
      v10 = v9 == 1;
    }
    else
    {
      v10 = CMILMatrix::IsAffine<1>((__int64)v6, 1)
         && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 1) - 0.0) & _xmm)
         && v22 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 4) - 0.0) & _xmm);
      *((_BYTE *)v6 + 64) &= 0x3Fu;
      LOBYTE(v7) = (v10 << 7) - 64;
      *((_BYTE *)v6 + 64) |= v7;
    }
    if ( v10 )
    {
      v11 = (float)(*(float *)a2 * *(float *)v6) + *((float *)v6 + 12);
      *a3 = v11;
      v12 = (float)(*((float *)a2 + 1) * *((float *)v6 + 5)) + *((float *)v6 + 13);
      a3[1] = v12;
      v13 = (float)(*((float *)a2 + 2) * *(float *)v6) + *((float *)v6 + 12);
      a3[2] = v13;
      v14 = (float)(*((float *)a2 + 3) * *((float *)v6 + 5)) + *((float *)v6 + 13);
      a3[3] = v14;
      if ( *(float *)v6 <= 0.0 || *((float *)v6 + 5) <= 0.0 )
      {
        if ( v11 > v13 )
        {
          *a3 = v13;
          a3[2] = v11;
        }
        if ( v12 > v14 )
        {
          a3[1] = v14;
          a3[3] = v12;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v6, a2, (struct MilPoint2F *const)&v24);
      v17 = v24;
      v7 = 1LL;
      v18 = v25[0];
      v19 = v24;
      *a3 = v24;
      v20 = v18;
      a3[1] = v18;
      a3[2] = v19;
      a3[3] = v18;
      do
      {
        v17 = fminf(v17, v25[2 * v7 - 1]);
        *a3 = v17;
        v18 = fminf(v18, v25[2 * v7]);
        a3[1] = v18;
        v19 = fmaxf(v19, v25[2 * v7 - 1]);
        a3[2] = v19;
        v20 = fmaxf(v20, v25[2 * v7++]);
        a3[3] = v20;
      }
      while ( v7 < 4 );
    }
  }
  return v7;
}
