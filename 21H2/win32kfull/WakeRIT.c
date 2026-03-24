/*
 * XREFs of WakeRIT @ 0x1C010BE30
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026814 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C010B9D0 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C010BA90 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C010BBE0 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C010BC30 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C010BD70 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C01D9D80 (WakeRITForConfigSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
