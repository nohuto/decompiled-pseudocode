/*
 * XREFs of ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01A8410
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0102C30 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01A85E8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A8BE4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01A8CF4 (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::RotationLockTogglePressed(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationState; // eax
  BOOL v3; // ebx
  CLegacyRotationMgr *v4; // rcx

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState <= 1 )
  {
    v3 = dword_1C035D5D8 == 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, v3);
    CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, v3);
    PostShellHookMessagesEx(0x32u, dword_1C035D5D8, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  }
}
