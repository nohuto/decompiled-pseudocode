/*
 * XREFs of KeAreApcsDisabled @ 0x1402049F0
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
