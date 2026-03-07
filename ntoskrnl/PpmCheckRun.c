BOOLEAN PpmCheckRun()
{
  __int64 (*v0)(void); // rax
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  while ( *(_QWORD *)(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex) )
  {
    v0 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex++);
    result = v0();
    if ( !result )
      return result;
  }
  result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      UserData.Size = 8;
      return EtwWrite(v2, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
    }
  }
  return result;
}
