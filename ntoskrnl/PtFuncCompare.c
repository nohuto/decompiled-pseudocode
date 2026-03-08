/*
 * XREFs of PtFuncCompare @ 0x1403DF9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PtFuncCompare(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
