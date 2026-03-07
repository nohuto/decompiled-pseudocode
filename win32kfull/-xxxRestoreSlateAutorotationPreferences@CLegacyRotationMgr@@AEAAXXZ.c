void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C035D608 != dword_1C035D5D8 )
  {
    dword_1C035D5F8 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C035D608);
    PostShellHookMessagesEx(0x32u, dword_1C035D5D8, 0LL);
  }
}
