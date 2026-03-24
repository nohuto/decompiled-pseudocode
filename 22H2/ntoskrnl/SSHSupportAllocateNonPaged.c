/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x140322FE4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x14069A960 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x1406FB63C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1406FB6E4 (SmpKeyedStoreCreate.c)
 *     SmKmStoreCreatePrepare @ 0x1406FB8D4 (SmKmStoreCreatePrepare.c)
 *     SmProcessCreateRequest @ 0x1406FD1F0 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1406FD558 (SmKmStoreAdd.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407CCEF0 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408FB810 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x140929BD4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14092A088 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14092A830 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14092B36C (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14092BAC4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14092BCC0 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14092D180 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14092DBA0 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14092E0C8 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14092E4B0 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
