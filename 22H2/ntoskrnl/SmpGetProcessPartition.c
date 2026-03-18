/*
 * XREFs of SmpGetProcessPartition @ 0x140344590
 * Callers:
 *     SmProcessCreateNotification @ 0x1406B639C (SmProcessCreateNotification.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     SmStoreSetProcessVaRanges @ 0x1407B77DC (SmStoreSetProcessVaRanges.c)
 *     SmSetStoreInformation @ 0x1407E82F4 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E83A4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmcProcessListRequest @ 0x140842ED4 (SmcProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x140843050 (SmProcessRegistrationRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x140843254 (SmProcessCompressionInfoRequest.c)
 *     SmProcessConfigRequest @ 0x14085C000 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D6DDC (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1409D6E5C (SmProcessListRequest.c)
 *     SmProcessResizeRequest @ 0x1409D7310 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D7428 (SmProcessStatsRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D773C (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStart @ 0x1409D78D8 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D7978 (SmStoreCompressionStop.c)
 *     SmcProcessCreateRequest @ 0x1409D7F4C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D81CC (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D8254 (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x1409D8334 (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D854C (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D86B8 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
}
