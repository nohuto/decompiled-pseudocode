/*
 * XREFs of PpmInfoReleaseLocks @ 0x14082E150
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14082DAD0 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
}
