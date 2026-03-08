/*
 * XREFs of HalpHwPerfCntInitSystem @ 0x140A8DE90
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeUncoreProfiling @ 0x1403A5450 (HalpInitializeUncoreProfiling.c)
 *     HalpCompleteInitializeProfiling @ 0x140A8DF2C (HalpCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140A8DF54 (HalpInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140B3D3DC (HalpInitializePmcCounterSetInfo.c)
 */

__int64 __fastcall HalpHwPerfCntInitSystem(int a1, unsigned int a2)
{
  switch ( a1 )
  {
    case 19:
      HalpInitializeProfiling(a2);
LABEL_8:
      HalpCompleteInitializeProfiling();
      return 0LL;
    case 13:
      off_140C01BE0[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSet;
      off_140C01E50[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSetEx;
      off_140C01BF0[0] = (__int64 (__fastcall *)())HalpFreePmcCounterSet;
      off_140C01BE8[0] = (__int64 (__fastcall *)())HalpCollectPmcCounters;
      off_140C01E58[0] = (__int64 (__fastcall *)())HalpStartProfileInterruptEx;
      HalpInitializePmcCounterSetInfo();
      HalpInitializeProfiling(a2);
      HalpPerfInterruptHandlerRegistrationLock = 0LL;
      return 0LL;
    case 17:
      goto LABEL_8;
    case 21:
      HalpInitializeUncoreProfiling();
      break;
  }
  return 0LL;
}
