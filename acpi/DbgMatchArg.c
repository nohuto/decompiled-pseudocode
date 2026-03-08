/*
 * XREFs of DbgMatchArg @ 0x1C0059D5C
 * Callers:
 *     DbgParseOneArg @ 0x1C0059EC4 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgMatchArg(__int64 a1, const char **a2, _DWORD *a3)
{
  __int64 v5; // rbx
  char *v6; // rax
  const char *v7; // rdx
  const char *v8; // rcx
  const char *v9; // r9
  __int64 v10; // rax
  size_t v11; // rsi

  v5 = a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    while ( *(_QWORD *)v5 )
    {
      v6 = strchr("-/", **a2);
      v7 = *a2;
      if ( v6 )
        *a2 = ++v7;
      v8 = *(const char **)v5;
      v9 = v7;
      v10 = -1LL;
      do
        ++v10;
      while ( v8[v10] );
      v11 = (unsigned int)v10;
      if ( (*(_DWORD *)(v5 + 12) & 1) != 0 )
      {
        if ( !strncmp(v8, v7, (unsigned int)v10) )
          goto LABEL_14;
        v8 = *(const char **)v5;
        v9 = *a2;
      }
      if ( (*(_DWORD *)(v5 + 12) & 1) == 0 && !_strnicmp(v8, v9, v11) )
      {
LABEL_14:
        *a2 += v11;
        return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
      }
      v5 += 40LL;
      if ( !*(_DWORD *)(v5 + 8) )
        return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
    }
    ++*a3;
  }
  return v5 & -(__int64)(*(_DWORD *)(v5 + 8) != 0);
}
