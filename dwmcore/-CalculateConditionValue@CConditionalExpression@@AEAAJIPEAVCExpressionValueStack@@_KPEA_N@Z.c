__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  CExpressionValue *v11; // rax
  _DWORD *v12; // rbx
  char v13; // cl
  bool *v14; // rax
  _BYTE v16[88]; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 43) + 16LL * a2);
  v7 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)v6 + 256LL))(
         v6,
         a3,
         a4,
         &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x15Eu, 0LL);
  }
  else
  {
    v10 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    if ( (unsigned int)v10 < *((_DWORD *)a3 + 12) )
    {
      v12 = (_DWORD *)(*((_QWORD *)a3 + 3) + 80 * v10);
    }
    else
    {
      v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      v12 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    if ( v12[18] == 17 )
    {
      v13 = *(_BYTE *)v12;
      v14 = a5;
      --*((_DWORD *)a3 + 4);
      v9 = 0;
      *v14 = v13;
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x164u, 0LL);
    }
  }
  return v9;
}
