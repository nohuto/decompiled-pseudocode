/*
 * XREFs of PopFreeUnicodeString @ 0x1406F86D0
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406F5C6C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406F7610 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407721E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
