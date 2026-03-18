/*
 * XREFs of HalpPowerInitSystem @ 0x140A90A30
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140B65990 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B65A88 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C62108 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
