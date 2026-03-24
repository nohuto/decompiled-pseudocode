/*
 * XREFs of xxxMessageBeep @ 0x1C015D9A0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     EditionMessageBeep @ 0x1C0214110 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C02378A4 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C0243C64 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C0250A2C (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0101870 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C015DA30 (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0214128 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = (unsigned int)a1;
  v2 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v2, v1);
  }
  return 1LL;
}
