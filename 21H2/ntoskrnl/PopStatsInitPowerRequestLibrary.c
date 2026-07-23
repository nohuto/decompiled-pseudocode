/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x140A716D8
 * Callers:
 *     PopPowerRequestInit @ 0x140A714D4 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402524C0 (RtlInitializeGenericTableAvl.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  qword_140C1ED68 = 0LL;
  PowerReqestStatsLock = 0LL;
  qword_140C1EDB0 = 0LL;
  *((_QWORD *)&ExecutionRequiredStopWatchCollection + 1) = &ExecutionRequiredStopWatchCollection;
  *(_QWORD *)&ExecutionRequiredStopWatchCollection = &ExecutionRequiredStopWatchCollection;
  xmmword_140C1ED90 = 0LL;
  xmmword_140C1EDA0 = 0LL;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
