/*
 * XREFs of IsPrecisionTouchPadEnabled @ 0x1C015CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPrecisionTouchPadEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(unsigned int *)(SGDGetUserSessionState(a1, a2, a3, a4) + 520);
}
