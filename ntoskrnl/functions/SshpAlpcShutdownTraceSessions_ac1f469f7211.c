signed __int32 SshpAlpcShutdownTraceSessions()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38148, 0LL);
  v1 = &unk_140C3815C;
  v2 = 2LL;
  do
  {
    *v1 = 0;
    v1 += 192;
    --v2;
  }
  while ( v2 );
  SshpAlpcSendMessage(v0, 4LL, 0, 0LL, 1);
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38148);
}
