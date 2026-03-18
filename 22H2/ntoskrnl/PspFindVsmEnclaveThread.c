/*
 * XREFs of PspFindVsmEnclaveThread @ 0x1408A625C
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A6710 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A6AE0 (PsLoadVsmEnclaveData.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AEDCC (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409C260C (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x1409C2B08 (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspFindVsmEnclaveThread(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
