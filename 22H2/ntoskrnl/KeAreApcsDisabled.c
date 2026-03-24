/*
 * XREFs of KeAreApcsDisabled @ 0x140349ED0
 * Callers:
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
