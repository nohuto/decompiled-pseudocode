/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x140753AB4
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  unsigned int v4; // r15d
  const wchar_t *v5; // rbp
  int i; // edi
  wchar_t *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rax
  const wchar_t *j; // rdx
  wchar_t v13; // ax
  const char *v15; // r9
  int v16; // r8d
  __int64 v17; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *a1 != 0; ; ++i )
    {
      v7 = wcschr(a1, 0x3Bu);
      if ( !v7 )
        break;
      a1 = v7 + 1;
    }
    v9 = (_DWORD *)AslAlloc(v8, 48LL * (unsigned int)(i - 1) + 56);
    v10 = v9;
    if ( v9 )
    {
      *v9 = i;
      v11 = -1LL;
      do
        ++v11;
      while ( v3[v11] );
      for ( j = &v3[v11]; ; --j )
      {
        if ( j < v3 )
        {
          *a2 = v10;
          return 1LL;
        }
        v13 = *j;
        if ( *j == 92 )
        {
          if ( v5 )
          {
LABEL_13:
            if ( v3 != j )
              continue;
            goto LABEL_8;
          }
          v5 = j;
        }
        if ( v13 != 59 )
          goto LABEL_13;
LABEL_8:
        if ( v5 )
        {
          if ( v13 == 59 )
            ++j;
          v17 = 6LL * v4++;
          v10[2 * v17 + 4] = v5 - j + 1;
          v5 = 0LL;
          *(_QWORD *)&v10[2 * v17 + 2] = j;
        }
      }
    }
    v15 = "Failed to allocate search path parts";
    v16 = 1417;
  }
  else
  {
    v15 = "Invalid argument";
    v16 = 1388;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", v16, (_DWORD)v15);
  return 0LL;
}
