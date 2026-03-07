__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h] BYREF
  int v9; // [rsp+68h] [rbp-10h]
  char v10; // [rsp+6Ch] [rbp-Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 18;
  v10 = 0;
  CExpressionValue::operator=(a3, (__int64)v7);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v8);
  result = *(unsigned int *)(a1 + 152);
  switch ( (_DWORD)result )
  {
    case 0x12:
      result = *a2;
      *(_DWORD *)a3 = result;
      *(_DWORD *)(a3 + 72) = 18;
      break;
    case 0x23:
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 72) = 35;
      break;
    case 0x34:
      result = a2[2];
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 8) = result;
      *(_DWORD *)(a3 + 72) = 52;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
