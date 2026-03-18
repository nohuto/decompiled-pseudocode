/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140AF606C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
