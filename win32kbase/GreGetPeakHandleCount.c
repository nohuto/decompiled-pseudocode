/*
 * XREFs of GreGetPeakHandleCount @ 0x1C0185CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetPeakHandleCount(__int64 a1)
{
  return **(unsigned int **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
}
