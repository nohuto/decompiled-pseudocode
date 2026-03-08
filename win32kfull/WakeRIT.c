/*
 * XREFs of WakeRIT @ 0x1C00DB568
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00DB260 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00DB3C0 (WakeRITForShutdown.c)
 *     EditionActivateMitInput @ 0x1C00DB420 (EditionActivateMitInput.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00DB4E0 (EditionInitiateMouseEventProcessing.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     WakeRITForConfigSwitch @ 0x1C01AD9B0 (WakeRITForConfigSwitch.c)
 *     EditionIVSyncForeground @ 0x1C01AF6B0 (EditionIVSyncForeground.c)
 *     _EnableSessionForMMCSS @ 0x1C01E4830 (_EnableSessionForMMCSS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
