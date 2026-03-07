__int64 *__fastcall HalpFindDevice(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rbx
  __int64 *v4; // r14
  char v5; // bp
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // zf
  unsigned int v10; // eax
  const wchar_t *v11; // rdx

  v1 = (__int64 *)qword_140C5FDE8;
  v2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  while ( v1 != &qword_140C5FDE8 )
  {
    v7 = v1[2];
    v4 = v1;
    v8 = *(_DWORD *)(a1 + 220);
    if ( *(_DWORD *)(v7 + 220) != v8 )
      goto LABEL_17;
    if ( v8 )
    {
      v10 = *(_DWORD *)(a1 + 232);
      if ( *(_DWORD *)(v7 + 232) != v10 )
        goto LABEL_17;
      if ( !*(_QWORD *)(a1 + 224) )
        goto LABEL_17;
      v11 = *(const wchar_t **)(v7 + 224);
      if ( !v11 )
        goto LABEL_17;
      v9 = wcsncmp(*(const wchar_t **)(a1 + 224), v11, v10) == 0;
    }
    else
    {
      if ( *(_DWORD *)v7 != *(_DWORD *)a1 || *(_DWORD *)(v7 + 4) != *(_DWORD *)(a1 + 4) )
        goto LABEL_17;
      v9 = *(_WORD *)(v7 + 8) == *(_WORD *)(a1 + 8);
    }
    if ( v9 )
    {
      v5 = 1;
      break;
    }
LABEL_17:
    v1 = (__int64 *)*v1;
  }
  if ( v5 == 1 )
    return v4;
  return (__int64 *)v2;
}
