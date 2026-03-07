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
