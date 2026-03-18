/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x14098FB30
 * Callers:
 *     <none>
 * Callees:
 *     PopHibernateEvaluation @ 0x140818DF4 (PopHibernateEvaluation.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1408289F4 (PopTraceHibernatePolicyUpdate.c)
 *     PopQueryHiberPersistedRegValue @ 0x14082910C (PopQueryHiberPersistedRegValue.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 PopWnfHibernatePolicyCallback()
{
  int HiberPersistedRegValue; // edi
  int v1; // ecx
  _DWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7[5]; // [rsp+24h] [rbp-14h] BYREF

  v7[0] = 0;
  v6 = 0;
  HiberPersistedRegValue = PopQueryHiberPersistedRegValue(3, v7);
  if ( HiberPersistedRegValue >= 0 )
  {
    PopAcquireTransitionLock(2);
    PopAcquirePolicyLock(v1);
    LOBYTE(v2) = 1;
    PopAllowHibernateReg = v7[0];
    HiberPersistedRegValue = PopHibernateEvaluation(1, v2, &v6);
    PopReleasePolicyLock(v4, v3);
    PopReleaseTransitionLock(2);
    PopTraceHibernatePolicyUpdate();
  }
  return (unsigned int)HiberPersistedRegValue;
}
