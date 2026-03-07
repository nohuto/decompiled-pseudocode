PVOID DifGetReturnAddressForWrappers()
{
  __int64 v0; // rbx
  PVOID BackTrace; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  BackTrace = 0LL;
  if ( RtlCaptureStackBackTrace(3u, 1u, &BackTrace, 0LL) )
    return BackTrace;
  return (PVOID)v0;
}
