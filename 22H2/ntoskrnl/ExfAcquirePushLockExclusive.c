/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1402732F0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407733E0 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14095714C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14095782C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1409580B4 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
