float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(CMILMatrix *this, struct MilRectF *a2, float *a3)
{
  char v3; // bp
  char v4; // si
  char v5; // al
  float *v6; // r11
  bool v9; // al
  float *result; // rax
  unsigned int v11; // edx
  unsigned int i; // ecx
  char v13; // cl
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = (char)(4 * *((_BYTE *)this + 64)) >> 6;
  v6 = a3;
  if ( v5 )
  {
    v9 = v5 == 1;
  }
  else
  {
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)this)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)this - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 5) - 1.0) & _xmm) < 0.000081380211 )
    {
      v9 = 1;
      v13 = 16;
    }
    else
    {
      v9 = 0;
      v13 = 48;
    }
    *((_BYTE *)this + 64) &= 0xCFu;
    *((_BYTE *)this + 64) |= v13;
  }
  if ( v9 )
  {
    v3 = 1;
    *v6 = *((float *)this + 12) + *(float *)a2;
    v6[1] = *((float *)a2 + 1) + *((float *)this + 13);
    v6[2] = *((float *)a2 + 2) + *((float *)this + 12);
    v6[3] = *((float *)a2 + 3) + *((float *)this + 13);
LABEL_5:
    v4 = 1;
    goto LABEL_6;
  }
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)this) )
  {
    CMILMatrix::Transform2DRectToPerspective(this, a2, (struct MilPoint2F *const)v19);
    result = (float *)v19;
    v11 = 8;
    goto LABEL_7;
  }
  v3 = 1;
  *v6 = (float)(*(float *)this * *(float *)a2) + *((float *)this + 12);
  v6[1] = (float)(*((float *)a2 + 1) * *((float *)this + 5)) + *((float *)this + 13);
  v6[2] = (float)(*((float *)a2 + 2) * *(float *)this) + *((float *)this + 12);
  v6[3] = (float)(*((float *)a2 + 3) * *((float *)this + 5)) + *((float *)this + 13);
  if ( *(float *)this > 0.0 && *((float *)this + 5) > 0.0 )
    goto LABEL_5;
LABEL_6:
  result = v6;
  v11 = 4;
LABEL_7:
  for ( i = 0; i < v11; ++i )
    ++result;
  if ( !v4 )
  {
    if ( v3 )
    {
      v14 = *v6;
      v15 = v6[2];
      if ( *v6 > v15 )
      {
        *v6 = v15;
        v6[2] = v14;
      }
      v16 = v6[1];
      v17 = v6[3];
      if ( v16 > v17 )
      {
        v6[1] = v17;
        v6[3] = v16;
      }
    }
    else
    {
      v18[0] = 4LL;
      v18[1] = v19;
      return (float *)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                        v6,
                        v18);
    }
  }
  return result;
}
