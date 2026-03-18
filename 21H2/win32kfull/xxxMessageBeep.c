/*
 * XREFs of xxxMessageBeep @ 0x1C014C6C4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserMessageBeep @ 0x1C014C590 (NtUserMessageBeep.c)
 *     EditionMessageBeep @ 0x1C02128E0 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxFlashEnabledPopup @ 0x1C023F618 (xxxFlashEnabledPopup.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FA304 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C02128F8 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 4LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    xxxOldMessageBeep(a1, 4LL, (unsigned int)a1);
  }
  else
  {
    if ( (gdwPUDFlags & 0x80000) != 0 )
      CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
    xxxSoundSentry(a1, v1);
  }
  return 1LL;
}
