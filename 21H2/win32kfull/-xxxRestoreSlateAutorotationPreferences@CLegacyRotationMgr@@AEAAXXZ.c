/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01CDCB8
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00CD400 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01CE034 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C0331998 != dword_1C0331968 )
  {
    dword_1C0331988 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C0331998);
    PostShellHookMessagesEx(0x32u, dword_1C0331968, 0LL);
  }
}
