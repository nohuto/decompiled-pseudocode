/*
 * XREFs of EtwpComparePfn @ 0x1405F9B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpComparePfn(_QWORD *a1, _QWORD *a2)
{
  return *a1 < *a2 ? -1 : 1;
}
