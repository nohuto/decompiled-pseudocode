/*
 * XREFs of xxxPlayEventSound @ 0x1C011E880
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C0101520 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1)
{
  RPC_BINDING_HANDLE *v1; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
  {
    v1 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1);
    CUserPlaySound::PlaySync(v1);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
