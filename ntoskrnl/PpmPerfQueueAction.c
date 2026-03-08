/*
 * XREFs of PpmPerfQueueAction @ 0x1402363D4
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmParkReportParkedCores @ 0x1402E3AE0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x1402EA9E0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1402EAA30 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x1402ED3A0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 33944));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 33944), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 33880, 0LL, 0LL, 0LL, 0);
  return result;
}
