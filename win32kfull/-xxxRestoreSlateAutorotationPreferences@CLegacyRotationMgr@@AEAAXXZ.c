/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A8870
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01029E0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A8BE4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C035D608 != dword_1C035D5D8 )
  {
    dword_1C035D5F8 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C035D608);
    PostShellHookMessagesEx(0x32u, dword_1C035D5D8, 0LL);
  }
}
