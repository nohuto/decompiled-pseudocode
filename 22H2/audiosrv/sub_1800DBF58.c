/*
 * XREFs of sub_1800DBF58 @ 0x1800DBF58
 * Callers:
 *     sub_180050620 @ 0x180050620 (sub_180050620.c)
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_1800DBF58(__int64 a1)
{
  __int128 v1; // xmm1

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
    *(double *)&v1 = (double)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) / (double)(int)*(_QWORD *)(a1 + 16);
  return (__m128)v1;
}
