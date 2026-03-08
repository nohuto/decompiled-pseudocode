/*
 * XREFs of KiIsXSaveFeatureAllowed @ 0x140A8D3E0
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x140A8D294 (KiIntersectFeaturesWithPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsXSaveFeatureAllowed(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r10d
  _DWORD *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v11; // rcx

  v5 = 0;
  v6 = (_DWORD *)(a1 + *(_QWORD *)(a1 + 16LL * a2 + 40));
  if ( !*v6 )
    return 0;
  while ( 1 )
  {
    v7 = 14LL * v5;
    v8 = *(_QWORD *)&v6[v7 + 2] - *(_QWORD *)a4;
    if ( !v8 )
      v8 = (unsigned int)v6[v7 + 4] - (unsigned __int64)*(unsigned int *)(a4 + 8);
    if ( !v8 )
      break;
    if ( ++v5 >= *v6 )
      return 0;
  }
  if ( *(_QWORD *)&v6[v7 + 14]
    && (v9 = *(_DWORD *)(a4 + 12), ((*(_DWORD *)(a4 + 12) >> 12) & 3) == LOBYTE(v6[v7 + 6]))
    && ((unsigned __int8)v9 >> 4) + ((v9 >> 10) & 0xF0) == LOWORD(v6[v7 + 7])
    && ((v9 >> 8) & 0xF) + ((v9 >> 14) & 0xFF0) == HIWORD(v6[v7 + 6])
    && (v9 & 0xF) == HIWORD(v6[v7 + 7])
    && (v11 = *(_QWORD *)&v6[v7 + 10]) != 0
    && *(_QWORD *)(a4 + 16) <= v11 )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
