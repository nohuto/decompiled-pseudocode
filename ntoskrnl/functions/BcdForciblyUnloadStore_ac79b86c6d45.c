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
