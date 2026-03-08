/*
 * XREFs of xxxPlayEventSound @ 0x1C00DE8D0
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     NtUserPlayEventSound @ 0x1C01D9890 (NtUserPlayEventSound.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00D3E30 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
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
