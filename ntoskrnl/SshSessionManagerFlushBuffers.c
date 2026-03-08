/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x14099E7B8
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     SshpAlpcShutdownTraceSessions @ 0x14099F524 (SshpAlpcShutdownTraceSessions.c)
 */

NTSTATUS SshSessionManagerFlushBuffers()
{
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = -100000LL;
  result = KeWaitForSingleObject(&stru_140C38348, Executive, 0, 0, &Timeout);
  if ( result != 258 )
    return SshpAlpcShutdownTraceSessions();
  return result;
}
