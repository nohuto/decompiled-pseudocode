/*
 * XREFs of PfMetadataRecordIsEqual @ 0x140634B54
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x14062C430 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140634420 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
