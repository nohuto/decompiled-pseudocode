/*
 * XREFs of PsBoostThreadIo @ 0x14022FF30
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1407696FC (CmpLockRegistryExclusive.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
