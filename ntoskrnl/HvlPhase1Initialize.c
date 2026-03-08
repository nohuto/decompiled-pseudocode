/*
 * XREFs of HvlPhase1Initialize @ 0x140384654
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1402E8DA0 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x14037F1D0 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053D15C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x14053EE40 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x14053FCEC (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x140544B4C (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x140545BF4 (HvlpInitializeHvCrashdump.c)
 *     VslpIumPhase0Initialize @ 0x140B903AC (VslpIumPhase0Initialize.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B9685C (MmMarkHypercallPageRetpolineBit.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    MmMarkHypercallPageRetpolineBit();
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v4 = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, &v4, &v5) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v5, 4096LL, 2u);
    }
    LOBYTE(v3) = 1;
    HvlConfigureMemoryZeroingOnReset(v3);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2504LL);
  }
  return 0LL;
}
