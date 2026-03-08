/*
 * XREFs of NtSetIRTimer @ 0x1402CF830
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402CF8A0 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
