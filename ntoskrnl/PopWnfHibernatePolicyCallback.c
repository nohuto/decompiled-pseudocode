/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x140986410
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x14080FD60 (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x14082AADC (PopTraceHibernatePolicyUpdate.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x14082B35C (PopHibernateEvaluation.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 PopWnfHibernatePolicyCallback()
{
  int HiberPersistedRegValue; // edi
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7[5]; // [rsp+24h] [rbp-14h] BYREF

  v7[0] = 0;
  v6 = 0;
  HiberPersistedRegValue = PopQueryHiberPersistedRegValue(3, v7);
  if ( HiberPersistedRegValue >= 0 )
  {
    PopAcquireTransitionLock(2);
    PopAcquirePolicyLock(v1);
    PopAllowHibernateReg = v7[0];
    HiberPersistedRegValue = PopHibernateEvaluation(1, 1, &v6);
    PopReleasePolicyLock(v3, v2, v4);
    PopReleaseTransitionLock(2);
    PopTraceHibernatePolicyUpdate();
  }
  return (unsigned int)HiberPersistedRegValue;
}
