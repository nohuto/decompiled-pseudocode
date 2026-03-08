/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x1402A4AEC
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SmCreatePartition @ 0x140728884 (SmCreatePartition.c)
 *     SmStoreSetProcessVaRanges @ 0x1407658C4 (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1407DD424 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1407DD9A8 (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1407DDA38 (SmKmStoreAdd.c)
 *     SleepstudyHelperCreateLibrary @ 0x140847520 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x14099ECF0 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x1409D3FBC (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D50AC (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5C34 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409D6384 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409D656C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1409D7A3C (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409D8464 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409D8984 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1409D8D54 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
