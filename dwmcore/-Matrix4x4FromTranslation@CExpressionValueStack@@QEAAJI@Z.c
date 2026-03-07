__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  char v4; // r13
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  char *v9; // rbx
  int v10; // xmm0_4
  int v11; // xmm1_4
  __int64 v12; // rax
  int *v13; // rbx
  CExpressionValue *v14; // rax
  char *v15; // rdi
  __int64 v16; // rax
  CExpressionValue *v17; // rax
  int *v18; // r15
  __int64 v19; // rax
  CExpressionValue *v20; // rax
  int v21; // xmm2_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  unsigned int v25; // [rsp+28h] [rbp-39h]
  int v26; // [rsp+40h] [rbp-21h]
  _BYTE v27[80]; // [rsp+48h] [rbp-19h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 4);
  if ( v5 >= a2 )
  {
    if ( a2 == 1 )
    {
      v7 = v5 - 1;
      if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
      {
        v9 = (char *)(*((_QWORD *)this + 3) + 80 * v7);
      }
      else
      {
        v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
        v9 = (char *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      }
      if ( *((_DWORD *)v9 + 18) == 52 )
      {
        v4 = 1;
        v26 = *((_DWORD *)v9 + 2);
        v10 = *(_QWORD *)v9;
        v11 = HIDWORD(*(_QWORD *)v9);
        *((_DWORD *)v9 + 18) = 265;
        *(_QWORD *)v9 = 1065353216LL;
        *((_QWORD *)v9 + 1) = 0LL;
        *((_DWORD *)v9 + 4) = 0;
        *(_QWORD *)(v9 + 20) = 1065353216LL;
        *(_QWORD *)(v9 + 28) = 0LL;
        *((_DWORD *)v9 + 9) = 0;
        *((_QWORD *)v9 + 5) = 1065353216LL;
        *((_DWORD *)v9 + 12) = v10;
        *((_DWORD *)v9 + 13) = v11;
        *((_DWORD *)v9 + 14) = v26;
        *((_DWORD *)v9 + 15) = 1065353216;
        v9[76] = 1;
      }
    }
    else if ( a2 == 3 )
    {
      v12 = v5 - 3;
      v13 = (int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v12 < *((_DWORD *)this + 12) )
      {
        v15 = (char *)(*((_QWORD *)this + 3) + 80 * v12);
      }
      else
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
        v15 = (char *)&CExpressionValueStack::s_emptyValue;
      }
      v16 = (unsigned int)(*((_DWORD *)this + 4) - 2);
      if ( (unsigned int)v16 < *((_DWORD *)this + 12) )
      {
        v18 = (int *)(*((_QWORD *)this + 3) + 80 * v16);
      }
      else
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
        v18 = (int *)&CExpressionValueStack::s_emptyValue;
      }
      v19 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v19 < *((_DWORD *)this + 12) )
      {
        v13 = (int *)(*((_QWORD *)this + 3) + 80 * v19);
      }
      else
      {
        v20 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v20);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      }
      if ( *((_DWORD *)v15 + 18) == 18 && v18[18] == 18 && v13[18] == 18 )
      {
        v21 = *v13;
        v22 = *(_DWORD *)v15;
        v23 = *v18;
        v6 = 0;
        *((_DWORD *)v15 + 18) = 265;
        *(_QWORD *)v15 = 1065353216LL;
        *((_QWORD *)v15 + 1) = 0LL;
        *((_DWORD *)v15 + 4) = 0;
        *(_QWORD *)(v15 + 20) = 1065353216LL;
        *(_QWORD *)(v15 + 28) = 0LL;
        *((_DWORD *)v15 + 9) = 0;
        *((_QWORD *)v15 + 5) = 1065353216LL;
        *((_DWORD *)v15 + 12) = v22;
        *((_DWORD *)v15 + 13) = v23;
        *((_DWORD *)v15 + 14) = v21;
        *((_DWORD *)v15 + 15) = 1065353216;
        v15[76] = 1;
        goto LABEL_26;
      }
    }
    v6 = 0;
    if ( !v4 )
    {
      v25 = 5795;
      goto LABEL_3;
    }
LABEL_26:
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v25 = 5745;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0LL,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v25,
    0LL);
  return v6;
}
