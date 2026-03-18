/*
 * XREFs of ExIsSoftBoot @ 0x140374280
 * Callers:
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x1408030CC (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x140952550 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x140952820 (IoQueryKsrPersistentMemorySizeEx.c)
 *     EtwpSavePersistedLoggers @ 0x1409EE078 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140A88E78 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C31AF8 & 4) != 0;
}
