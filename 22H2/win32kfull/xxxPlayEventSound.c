/*
 * XREFs of xxxPlayEventSound @ 0x1C00A7E50
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     NtUserPlayEventSound @ 0x1C01D8860 (NtUserPlayEventSound.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C009D5D0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RPC_BINDING_HANDLE *v4; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
  {
    v4 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1, gptiCurrent, a3, a4);
    CUserPlaySound::PlaySync(v4);
    EnterCrit(1LL, 0LL);
  }
  return 1LL;
}
