/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x1402DE1C0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 *     KiProcessNMI @ 0x140369160 (KiProcessNMI.c)
 *     KiStartIdleThread @ 0x14037F474 (KiStartIdleThread.c)
 *     KiStartProfileTarget @ 0x140571FC0 (KiStartProfileTarget.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14057A918 (KiForceIdleParkUnparkProcessor.c)
 *     PpmTestAndLockProcessor @ 0x140583A5C (PpmTestAndLockProcessor.c)
 *     PpmParkReportParkedCore @ 0x14059AC6C (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059AD7C (PpmParkReportSoftParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v3 >> 6;
  if ( v4 <= v3 >> 6 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8LL * v5 + 8));
  return ((1LL << (v3 & 0x3F)) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8LL * v5 + 8), 1LL << (v3 & 0x3F))) != 0;
}
