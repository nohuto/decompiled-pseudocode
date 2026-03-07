__int64 __fastcall ExpCreateOutputNT(__int64 a1, unsigned int *a2, const wchar_t **a3, const wchar_t *a4)
{
  int v4; // edi
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rbx
  rsize_t v12; // r14
  wchar_t *v13; // rcx
  __int64 v15; // rax

  v4 = *(unsigned __int16 *)a3 + 2;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
    v4 += 2 * v15;
  }
  v8 = v4 + 2;
  v9 = v4 + 14;
  v10 = v8 >> 1;
  if ( a1 && *a2 >= v9 )
  {
    *(_DWORD *)a1 = 1;
    v11 = a1 + 12;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = 3;
    v12 = v10;
    wcscpy_s((wchar_t *)(a1 + 12), v10, a3[1]);
    v13 = (wchar_t *)(v11 + *(unsigned __int16 *)a3 + 2LL);
    if ( a4 )
      wcscpy_s(v13, v12, a4);
    else
      *v13 = 0;
    *a2 = v9;
    return 0LL;
  }
  else
  {
    *a2 = v9;
    return 3221225507LL;
  }
}
