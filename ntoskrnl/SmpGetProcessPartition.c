/*
 * XREFs of SmpGetProcessPartition @ 0x14029622C
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     SmProcessCreateNotification @ 0x140709D7C (SmProcessCreateNotification.c)
 *     SmStoreSetProcessVaRanges @ 0x1407658C4 (SmStoreSetProcessVaRanges.c)
 *     SmSetStoreInformation @ 0x1407990D4 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140799184 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmcProcessListRequest @ 0x140840880 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1408409FC (SmProcessRegistrationRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x140840C00 (SmProcessCompressionInfoRequest.c)
 *     SmProcessConfigRequest @ 0x1408582AC (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D3F3C (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1409D3FBC (SmProcessListRequest.c)
 *     SmProcessResizeRequest @ 0x1409D4470 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D489C (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStart @ 0x1409D4A38 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D4AD8 (SmStoreCompressionStop.c)
 *     SmcProcessCreateRequest @ 0x1409D50AC (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D532C (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D53B4 (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x1409D5494 (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D56AC (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D5818 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
}
