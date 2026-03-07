__int64 __fastcall CExpressionValueStack::Matrix3x2(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rax
  CExpressionValue *v7; // rax
  _DWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // xmm5_4
  int v12; // xmm4_4
  int v13; // xmm3_4
  int v14; // xmm2_4
  int v15; // xmm1_4
  int v16; // xmm0_4
  unsigned int v18; // [rsp+20h] [rbp-A8h]
  _BYTE v19[80]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v20[6]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 6 )
  {
    v3 = 0;
    v4 = v20;
    v5 = 0;
    while ( 1 )
    {
      v6 = (unsigned int)(v2 + v3 - 6);
      if ( (unsigned int)v6 < *((_DWORD *)this + 12) )
      {
        v8 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v6);
      }
      else
      {
        v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
        v2 = *((unsigned int *)this + 4);
        v8 = &CExpressionValueStack::s_emptyValue;
      }
      v9 = v8[18] == 18;
      *v4 = v8;
      if ( !v9 )
        break;
      ++v3;
      ++v4;
      if ( v3 >= 6 )
      {
        v10 = v20[0];
        v11 = *(_DWORD *)v20[0];
        v12 = *(_DWORD *)v20[1];
        v13 = *(_DWORD *)v20[2];
        v14 = *(_DWORD *)v20[3];
        v15 = *(_DWORD *)v20[4];
        v16 = *(_DWORD *)v20[5];
        *(_DWORD *)(v20[0] + 72LL) = 104;
        *(_DWORD *)v10 = v11;
        *(_DWORD *)(v10 + 4) = v12;
        *(_DWORD *)(v10 + 8) = v13;
        *(_DWORD *)(v10 + 12) = v14;
        *(_DWORD *)(v10 + 16) = v15;
        *(_DWORD *)(v10 + 20) = v16;
        *(_BYTE *)(v10 + 76) = 1;
        *((_DWORD *)this + 4) -= 5;
        return v5;
      }
    }
    v18 = 5536;
  }
  else
  {
    v18 = 5522;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v18,
    0LL);
  return v5;
}
