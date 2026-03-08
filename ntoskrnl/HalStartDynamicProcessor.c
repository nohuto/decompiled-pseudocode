/*
 * XREFs of HalStartDynamicProcessor @ 0x140502C20
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     HalpInterruptReinitialize @ 0x140A923CC (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpCheckNumaConfiguration @ 0x1405186E8 (HalpCheckNumaConfiguration.c)
 *     HalpUpdateNumaConfiguration @ 0x140518DA4 (HalpUpdateNumaConfiguration.c)
 *     HalpMcUpdateLock @ 0x1405197FC (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x140519854 (HalpMcUpdateUnlock.c)
 *     MmLockPagableSectionByHandle @ 0x1406A7BD0 (MmLockPagableSectionByHandle.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int started; // ebx

  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  if ( a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount()
    || !HalpInterruptClusterModeEnabled && !HalpInterruptPhysicalModeOnly && a2 >= HalpInterruptLogicalFlatLimit )
  {
    return 2LL;
  }
  if ( !HalpHiberInProgress )
  {
    MmLockPagableSectionByHandle(HalpSleepPageLock);
    HalpMcUpdateLock();
    if ( !(unsigned __int8)HalpCheckNumaConfiguration(a3, a4) )
      return 2LL;
  }
  started = HalpInterruptStartProcessor(a2, a3, 1LL, a1);
  if ( started != 4 && !HalpHiberInProgress )
    HalpUpdateNumaConfiguration(a3, a4);
  if ( !HalpHiberInProgress )
    HalpMcUpdateUnlock();
  return started;
}
