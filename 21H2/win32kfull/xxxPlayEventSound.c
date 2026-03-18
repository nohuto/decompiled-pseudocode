/*
 * XREFs of xxxPlayEventSound @ 0x1C01088E0
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     NtUserPlayEventSound @ 0x1C01FB170 (NtUserPlayEventSound.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FA304 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1)
{
  RPC_BINDING_HANDLE *v1; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
  {
    v1 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1);
    CUserPlaySound::PlaySync(v1);
    EnterCrit(1LL, 0LL);
  }
  return 1LL;
}
