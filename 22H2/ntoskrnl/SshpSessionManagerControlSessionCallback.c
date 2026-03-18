/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x14085BA60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D18C (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085BA90 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 SshpSessionManagerControlSessionCallback()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
