/*
 * XREFs of PpmPerfQueueAction @ 0x14039921C
 * Callers:
 *     PpmParkReportParkedCores @ 0x140228C20 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14022E810 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14022E860 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 33104));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 33104), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 33040, 0LL, 0LL, 0LL, 0);
  return result;
}
