/*
 * XREFs of PsBoostThreadIo @ 0x14034D7E0
 * Callers:
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
