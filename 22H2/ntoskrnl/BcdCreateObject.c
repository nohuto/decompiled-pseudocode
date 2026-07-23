/*
 * XREFs of BcdCreateObject @ 0x14096EC68
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC690 (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F58D4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14039AD98 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407848A8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14096F018 (BiCreateObject.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  int v5; // ebx
  int v6; // r14d
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  v5 = (int)Description;
  v6 = (int)Identifier;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject((_DWORD)BcdStoreHandle, v6, v5, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable((__int64)*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
