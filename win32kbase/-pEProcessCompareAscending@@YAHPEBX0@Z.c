/*
 * XREFs of ?pEProcessCompareAscending@@YAHPEBX0@Z @ 0x1C000DCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall pEProcessCompareAscending(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
