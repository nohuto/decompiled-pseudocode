/*
 * XREFs of KeQueryActiveProcessors @ 0x14045FA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140D1EFE8[0];
}
