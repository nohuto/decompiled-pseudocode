/*
 * XREFs of KeQueryActiveProcessors @ 0x140457AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140D1EFE8[0];
}
