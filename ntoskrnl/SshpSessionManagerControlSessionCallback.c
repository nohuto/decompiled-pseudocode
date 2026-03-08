/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x140857D80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1402A4AB8 (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140857DB0 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 SshpSessionManagerControlSessionCallback()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
