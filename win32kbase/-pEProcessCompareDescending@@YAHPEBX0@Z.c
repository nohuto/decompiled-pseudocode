/*
 * XREFs of ?pEProcessCompareDescending@@YAHPEBX0@Z @ 0x1C000DCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall pEProcessCompareDescending(_QWORD *a1, _QWORD *a2)
{
  if ( *a2 > *a1 )
    return 1LL;
  else
    return (unsigned int)-(*a2 < *a1);
}
