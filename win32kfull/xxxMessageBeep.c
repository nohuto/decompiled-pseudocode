/*
 * XREFs of xxxMessageBeep @ 0x1C01F7F58
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserMessageBeep @ 0x1C01D8970 (NtUserMessageBeep.c)
 *     EditionMessageBeep @ 0x1C01F7F40 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0225A38 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00D3E30 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C01F73D8 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C01F7FE8 (xxxOldMessageBeep.c)
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
