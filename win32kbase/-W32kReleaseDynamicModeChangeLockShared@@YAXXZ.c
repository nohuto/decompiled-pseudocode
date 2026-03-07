void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
