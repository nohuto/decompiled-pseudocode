/*
 * XREFs of EditionStopSonar @ 0x1C01E7820
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C01E7A90 (StopFade.c)
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
      EnterCrit(0LL, 1LL);
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        v1 = LODWORD(gfade[6]);
        if ( (v1 & 0x80u) != 0LL )
        {
          StopFade();
          giSonarRadius = -1;
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            if ( gbLastVkForSonar )
              gbLastVkForSonar = 0;
          }
        }
      }
      return (void *)UserSessionSwitchLeaveCrit(v1);
    }
  }
  return result;
}
