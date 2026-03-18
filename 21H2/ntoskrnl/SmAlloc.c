/*
 * XREFs of SmAlloc @ 0x140260C2C
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1406EC47C (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1406ED260 (SmpKeyedStoreCreate.c)
 *     SmKmStoreCreatePrepare @ 0x1406ED450 (SmKmStoreCreatePrepare.c)
 *     SmProcessCreateRequest @ 0x1406ED528 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1406ED88C (SmKmStoreAdd.c)
 *     SmProcessListRequest @ 0x1409D3EC0 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1409D43FC (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5860 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1409D5FA4 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1409D618C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7390 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1409D7654 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1409D8074 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1409D8588 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1409D894C (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
