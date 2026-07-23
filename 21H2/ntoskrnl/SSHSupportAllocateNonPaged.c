/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1402483BC
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140616E00 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x1406BF0EC (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1406BF194 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1406BF384 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1406BF6EC (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x1406C1210 (SmKmStoreCreatePrepare.c)
 *     SleepstudyHelperCreateLibrary @ 0x1407CD140 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1408FB920 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x140929CE4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14092A198 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x14092A940 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x14092B47C (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x14092BBD4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x14092BDD0 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CFD4 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x14092D290 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x14092DCB0 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x14092E1D8 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14092E5C0 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocateNonPaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
