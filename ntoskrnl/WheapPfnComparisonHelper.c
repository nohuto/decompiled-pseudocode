/*
 * XREFs of WheapPfnComparisonHelper @ 0x140610120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapPfnComparisonHelper(void *a1, _QWORD *a2, _QWORD *a3)
{
  return (*a2 > *a3) - (unsigned int)(*a2 < *a3);
}
