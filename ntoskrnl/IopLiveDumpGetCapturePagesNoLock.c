unsigned __int64 __fastcall IopLiveDumpGetCapturePagesNoLock(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 48);
  *a5 = 0;
  if ( v8 != -1LL )
  {
    v13 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        result = RtlFindSetBitsEx(a1, 1uLL, v8);
        if ( result < v8 || result == -1LL )
          break;
        v14 = (unsigned int)*a5;
        v8 = result + 1;
        *(_QWORD *)(a3 + 8 * v14) = result;
        v13 = v14 + 1;
        *a5 = v14 + 1;
        if ( (int)v14 + 1 >= a4 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      result = (unsigned int)(v13 - 1);
      v7 = *(_QWORD *)(a3 + 8 * result) + 1LL;
    }
  }
  *(_QWORD *)(a2 + 48) = v7;
  if ( *a5 )
  {
    v15 = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 40) = *a5;
    *a6 = v15;
    result = v15 + 1;
    *(_QWORD *)(a2 + 56) = v15 + 1;
  }
  return result;
}
