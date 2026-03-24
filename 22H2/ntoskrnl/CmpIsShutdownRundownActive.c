/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140875BF8
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown & 1;
}
