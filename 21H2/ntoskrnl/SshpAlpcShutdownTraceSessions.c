/*
 * XREFs of SshpAlpcShutdownTraceSessions @ 0x1409A1604
 * Callers:
 *     SshSessionManagerFlushBuffers @ 0x1409A0D80 (SshSessionManagerFlushBuffers.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x14081B360 (SshpAlpcSendMessage.c)
 */

__int64 SshpAlpcShutdownTraceSessions()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
  v1 = &unk_140C1C1FC;
  v2 = 2LL;
  do
  {
    *v1 = 0;
    v1 += 192;
    --v2;
  }
  while ( v2 );
  SshpAlpcSendMessage(v0, 4LL, 0, 0LL, 1);
  return SSHSupportReleasePushLockExclusive((ULONG_PTR)&stru_140C1C1E8);
}
