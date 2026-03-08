/*
 * XREFs of BcdCloseObject @ 0x14082E5DC
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059B9D8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x14060F9E0 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 *     PopBcdClearPendingResume @ 0x14082B2FC (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14082B658 (PopBcdEstablishResumeObject.c)
 *     BiBindEfiBootManager @ 0x14082C288 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14082D024 (BiBindEfiEntries.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1409987C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdRegenerateResumeObject @ 0x140999C24 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140999E60 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDB74 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A59AB0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5AB4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140A5C248 (BiUpdateEfiEntry.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B5DFE8 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseObject(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    BiCloseKey(a1);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
