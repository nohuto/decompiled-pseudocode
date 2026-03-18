/*
 * XREFs of PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9D00
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmPerfClearBootOverrides @ 0x14036D1E4 (PpmPerfClearBootOverrides.c)
 *     PoLatencySensitivityHint @ 0x14036D210 (PoLatencySensitivityHint.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6860 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PopPowerRequestCallbackPerfBoostRequired(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 1;
    PpmPerfUpdateDomainPolicy(0);
    PoLatencySensitivityHint(3);
  }
  else
  {
    PpmPerfClearBootOverrides();
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = 0;
    PpmPerfUpdateDomainPolicy(0);
  }
  v5 = 0xFFFFFFFF00000001uLL;
  if ( a3 )
    LODWORD(v5) = 3;
  return ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v5);
}
