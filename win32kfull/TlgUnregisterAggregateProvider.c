/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C039C4B8
 * Callers:
 *     DisableUserkTraceLogging @ 0x1C00EC040 (DisableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C039C5B4 (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C039C5F4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C039C66C (LookUpTableFlushComplete.c)
 */

NTSTATUS TlgUnregisterAggregateProvider()
{
  void *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx
  REGHANDLE v7; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C0357088 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0362428, 0LL);
    v1 = qword_1C0362430;
    v2 = &qword_1C0362430;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C0357060 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1C0362430 )
        {
          v4 = qword_1C03571A8;
          qword_1C03571A8 = 0LL;
          dword_1C0357188 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0362428, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    v5 = qword_1C0357080;
    qword_1C0357080 = 0LL;
    dword_1C0357060 = 0;
    EtwUnregister(v5);
    qword_1C0357088 = 0LL;
    return DestroyAggregateSession(v0);
  }
  else
  {
    v7 = qword_1C0357080;
    qword_1C0357080 = 0LL;
    dword_1C0357060 = 0;
    return EtwUnregister(v7);
  }
}
