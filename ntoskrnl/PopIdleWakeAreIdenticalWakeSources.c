/*
 * XREFs of PopIdleWakeAreIdenticalWakeSources @ 0x14059B030
 * Callers:
 *     PopIdleWakeFindOrAllocateWakeSource @ 0x14059B27C (PopIdleWakeFindOrAllocateWakeSource.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

bool __fastcall PopIdleWakeAreIdenticalWakeSources(int a1, _BYTE *a2, _QWORD *a3)
{
  char v3; // bl
  unsigned int v4; // ecx
  __int64 v5; // rdx
  char v6; // al
  const wchar_t *v7; // rdx
  const wchar_t *v8; // r9
  size_t v9; // r8

  v3 = 0;
  if ( a1 == 128 )
  {
    v3 = 1;
    v4 = 0;
    v5 = a2 - (_BYTE *)a3;
    while ( *(_QWORD *)((char *)a3 + v5) == *a3 )
    {
      ++v4;
      ++a3;
      if ( v4 >= 3 )
        return v3;
    }
    return 0;
  }
  else if ( a1 == 129 )
  {
    v6 = *a2;
    if ( *a2 == *(_BYTE *)a3 )
    {
      v7 = (const wchar_t *)(a2 + 2);
      v8 = (const wchar_t *)a3 + 1;
      if ( v6 == 3 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v7[v9] );
        if ( !wcsnicmp(v8, v7, v9) )
          return 1;
      }
      else
      {
        return *(_BYTE *)v7 == *(_BYTE *)v8;
      }
    }
  }
  return v3;
}
