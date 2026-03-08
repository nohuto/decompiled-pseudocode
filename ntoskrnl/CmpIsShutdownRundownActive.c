/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140AF24D4
 * Callers:
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown.Count & 1;
}
