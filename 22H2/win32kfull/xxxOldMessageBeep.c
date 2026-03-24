/*
 * XREFs of xxxOldMessageBeep @ 0x1C0213B68
 * Callers:
 *     xxxMessageBeep @ 0x1C015D220 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C015D2B0 (xxxSoundSentry.c)
 *     UserBeep @ 0x1C02196B8 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1);
    v3 = UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return v3;
  }
  else
  {
    xxxSoundSentry(a1, a2, a3);
    return 1LL;
  }
}
