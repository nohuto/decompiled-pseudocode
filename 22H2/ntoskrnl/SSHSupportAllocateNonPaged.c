/*
 * XREFs of SSHSupportAllocateNonPaged @ 0x14032D1C0
 * Callers:
 *     SmCreatePartition @ 0x1407064D8 (SmCreatePartition.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407A8670 (SleepstudyHelperBuildBlocker.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B77DC (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1407B7A40 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1407B7C2C (SmProcessCreateRequest.c)
 *     SmKmStoreCreatePrepare @ 0x1407B7F8C (SmKmStoreCreatePrepare.c)
 *     SmKmStoreAdd @ 0x1407B801C (SmKmStoreAdd.c)
 *     SleepstudyHelperCreateLibrary @ 0x140849A10 (SleepstudyHelperCreateLibrary.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1D80 (SleepstudyHelperCreateBlockerData.c)
 *     SmProcessListRequest @ 0x1409D6E5C (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D7F4C (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1409D8AD4 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409D9224 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409D940C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1409DA8DC (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409DB304 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409DB824 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1409DBBF4 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SSHSupportAllocateNonPaged(__int64 a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a1, a2);
}
