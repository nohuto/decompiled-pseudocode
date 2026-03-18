/*
 * XREFs of PpmUpdateIdleDomains @ 0x1405C9170
 * Callers:
 *     <none>
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx(a1 + 8, (__int64)KeActiveProcessors) )
  {
    v2 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v2 >= 0 )
      v2 = 0;
  }
  else
  {
    v2 = -1073741811;
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return (unsigned int)v2;
}
