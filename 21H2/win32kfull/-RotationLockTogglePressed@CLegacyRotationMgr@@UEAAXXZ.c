/*
 * XREFs of ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01CD8B0
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C00CD620 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01CDA88 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01CE034 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01CE1CC (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::RotationLockTogglePressed(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationState; // eax
  BOOL v3; // ebx
  CLegacyRotationMgr *v4; // rcx

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState <= 1 )
  {
    v3 = dword_1C0331968 == 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, v3);
    CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, v3);
    PostShellHookMessagesEx(0x32u, dword_1C0331968, 0LL);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  }
}
