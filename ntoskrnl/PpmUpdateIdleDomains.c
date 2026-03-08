/*
 * XREFs of PpmUpdateIdleDomains @ 0x140583E60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1)
{
  int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  if ( a1 && (unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)(a1 + 8), (unsigned __int16 *)KeActiveProcessors) )
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
