/*
 * XREFs of EngFindImageProcAddress @ 0x1C026ECA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngFindImageProcAddress(HANDLE hModule, LPSTR lpProcName)
{
  __int64 v3; // rax
  char **i; // r8
  LPSTR v5; // rcx
  int v6; // r10d
  int v7; // edx
  __int64 v9; // rbx
  size_t v10; // r8
  _DWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int *v14; // rbp
  __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // r15
  size_t v18; // r8

  if ( hModule )
  {
    v9 = *((_QWORD *)hModule + 2);
    v10 = -1LL;
    do
      ++v10;
    while ( lpProcName[v10] );
    if ( !strncmp(lpProcName, "DrvEnableDriver", v10) )
    {
      return *(PVOID *)(v9 + 32);
    }
    else
    {
      v11 = *(_DWORD **)(v9 + 40);
      if ( v11
        && (v12 = *(_QWORD *)(v9 + 16),
            v13 = 0LL,
            v14 = (unsigned int *)(v12 + (unsigned int)v11[8]),
            v15 = v12 + (unsigned int)v11[9],
            v16 = v11[6],
            v17 = v12 + (unsigned int)v11[7],
            v16) )
      {
        while ( 1 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( lpProcName[v18] );
          if ( !strncmp(lpProcName, (const char *)(*(_QWORD *)(v9 + 16) + *v14), v18) )
            break;
          v13 = (unsigned int)(v13 + 1);
          ++v14;
          if ( (unsigned int)v13 >= v16 )
            return 0LL;
        }
        return (PVOID)(*(_QWORD *)(v9 + 16) + *(unsigned int *)(v17 + 4LL * *(unsigned __int16 *)(v15 + 2 * v13)));
      }
      else
      {
        return 0LL;
      }
    }
  }
  else
  {
    v3 = 0LL;
    for ( i = &off_1C030C550; ; i += 2 )
    {
      v5 = lpProcName;
      do
      {
        v6 = (unsigned __int8)v5[*i - lpProcName];
        v7 = (unsigned __int8)*v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      if ( !v7 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0x48 )
        return 0LL;
    }
    return (&off_1C030C550)[2 * v3 + 1];
  }
}
