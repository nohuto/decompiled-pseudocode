void BgkpDisableConsole()
{
  ExWaitForRundownProtectionRelease(&stru_140C0BC48);
  ExRundownCompleted(&stru_140C0BC48);
}
