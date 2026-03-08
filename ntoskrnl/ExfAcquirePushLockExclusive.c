/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1402411A0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A034B4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A04414 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
