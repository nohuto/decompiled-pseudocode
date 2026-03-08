/*
 * XREFs of BcdForciblyUnloadStore @ 0x140A5964C
 * Callers:
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x14039026C (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     BiIsSystemStore @ 0x14082C6CC (BiIsSystemStore.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A59FB0 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5A09C (BiUnloadHiveByHandle.c)
 */

__int64 __fastcall BcdForciblyUnloadStore(__int64 a1)
{
  char IsOfflineHandle; // si
  NTSTATUS v3; // eax
  unsigned int v4; // r8d
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax

  IsOfflineHandle = BiIsOfflineHandle(a1);
  v3 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v3 >= 0 )
  {
    v6 = 0;
    if ( BiIsSystemStore(a1) && BiIsSynchFirmwareEntries(a1) )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(a1);
    }
    LOBYTE(v7) = 1;
    v8 = BiUnloadHiveByHandle(a1, v7);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v8;
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return (unsigned int)v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
