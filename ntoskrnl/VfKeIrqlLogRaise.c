/*
 * XREFs of VfKeIrqlLogRaise @ 0x140AD2CB0
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD2DA8 (ViKeIrqlLogAndTrimMemory.c)
 *     ViIrqlExAcquireFastMutex_Exit @ 0x140AE5440 (ViIrqlExAcquireFastMutex_Exit.c)
 *     ViIrqlExTryToAcquireFastMutex_Exit @ 0x140AE5460 (ViIrqlExTryToAcquireFastMutex_Exit.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140ABD5B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140ABD682 (ViKeIrqlLogCommon.c)
 */

char *__fastcall VfKeIrqlLogRaise(char a1, char a2)
{
  char *v3; // rbx

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  v3 = VfKeIrqlTransitionReserveLogEntry(a1, a2);
  ViKeIrqlLogCommon((__int64)v3, 2u);
  return v3;
}
