/*
 * XREFs of UintCompareFunc @ 0x1C021A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UintCompareFunc(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
