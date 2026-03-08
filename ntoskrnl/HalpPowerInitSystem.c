/*
 * XREFs of HalpPowerInitSystem @ 0x140A8D5A0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1407EBF70 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140B6204C (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B62144 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C61CA8 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
