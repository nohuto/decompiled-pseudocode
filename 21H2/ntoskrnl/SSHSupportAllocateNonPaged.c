/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1402C9AC4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406B78F0 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x140710A9C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x140710B44 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x140710D34 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x14071109C (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x140712BC0 (SmKmStoreCreatePrepare.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407CCFD0 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408FB7C0 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x140929B84 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14092A038 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14092A7E0 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14092B31C (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14092BA74 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14092BC70 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CE74 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14092D130 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14092DB50 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14092E078 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14092E460 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
