/*
 * XREFs of sub_180044780 @ 0x180044780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180044780(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 184;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
  *a2 = v2;
  return a2;
}
