__int64 __fastcall CRoundedRectangleShape::GetTightBounds(__int64 a1, struct MilRectF *a2, CMILMatrix *a3)
{
  __int64 v3; // rax
  CMILMatrix *v5; // r11
  char v7; // cl
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  __int64 v15; // rax
  CMILMatrix *v17; // r11
  int TightBounds; // eax
  unsigned int v20; // ecx
  float v21[6]; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v7 = *(_BYTE *)(v3 + 68);
  v8 = *(float *)(v3 + 20);
  v9 = *(float *)(v3 + 16);
  if ( v7 )
  {
    v10 = v9 + *(float *)(v3 + 24);
    v11 = v8 + *(float *)(v3 + 28);
  }
  else
  {
    v10 = *(float *)(v3 + 24);
    v11 = *(float *)(v3 + 28);
  }
  v12 = v10 - v9;
  if ( v7 )
  {
    if ( (float)(*(float *)(v3 + 32) + *(float *)(v3 + 32)) > v12 )
      goto LABEL_23;
    v13 = v11 - v8;
    v14 = *(float *)(v3 + 36) + *(float *)(v3 + 36);
  }
  else
  {
    if ( (float)(*(float *)(v3 + 40) + *(float *)(v3 + 32)) > v12
      || (float)(*(float *)(v3 + 56) + *(float *)(v3 + 48)) > v12
      || (v13 = v11 - v8, (float)(*(float *)(v3 + 60) + *(float *)(v3 + 36)) > v13) )
    {
LABEL_23:
      TightBounds = CShape::GetTightBounds(a1, (__int64)a2, v5);
      if ( TightBounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, TightBounds, 0x6Au, 0LL);
      return 0LL;
    }
    v14 = *(float *)(v3 + 52) + *(float *)(v3 + 44);
  }
  if ( v14 > v13 )
    goto LABEL_23;
  if ( a3 )
  {
    if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a3)
      && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v5) )
    {
      goto LABEL_23;
    }
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v15 + 68) )
  {
    *(_QWORD *)v21 = *(_QWORD *)(v15 + 16);
    v21[2] = v21[0] + *(float *)(v15 + 24);
    v21[3] = v21[1] + *(float *)(v15 + 28);
  }
  else
  {
    *(_OWORD *)v21 = *(_OWORD *)(v15 + 16);
  }
  *(_OWORD *)a2 = *(_OWORD *)v21;
  if ( v5 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(v5) )
    CMILMatrix::Transform2DBoundsHelper<0>(v17, a2);
  return 0LL;
}
