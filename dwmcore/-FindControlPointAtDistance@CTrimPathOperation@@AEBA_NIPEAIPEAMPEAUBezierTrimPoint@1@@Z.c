bool __fastcall CTrimPathOperation::FindControlPointAtDistance(
        CTrimPathOperation *this,
        unsigned int a2,
        unsigned int *a3,
        float *a4,
        struct CTrimPathOperation::BezierTrimPoint *a5)
{
  unsigned int v5; // ebx
  float v9; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // rsi
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  bool result; // al

  v5 = *a3;
  v9 = *a4;
  v11 = *a4;
  if ( *a3 < a2 )
  {
    v12 = v5 + 1;
    while ( 1 )
    {
      v13 = *((float *)this + 2 * v5 + 51) - *((float *)this + 2 * v12 + 51);
      v14 = *((float *)this + 2 * v5 + 52) - *((float *)this + 2 * v12 + 52);
      v15 = sqrtf_0((float)(v13 * v13) + (float)(v14 * v14));
      v11 = v11 + v15;
      if ( v11 > *((float *)a5 + 1) )
        break;
      ++v5;
      v12 = (unsigned int)(v12 + 1);
      v9 = v11;
      if ( v5 >= a2 )
        goto LABEL_7;
    }
    *(float *)a5 = (float)((float)(1.0 - (float)(1.0 - (float)((float)(v11 - *((float *)a5 + 1)) / v15)))
                         * *((float *)this + v5 + 83))
                 + (float)((float)(1.0 - (float)((float)(v11 - *((float *)a5 + 1)) / v15)) * *((float *)this + v12 + 83));
  }
LABEL_7:
  *a4 = v9;
  result = v5 != a2;
  *a3 = v5;
  return result;
}
