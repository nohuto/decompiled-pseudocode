/*
 * XREFs of BiZwDeleteKey @ 0x1403902DC
 * Callers:
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
