__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  void *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  _OWORD *v11; // rax
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  unsigned int v34; // [rsp+20h] [rbp-98h]
  __int128 v35; // [rsp+30h] [rbp-88h]
  _BYTE v36[80]; // [rsp+40h] [rbp-78h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (void *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v36);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v36);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v5 + 18) )
    {
      switch ( v10 )
      {
        case 18:
          v32 = *(float *)v7 - *v5;
          *((_DWORD *)v7 + 18) = 18;
          *(float *)v7 = v32;
          break;
        case 35:
          v30 = *(float *)v7 - *v5;
          v31 = *((float *)v7 + 1) - v5[1];
          *((_DWORD *)v7 + 18) = 35;
          *(float *)v7 = v30;
          *((float *)v7 + 1) = v31;
          break;
        case 52:
          v25 = v5[1];
          v26 = v5[2];
          v27 = *(float *)v7 - *v5;
          *((_DWORD *)v7 + 18) = 52;
          v28 = *((float *)v7 + 1) - v25;
          *(float *)v7 = v27;
          v29 = *((float *)v7 + 2) - v26;
          *((float *)v7 + 1) = v28;
          *((float *)v7 + 2) = v29;
          break;
        case 69:
          *(float *)&v35 = *(float *)v7 - *v5;
          *(float *)&v23 = *((float *)v7 + 2) - v5[2];
          *((float *)&v35 + 1) = *((float *)v7 + 1) - v5[1];
          *(float *)&v24 = *((float *)v7 + 3) - v5[3];
          *((_DWORD *)v7 + 18) = 69;
          *((_QWORD *)&v35 + 1) = __PAIR64__(v24, v23);
          *(_OWORD *)v7 = v35;
          break;
        case 104:
          v12 = v5[1];
          v13 = v5[2];
          v14 = v5[3];
          v15 = v5[4];
          v16 = v5[5];
          v17 = *(float *)v7 - *v5;
          *((_DWORD *)v7 + 18) = 104;
          v18 = *((float *)v7 + 1) - v12;
          *(float *)v7 = v17;
          v19 = *((float *)v7 + 2);
          *((float *)v7 + 1) = v18;
          v20 = *((float *)v7 + 3) - v14;
          *((float *)v7 + 2) = v19 - v13;
          v21 = *((float *)v7 + 4);
          *((float *)v7 + 3) = v20;
          v22 = *((float *)v7 + 5) - v16;
          *((float *)v7 + 4) = v21 - v15;
          *((float *)v7 + 5) = v22;
          break;
        case 265:
          v11 = (_OWORD *)D2DMatrix::operator-(v7, v36, v5);
          *((_DWORD *)v7 + 18) = 265;
          *(_OWORD *)v7 = *v11;
          *((_OWORD *)v7 + 1) = v11[1];
          *((_OWORD *)v7 + 2) = v11[2];
          *((_OWORD *)v7 + 3) = v11[3];
          break;
        default:
          v34 = 1043;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v3;
    }
    v34 = 989;
  }
  else
  {
    v34 = 966;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v34,
    0LL);
  return v3;
}
