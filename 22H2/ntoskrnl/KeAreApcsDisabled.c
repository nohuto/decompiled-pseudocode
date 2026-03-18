/*
 * XREFs of KeAreApcsDisabled @ 0x14031D400
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
