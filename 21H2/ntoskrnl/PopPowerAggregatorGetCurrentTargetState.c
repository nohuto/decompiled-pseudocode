/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x140995BB8
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099C8F8 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v2 = xmmword_140C20BE0;
  *(_OWORD *)a1 = xmmword_140C20BD0;
  v3 = qword_140C20BF0;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
