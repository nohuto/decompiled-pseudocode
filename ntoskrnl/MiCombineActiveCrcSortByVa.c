/*
 * XREFs of MiCombineActiveCrcSortByVa @ 0x1402DD2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineActiveCrcSortByVa(const void *a1, const void *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
