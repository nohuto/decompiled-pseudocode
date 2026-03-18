/*
 * XREFs of WakeRIT @ 0x1C00FD22C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     EditionActivateMitInput @ 0x1C00FCD90 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x1C00FCE60 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00FCFF0 (WakeRITForShutdown.c)
 *     _EnableSessionForMMCSS @ 0x1C00FD080 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00FD1C0 (EditionInitiateMouseEventProcessing.c)
 *     EditionIVSyncForeground @ 0x1C01CED10 (EditionIVSyncForeground.c)
 *     WakeRITForConfigSwitch @ 0x1C01D4470 (WakeRITForConfigSwitch.c)
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
