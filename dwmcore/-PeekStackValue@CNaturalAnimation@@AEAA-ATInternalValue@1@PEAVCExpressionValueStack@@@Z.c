__int64 __fastcall CNaturalAnimation::PeekStackValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  CExpressionValue *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  CExpressionValue *v13; // rax
  _DWORD *v14; // rbx
  _BYTE v16[88]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = *(_DWORD *)(a1 + 152);
  switch ( v4 )
  {
    case 18:
      v12 = (unsigned int)(*(_DWORD *)(a3 + 16) - 1);
      if ( (unsigned int)v12 < *(_DWORD *)(a3 + 48) )
      {
        v14 = (_DWORD *)(*(_QWORD *)(a3 + 24) + 80 * v12);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
        v14 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      }
      *(_DWORD *)a2 = *v14;
      break;
    case 35:
      v9 = (unsigned int)(*(_DWORD *)(a3 + 16) - 1);
      if ( (unsigned int)v9 < *(_DWORD *)(a3 + 48) )
      {
        v11 = (_QWORD *)(*(_QWORD *)(a3 + 24) + 80 * v9);
      }
      else
      {
        v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
        v11 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      }
      *(_QWORD *)a2 = *v11;
      break;
    case 52:
      v5 = (unsigned int)(*(_DWORD *)(a3 + 16) - 1);
      if ( (unsigned int)v5 < *(_DWORD *)(a3 + 48) )
      {
        v7 = (_DWORD *)(*(_QWORD *)(a3 + 24) + 80 * v5);
      }
      else
      {
        v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
        v7 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      }
      v8 = v7[2];
      *(_QWORD *)a2 = *(_QWORD *)v7;
      *(_DWORD *)(a2 + 8) = v8;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  return a2;
}
