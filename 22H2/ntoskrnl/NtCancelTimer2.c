/*
 * XREFs of NtCancelTimer2 @ 0x140339500
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140339550 (ExpSetTimer2.c)
 */

__int64 __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1);
}
