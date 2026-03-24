/*
 * XREFs of HalReturnToFirmware @ 0x1404BE0F0
 * Callers:
 *     HaliAcpiSleep @ 0x140385840 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1404BE240 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1404BE5A0 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     ExRebootSystemForRecovery @ 0x1405B2554 (ExRebootSystemForRecovery.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopShutdownSystem @ 0x1409B2764 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x1409EED54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14030D87C (HalpAcquireCmosSpinLock.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HalpTimerStopAllTimers @ 0x1404B6A3C (HalpTimerStopAllTimers.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE25C (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x1404BE3DC (HalpShutdown.c)
 *     HalpInterruptResetAllProcessors @ 0x1404D2B2C (HalpInterruptResetAllProcessors.c)
 *     KdPowerTransitionEx @ 0x140510F00 (KdPowerTransitionEx.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      KdPowerTransitionEx(4LL, 0LL);
      HalpShutdown();
    }
    else if ( a1 <= 1 || a1 > 3 )
    {
      DbgPrint("HalReturnToFirmware called\n");
      __debugbreak();
    }
  }
  KdPowerTransitionEx(4LL, 0LL);
  if ( HalpRebootHandler )
    off_140C00950[0]();
  _disable();
  if ( !HalpHvCpuManager || HalpEnlightenment )
    HalpTimerStopAllTimers();
  HalpAcquireCmosSpinLock(v2, v1, v3);
  if ( HalpResetParkDisposition )
    HalpInterruptResetAllProcessors();
  HalpPowerWriteResetCommand(0LL, 0LL);
  JUMPOUT(0x1404BE17BLL);
}
