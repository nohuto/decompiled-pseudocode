__int64 __fastcall PnpConvertDevpropcompkeyArrayToString(
        __int64 a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  _WORD *v6; // r14
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v13 = 0;
  v10 = 2;
  if ( a4 >= 2 )
    *a3 = 0;
  v11 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      result = ConvertDevpropcompkeyToString(a1 + 32LL * v11, v6, v5, &v13);
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
        break;
      if ( v10 + v13 - 2 < v10 )
        return 3221225621LL;
      v10 += v13 - 2;
      if ( v5 >= (unsigned __int64)v13 - 2 )
      {
        v5 += 2 - v13;
        v6 += ((unsigned __int64)v13 - 2) >> 1;
      }
      if ( ++v11 >= a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = 0LL;
    if ( a5 )
      *a5 = v10;
    if ( v10 > a4 )
      return 3221225507LL;
  }
  return result;
}
