/*
 * XREFs of MiHotPatchImageTreeCompare @ 0x1408CA688
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x140584314 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140584A7C (PsLoadVsmEnclaveData.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9B6C (MiDeleteImageHotPatchState.c)
 *     MiGetHotPatchEntry @ 0x1408CA03C (MiGetHotPatchEntry.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D54 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090D220 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091A938 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x14091ABD8 (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHotPatchImageTreeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
