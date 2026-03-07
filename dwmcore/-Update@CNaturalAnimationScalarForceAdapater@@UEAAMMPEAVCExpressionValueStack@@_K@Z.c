float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  CExpressionValue *v11; // rax
  float *v12; // rbx
  float result; // xmm0_4
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  float *v16; // rbx
  _BYTE v17[80]; // [rsp+30h] [rbp-58h] BYREF
  const void *retaddr; // [rsp+88h] [rbp+0h]
  char v19; // [rsp+90h] [rbp+8h] BYREF

  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
    v5 = (_QWORD *)v5[2];
  v7 = (*(__int64 (__fastcall **)(_QWORD *, struct CExpressionValueStack *, __int64, char *))(*v5 + 256LL))(
         v5,
         a3,
         a4,
         &v19);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT(v7, retaddr);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
    v8 = *(_QWORD *)(v8 + 16);
  v9 = *(_DWORD *)(v8 + 152);
  if ( v9 == 18 )
  {
    v14 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    if ( (unsigned int)v14 < *((_DWORD *)a3 + 12) )
    {
      v16 = (float *)(*((_QWORD *)a3 + 3) + 80 * v14);
    }
    else
    {
      v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      v16 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    result = *v16;
  }
  else
  {
    if ( v9 != 35 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v10 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    if ( (unsigned int)v10 < *((_DWORD *)a3 + 12) )
    {
      v12 = (float *)(*((_QWORD *)a3 + 3) + 80 * v10);
    }
    else
    {
      v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
      v12 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    }
    result = *v12;
    if ( *((_DWORD *)this + 4) )
      result = v12[1];
  }
  --*((_DWORD *)a3 + 4);
  return result;
}
