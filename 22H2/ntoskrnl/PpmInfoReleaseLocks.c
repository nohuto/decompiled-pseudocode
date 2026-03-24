/*
 * XREFs of PpmInfoReleaseLocks @ 0x1406F3F08
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406F2DF0 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
