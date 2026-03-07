__int64 __fastcall FilterConvertToString(unsigned int a1, __int64 a2, unsigned int a3, wchar_t *a4, unsigned int *a5)
{
  wchar_t *v5; // r14
  unsigned int v6; // edi
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v13 = 0;
  v10 = 2;
  if ( a3 >= 2 )
    *a4 = 0;
  v11 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      result = ExpressionConvertToString((_DWORD *)(a2 + 56LL * v11), v6, v5, &v13);
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
        break;
      if ( v10 + v13 - 2 < v10 )
        return 3221225621LL;
      v10 += v13 - 2;
      if ( v6 >= (unsigned __int64)v13 - 2 )
      {
        v6 += 2 - v13;
        v5 += ((unsigned __int64)v13 - 2) >> 1;
      }
      if ( ++v11 >= a1 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = 0LL;
    if ( a5 )
      *a5 = v10;
    if ( v10 > a3 )
      return 3221225507LL;
  }
  return result;
}
