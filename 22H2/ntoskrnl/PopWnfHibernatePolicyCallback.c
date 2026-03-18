/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x1409894C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopHibernateEvaluation @ 0x140804218 (PopHibernateEvaluation.c)
 *     PopQueryHiberPersistedRegValue @ 0x14082273C (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140863C5C (PopTraceHibernatePolicyUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
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
