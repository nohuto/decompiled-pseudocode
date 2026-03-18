/*
 * XREFs of PsBoostThreadIo @ 0x1402ACD60
 * Callers:
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
