/*
 * XREFs of PspSortHandleList @ 0x1409AECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSortHandleList(_DWORD *a1, _DWORD *a2)
{
  return (*a1 > *a2) - (unsigned int)(*a1 < *a2);
}
