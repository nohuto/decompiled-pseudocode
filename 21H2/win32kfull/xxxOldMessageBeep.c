/*
 * XREFs of xxxOldMessageBeep @ 0x1C02128F8
 * Callers:
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     UserBeep @ 0x1C0214878 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    UserSessionSwitchLeaveCrit(a1);
    v2 = UserBeep(440LL, 125LL);
    EnterCrit(1LL, 0LL);
    return v2;
  }
  else
  {
    xxxSoundSentry(a1, a2);
    return 1LL;
  }
}
