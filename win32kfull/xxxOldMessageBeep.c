/*
 * XREFs of xxxOldMessageBeep @ 0x1C01F7FE8
 * Callers:
 *     xxxMessageBeep @ 0x1C01F7F58 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C01F73D8 (xxxSoundSentry.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01FA214 (-xxxUserBeep@@YAHKK_N@Z.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    UserSessionSwitchLeaveCrit(a1);
    v1 = xxxUserBeep(0x1B8u, 0x7Du, 1);
    EnterCrit(1LL, 0LL);
    return v1;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
