/*
 * XREFs of InitializeScripts @ 0x1C03B68E8
 * Callers:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00BA7B4 (-vLookupScript@@YAXKPEAGK@Z.c)
 * Callees:
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C00BA838 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 */

__int64 __fastcall InitializeScripts(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r14
  unsigned __int16 **v3; // rbx
  int v5; // ebp
  unsigned __int16 *v6; // r12
  unsigned int i; // esi
  int v8; // eax
  unsigned int j; // esi
  int v10; // eax
  int v11; // edx
  unsigned __int16 *v12; // rcx
  unsigned __int16 v13; // r9
  unsigned __int16 *v14; // r8
  int v15; // eax
  int v16; // edx

  v1 = 1;
  if ( hModuleWinKernel )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
    v3 = (unsigned __int16 **)(v2 + 19600);
    if ( *(_QWORD *)(v2 + 19600) )
      return v1;
    v5 = 0;
    v6 = 0LL;
    for ( i = 0; i < 0x13; ++i )
    {
      v8 = LOADSTRING(hModuleWinKernel, i, 0LL, 0);
      if ( !v8 )
        goto LABEL_10;
      v5 += v8 + 1;
    }
    if ( i == 19 )
    {
      if ( !(2 * v5) )
      {
        *v3 = 0LL;
        return 0;
      }
      v6 = (unsigned __int16 *)Win32AllocPoolZInit((unsigned int)(2 * v5), 1819501383LL);
    }
LABEL_10:
    *v3 = 0LL;
    if ( v6 )
    {
      for ( j = 0; j < 0x13; ++j )
      {
        *v3 = v6;
        v10 = LOADSTRING(hModuleWinKernel, j, v6, v5) + 1;
        *((_DWORD *)v3 - 2) = 0;
        v5 -= v10;
        v11 = 0;
        v6 += v10;
        v12 = *v3;
        v13 = **v3;
        if ( v13 )
        {
          v14 = *v3;
          v15 = 0;
          do
          {
            v11 = v15;
            if ( v13 == 58 )
              break;
            *((_DWORD *)v3 - 2) = 10 * v15;
            v16 = *v14 - 48;
            *v3 = v14 + 1;
            v11 = 10 * v15 + v16;
            *((_DWORD *)v3 - 2) = v11;
            if ( !j )
            {
              ++*(_DWORD *)(v2 + 19584);
              v11 = *((_DWORD *)v3 - 2);
            }
            v12 = *v3;
            v15 = v11;
            v14 = *v3;
            v13 = **v3;
          }
          while ( v13 );
        }
        *((_DWORD *)v3 - 2) = v11 + 1000;
        *v3 = v12 + 1;
        if ( !j )
          ++*(_DWORD *)(v2 + 19584);
        v3 += 2;
      }
      return v1;
    }
    return 0;
  }
  return 0LL;
}
