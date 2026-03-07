NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !W32kControlGuid_Context )
    return 0;
  result = EtwUnregister(W32kControlGuid_Context);
  W32kControlGuid_Context = 0LL;
  return result;
}
