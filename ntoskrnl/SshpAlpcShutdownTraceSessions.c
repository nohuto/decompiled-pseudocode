/*
 * XREFs of SshpAlpcShutdownTraceSessions @ 0x14099F524
 * Callers:
 *     SshSessionManagerFlushBuffers @ 0x14099E7B8 (SshSessionManagerFlushBuffers.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402A4AB8 (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x14084A2B0 (SshpAlpcSendMessage.c)
 */

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
