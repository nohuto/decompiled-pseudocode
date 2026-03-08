/*
 * XREFs of PpmCheckRun @ 0x1402D1EB0
 * Callers:
 *     PpmCheckStart @ 0x1402D1D84 (PpmCheckStart.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

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
