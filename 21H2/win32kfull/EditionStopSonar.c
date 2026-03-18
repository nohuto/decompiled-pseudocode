/*
 * XREFs of EditionStopSonar @ 0x1C01E2540
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 */

void *EditionStopSonar()
{
  void *result; // rax
  __int64 v1; // rcx

  result = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
  {
    result = (void *)gfade[0];
    if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
    {
      EnterCrit(1LL, 0LL);
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        v1 = LODWORD(gfade[6]);
        if ( (v1 & 0x80u) != 0LL )
        {
          StopFade();
          giSonarRadius = -1;
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) )
              BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 0;
          }
        }
      }
      return (void *)UserSessionSwitchLeaveCrit(v1);
    }
  }
  return result;
}
