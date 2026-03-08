/*
 * XREFs of PspQueryProcessIdListCallback @ 0x1407910B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspQueryProcessIdListCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 1120) & 1) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 8) >= 8u )
  {
    **(_QWORD **)a2 = *(_QWORD *)(a1 + 1088);
    ++*(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 += 8LL;
    *(_DWORD *)(a2 + 8) -= 8;
    --*(_DWORD *)(a2 + 16);
    return 0LL;
  }
  return 2147483653LL;
}
