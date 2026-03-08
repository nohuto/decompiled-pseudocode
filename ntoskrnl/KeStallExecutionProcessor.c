/*
 * XREFs of KeStallExecutionProcessor @ 0x14022B710
 * Callers:
 *     KeFreezeExecution @ 0x14036ADA0 (KeFreezeExecution.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x140371CE4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpTimerMeasureFrequencies @ 0x140376B78 (HalpTimerMeasureFrequencies.c)
 *     IvtUpdateGlobalCommand @ 0x14037AD08 (IvtUpdateGlobalCommand.c)
 *     HalpApicStartProcessor @ 0x1403AAAF0 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AC710 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpInterruptResetThisProcessor @ 0x140502E70 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050A680 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x1405198E0 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14051EC00 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14051ED2C (HalpUsbLegacyStopUhciInterrupt.c)
 *     HsaGetPageFault @ 0x14052DC50 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x140542CB4 (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x140607340 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140670928 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140670AE4 (BgpFwDisplayBugCheckScreen.c)
 *     IpmiLibpDelay @ 0x140675A4C (IpmiLibpDelay.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     KiCheckStall @ 0x14022AD70 (KiCheckStall.c)
 *     HalpTimerStallExecutionProcessor @ 0x14022CA90 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // r8
  ULONG_PTR v3; // rsi
  __int64 InternalData; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rcx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( HalpTimerProcessorsFrozen )
  {
    v3 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v3 + 112))(InternalData);
      }
      else
      {
        do
        {
          v5 = *(_QWORD *)(v3 + 208);
          do
          {
            v6 = *(_QWORD *)(v3 + 200);
            v7 = HalpTimerGetInternalData(v3);
            v8 = (*(__int64 (__fastcall **)(__int64))(v3 + 112))(v7);
            _InterlockedOr(v15, 0);
            v9 = *(_QWORD *)(v3 + 200);
          }
          while ( v6 != v9 );
        }
        while ( v5 != *(_QWORD *)(v3 + 208) );
        v10 = *(_DWORD *)(v3 + 220);
        if ( ((v6 ^ v8) & (1LL << ((unsigned __int8)v10 - 1))) != 0 )
        {
          if ( v10 == 64 )
            v11 = -1LL;
          else
            v11 = (1LL << v10) - 1;
          v12 = 0LL;
          if ( v10 != 64 )
            v12 = 1LL << v10;
          v13 = v6 & v11;
          v14 = v8 | v6 ^ v13;
          if ( v8 < v13 )
            v14 += v12;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v14, v9);
        }
      }
    }
    KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
  }
  LOBYTE(v1) = 1;
  HalpTimerStallExecutionProcessor(HalpStallCounter, 10 * MicroSeconds, v1);
}
