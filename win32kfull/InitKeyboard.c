void InitKeyboard()
{
  __int64 v0; // rcx

  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers(v0);
  }
}
