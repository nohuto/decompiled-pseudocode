/*
 * XREFs of NtCancelTimer2 @ 0x14032B800
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140349154 (ExpSetTimer2.c)
 */

__int64 __fastcall NtCancelTimer2(void *a1)
{
  return ExpSetTimer2(a1);
}
