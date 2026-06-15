/*
 * XREFs of sub_180106B20 @ 0x180106B20
 * Callers:
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 *     sub_1801089FC @ 0x1801089FC (sub_1801089FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180106B20(__int64 a1, unsigned int *a2, int *a3, unsigned int *a4, _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 v9; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !v9 )
    return 0LL;
  while ( *(_DWORD *)(v9 + 112) != *a4 || *(_QWORD *)v9 != *(_QWORD *)a2 )
  {
    v8 = v9;
    v9 = *(_QWORD *)(v9 + 104);
    if ( !v9 )
      return 0LL;
  }
  *a5 = v8;
  return v9;
}
