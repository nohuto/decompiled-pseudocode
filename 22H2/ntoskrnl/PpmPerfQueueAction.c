/*
 * XREFs of PpmPerfQueueAction @ 0x1403989CC
 * Callers:
 *     PpmParkReportParkedCores @ 0x140303400 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140307C00 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140307C50 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140398250 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
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
