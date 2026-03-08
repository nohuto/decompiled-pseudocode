/*
 * XREFs of HalReturnToFirmware @ 0x140504990
 * Callers:
 *     HalpLegacyShutdown @ 0x140504AD0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140504E40 (HalpShutdownReset.c)
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x140577F2C (KeRebootSystemForRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x140578C10 (KiHandleMultipleBugchecksDuringRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x140AA5DA4 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404FCB78 (HalpTimerStopAllTimers.c)
 *     HalpInterruptResetAllProcessors @ 0x140502DCC (HalpInterruptResetAllProcessors.c)
 *     HalpPowerWriteResetCommand @ 0x140504AEC (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140504C74 (HalpShutdown.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( (unsigned int)(v1 - 1) >= 2 )
      {
        DbgPrint("HalReturnToFirmware called\n");
        __debugbreak();
      }
    }
    else
    {
      KdPowerTransitionEx(4, 0);
      HalpShutdown();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( HalpRebootHandler )
    off_140C01D60[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v3, v2, v4);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x140504A1ELL);
}
