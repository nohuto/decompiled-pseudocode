/*
 * XREFs of BcdDeleteObject @ 0x14096ED00
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408F58D4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140970678 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3A74 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407848A8 (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, 0LL) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
    v4 = BiDeleteKey((__int64)BcdObjectHandle);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
