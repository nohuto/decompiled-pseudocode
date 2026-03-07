__int64 __fastcall ExpCreateOutputARC(_DWORD *a1, unsigned int *a2, __int64 a3, const wchar_t *a4)
{
  __int64 result; // rax
  wchar_t *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  wchar_t *v16; // r15
  unsigned int v17; // r12d
  PVOID P[7]; // [rsp+20h] [rbp-38h] BYREF

  P[0] = 0LL;
  result = ExpFindArcName(a3, P);
  if ( (int)result >= 0 )
  {
    v8 = (wchar_t *)P[0];
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)P[0] + v10) );
    v11 = v10;
    v12 = v11 * 2 + 2;
    if ( a4 )
    {
      do
        ++v9;
      while ( a4[v9] );
      v12 += 2 * v9;
    }
    v13 = v12;
    v14 = v12 + 12;
    v15 = v13 >> 1;
    if ( *a2 >= v14 )
    {
      a1[1] = v14;
      *a1 = 1;
      a1[2] = 1;
      v16 = (wchar_t *)(a1 + 3);
      v17 = v15;
      wcscpy_s(v16, v15, v8);
      ExFreePoolWithTag(v8, 0);
      if ( a4 )
        wcscpy_s(&v16[v11], v17, a4);
      *a2 = v14;
      return 0LL;
    }
    else
    {
      *a2 = v14;
      ExFreePoolWithTag(v8, 0);
      return 3221225507LL;
    }
  }
  return result;
}
