__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspective(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float *v10; // r15
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  float *v13; // r12
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  __int128 v16; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _OWORD v19[5]; // [rsp+30h] [rbp-50h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 4 )
  {
    v4 = v1 - 4;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 3);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v10 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v10 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 4) - 2);
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v13 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v13 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v14 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v14 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v14);
    }
    else
    {
      v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    }
    if ( v7[18] == 18 )
    {
      if ( *((_DWORD *)v10 + 18) == 18 )
      {
        if ( *((_DWORD *)v13 + 18) == 18 )
        {
          if ( *((_DWORD *)v5 + 18) == 18 )
          {
            if ( D2DMatrixPerspectiveRH((struct D2DMatrix *)v19, *(float *)v7, *v10, *v13, *v5) )
            {
              v16 = v19[0];
              v7[18] = 265;
              *(_OWORD *)v7 = v16;
              *((_OWORD *)v7 + 1) = v19[1];
              *((_OWORD *)v7 + 2) = v19[2];
              *((_OWORD *)v7 + 3) = v19[3];
              *((_BYTE *)v7 + 76) = 1;
              *((_DWORD *)this + 4) -= 3;
              return 0;
            }
            v18 = 6643;
          }
          else
          {
            v18 = 6616;
          }
        }
        else
        {
          v18 = 6615;
        }
      }
      else
      {
        v18 = 6614;
      }
    }
    else
    {
      v18 = 6613;
    }
  }
  else
  {
    v18 = 6605;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18,
    0LL);
  return v3;
}
