/*
 * XREFs of MiCombineActiveCrcSortByHash @ 0x1402CEB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineActiveCrcSortByHash(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 result; // rax

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD *)(*a1 + 8);
  if ( v4 > *(_QWORD *)(*a2 + 8) )
    return 1LL;
  if ( v4 < *(_QWORD *)(*a2 + 8) )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 < *(_QWORD *)(v3 + 24) )
    return 0xFFFFFFFFLL;
  if ( v5 > *(_QWORD *)(v3 + 24) )
    return 1LL;
  v6 = *(_DWORD *)(v2 + 32);
  v7 = *(_DWORD *)(v3 + 32);
  if ( v6 > v7 )
    return 1LL;
  result = 0LL;
  if ( v6 < v7 )
    return 0xFFFFFFFFLL;
  return result;
}
