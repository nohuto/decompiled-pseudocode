char __fastcall CNaturalAnimation::GenerateVector3Basis(CNaturalAnimation *this)
{
  char v1; // al
  char v2; // r9
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  unsigned __int64 v7; // xmm9_8
  float v8; // edi
  float *v9; // rax
  float *v10; // r8
  float v11; // xmm0_4
  unsigned int v12; // xmm2_4
  float v13; // xmm0_4
  const struct D2DMatrix *v14; // r8
  _BYTE v16[16]; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-29h] BYREF
  float v18; // [rsp+40h] [rbp-21h]

  v1 = *((_BYTE *)this + 588);
  v2 = 0;
  if ( (v1 & 4) != 0 )
  {
    v4 = *((float *)this + 87) - *((float *)this + 90);
    v5 = *((float *)this + 88) - *((float *)this + 91);
    v6 = *((float *)this + 89) - *((float *)this + 92);
    v17 = __PAIR64__(LODWORD(v5), LODWORD(v4));
    v18 = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) & _xmm) >= 0.0000011920929 )
    {
      v8 = v18;
      v7 = v17;
    }
    else
    {
      v7 = *(_QWORD *)((char *)this + 372);
      v8 = *((float *)this + 95);
      v17 = v7;
      v5 = *((float *)&v7 + 1);
      LODWORD(v4) = v7;
      v18 = v8;
      v6 = v8;
    }
    if ( (v1 & 1) == 0
      || (v9 = (float *)D3DXVec3Cross(
                          (CNaturalAnimation *)((char *)this + 384),
                          (const struct D2DVector3 *)&v17,
                          (CNaturalAnimation *)((char *)this + 384)),
          COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v9 * *v9) + (float)(v9[1] * v9[1])) + (float)(v9[2] * v9[2])) & _xmm) >= 0.0000011920929)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v10 * *v10) + (float)(v10[1] * v10[1])) + (float)(v10[2] * v10[2])) & _xmm) < 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) & _xmm) >= 0.0000011920929 )
      {
        LODWORD(v11) = (_DWORD)FLOAT_1_0;
        if ( v4 == 0.0 )
          v12 = 0;
        else
          v12 = (unsigned int)FLOAT_1_0;
        if ( v4 != 0.0 )
          v11 = COERCE_FLOAT(LODWORD(v5) ^ _xmm) / v4;
        v18 = 0.0;
        v17 = __PAIR64__(v12, LODWORD(v11));
        D3DXVec3Normalize((struct D2DVector3 *)&v17, (const struct D2DVector3 *)&v17);
        v13 = atan2f_0(
                COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)&v17 + 1) * v4) - (float)(*(float *)&v17 * v5)) ^ _xmm),
                v6);
        D3DXQuaternionRotationAxis((struct D2DQuaternion *)v16, (const struct D2DVector3 *)&v17, v13);
        D2DMatrixRotationQuaternion((CNaturalAnimation *)((char *)this + 460), (const struct D2DQuaternion *)v16);
        D2DMatrixInverse((CNaturalAnimation *)((char *)this + 524), 0LL, v14);
        v2 = 1;
      }
    }
    *((_BYTE *)this + 588) &= ~4u;
    *((_QWORD *)this + 48) = v7;
    *((float *)this + 98) = v8;
  }
  return v2;
}
