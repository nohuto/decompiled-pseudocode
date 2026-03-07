void *EditionStopSonar()
{
  void *result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx

  result = gpdwCPUserPreferencesMask;
  if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
  {
    result = *(void **)gfade;
    if ( (gfade[12] & 0x80u) != 0 )
    {
      EnterCrit(1LL, 0LL);
      if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
      {
        v1 = gfade[12];
        if ( (v1 & 0x80u) != 0LL )
        {
          StopFade();
          *(_DWORD *)(SGDGetUserSessionState(v2) + 15964) = -1;
          if ( ((unsigned __int16)gpdwCPUserPreferencesMask & 0x4000) != 0 )
          {
            if ( *(_BYTE *)(SGDGetUserSessionState(v1) + 13991) )
              *(_BYTE *)(SGDGetUserSessionState(v1) + 13991) = 0;
          }
        }
      }
      return (void *)UserSessionSwitchLeaveCrit(v1);
    }
  }
  return result;
}
