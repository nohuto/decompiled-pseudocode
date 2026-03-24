/*
 * XREFs of NtSetIRTimer @ 0x14032BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140349154 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
