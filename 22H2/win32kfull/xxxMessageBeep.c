/*
 * XREFs of xxxMessageBeep @ 0x1C01F6D88
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     NtUserMessageBeep @ 0x1C01D7940 (NtUserMessageBeep.c)
 *     EditionMessageBeep @ 0x1C01F6D70 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C02170F8 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0222D28 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C023F1B8 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C009D5D0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01F6E18 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry();
  }
  return 1LL;
}
