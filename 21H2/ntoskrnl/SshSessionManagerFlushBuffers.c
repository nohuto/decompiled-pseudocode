/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x1409A0D80
 * Callers:
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A1604 (SshpAlpcShutdownTraceSessions.c)
 */

NTSTATUS SshSessionManagerFlushBuffers()
{
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -100000LL;
  result = KeWaitForSingleObject(&stru_140C1C3E8, Executive, 0, 0, &Timeout);
  if ( result != 258 )
    return SshpAlpcShutdownTraceSessions();
  return result;
}
