/*
 * XREFs of PspFindVsmEnclaveThread @ 0x1408A13DC
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A4260 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405A4630 (PsLoadVsmEnclaveData.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ABD84 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409BF5DC (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x1409BFAD8 (RtlpFindDynamicEHContinuationTarget.c)
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
