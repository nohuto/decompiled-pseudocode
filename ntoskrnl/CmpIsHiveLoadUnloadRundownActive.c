/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140AF2444
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmpInitHiveFromFile @ 0x1406C0BF0 (CmpInitHiveFromFile.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
