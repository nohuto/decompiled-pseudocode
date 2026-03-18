/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x1406CBFF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     PspSetEffectiveJobLimits @ 0x1406CC024 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CF5E70, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1512), 0x100u);
  }
  return 0LL;
}
