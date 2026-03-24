/*
 * XREFs of ExIsSoftBoot @ 0x14039AD70
 * Callers:
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     PoClearTransitionMarker @ 0x14079A638 (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 *     IoAcquireKsrPersistentMemory @ 0x14089BC10 (IoAcquireKsrPersistentMemory.c)
 *     IoQueryKsrPersistentMemorySize @ 0x14089BE80 (IoQueryKsrPersistentMemorySize.c)
 *     EtwpSavePersistedLoggers @ 0x14094925C (EtwpSavePersistedLoggers.c)
 *     BapdRecordFirmwareBootStats @ 0x140999250 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_140C197B8 & 4) != 0;
}
