/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x14075DD70
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfClearBootOverrides @ 0x1402D1A5C (PpmPerfClearBootOverrides.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x1402D2A30 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14075DE18 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0LL);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0LL);
  }
  v5 = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(v5) = 3;
  return ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v5);
}
