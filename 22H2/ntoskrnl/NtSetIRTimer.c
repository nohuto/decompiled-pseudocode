/*
 * XREFs of NtSetIRTimer @ 0x1403394E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140339550 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
