/*
 * XREFs of ExIsSoftBoot @ 0x140380700
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x14085A768 (PoClearTransitionMarker.c)
 *     IoAcquireKsrPersistentMemoryEx @ 0x14094F530 (IoAcquireKsrPersistentMemoryEx.c)
 *     IoQueryKsrPersistentMemorySizeEx @ 0x14094F800 (IoQueryKsrPersistentMemorySizeEx.c)
 *     EtwpSavePersistedLoggers @ 0x1409EB1E4 (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8BD14 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C316F8 & 4) != 0;
}
