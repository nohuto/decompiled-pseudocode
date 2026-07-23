/*
 * XREFs of BcdCloseObject @ 0x140783ACC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC690 (WheaPersistBadPageToBcd.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x140777F80 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140781C60 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140782180 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F58D4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096F218 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140970200 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1409707D4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140970978 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140971320 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140971C10 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140972EE0 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409731BC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
