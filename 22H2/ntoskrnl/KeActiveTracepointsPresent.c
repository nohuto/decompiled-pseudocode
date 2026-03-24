/*
 * XREFs of KeActiveTracepointsPresent @ 0x14038D6C4
 * Callers:
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeActiveTracepointsPresent()
{
  return KiTpEnabledCount != 0;
}
