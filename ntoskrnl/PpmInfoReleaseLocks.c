/*
 * XREFs of PpmInfoReleaseLocks @ 0x1408260E0
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
