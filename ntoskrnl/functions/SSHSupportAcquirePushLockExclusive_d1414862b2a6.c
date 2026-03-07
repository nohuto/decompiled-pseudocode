void __fastcall SSHSupportAcquirePushLockExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
