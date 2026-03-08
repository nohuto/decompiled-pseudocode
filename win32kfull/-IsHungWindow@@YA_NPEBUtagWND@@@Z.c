/*
 * XREFs of ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14
 * Callers:
 *     NtUserQueryWindow @ 0x1C00A0010 (NtUserQueryWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleHungWindow @ 0x1C0149170 (EditionHandleHungWindow.c)
 *     NtUserShellMigrateWindow @ 0x1C01DED60 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4E68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F5038 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1C0203530 (PsW32ScreenSaver_Show.c)
 * Callees:
 *     ?IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z @ 0x1C009FF54 (-IsPumpingInputMsgs@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C00E2134 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 */

bool __fastcall IsHungWindow(const struct tagTHREADINFO **a1)
{
  return IsThreadHungTimeCheck(a1[2], gdwHungAppTimeout) || !IsPumpingInputMsgs((const struct tagWND *)a1);
}
