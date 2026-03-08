/*
 * XREFs of GreGetHandleCount @ 0x1C0185C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetHandleCount(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL) + 4LL);
}
