/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1405875E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r10
  unsigned int v7; // r9d
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  _DWORD *v10; // r8
  unsigned int v11; // edx
  int v12; // esi
  _DWORD *v13; // r8
  unsigned int i; // eax

  v4 = *(_DWORD *)a1;
  v5 = a2;
  if ( *(_DWORD *)a1 <= a2 )
  {
    *a4 = a2;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (_DWORD *)(v8 + 4 * ((unsigned __int64)(v4 - 1) >> 5));
  v10 = (_DWORD *)(v8 + 4 * (v5 >> 5));
  if ( v10 != v9 && (*v10 | *((_DWORD *)qword_140012120 + (v5 & 0x1F))) == -1 )
  {
    LODWORD(v5) = v5 - (v5 & 0x1F) + 32;
    for ( ++v10; v10 < v9 && *v10 == -1; ++v10 )
      LODWORD(v5) = v5 + 32;
  }
  for ( ; (unsigned int)v5 < v4; LODWORD(v5) = v5 + 1 )
  {
    if ( !_bittest(*(const signed __int32 **)(a1 + 8), v5) )
      break;
  }
  v11 = 0;
  if ( v10 == v9 )
    goto LABEL_19;
  v12 = v5 & 0x1F;
  if ( (*v10 & ~*((_DWORD *)qword_140012120 + (v5 & 0x1F))) != 0 )
    goto LABEL_19;
  v11 = 32 - v12;
  if ( 32 - v12 < a3 )
  {
    v13 = v10 + 1;
    while ( v13 < v9 && !*v13 )
    {
      ++v13;
      v11 += 32;
      if ( v11 >= a3 )
        goto LABEL_23;
    }
LABEL_19:
    for ( i = v11 + v5; i < *(_DWORD *)a1; ++v11 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 8), i) )
        break;
      if ( v11 >= a3 )
        break;
      ++i;
    }
  }
LABEL_23:
  *a4 = v5;
  v7 = v11;
  if ( v11 > a3 )
    return a3;
  return v7;
}
