/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1402FCDF0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A061A4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A0685C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A07104 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
