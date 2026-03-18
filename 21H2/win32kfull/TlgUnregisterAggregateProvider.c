/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C0377BA0
 * Callers:
 *     DisableUserkTraceLogging @ 0x1C011DCE0 (DisableUserkTraceLogging.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C0377C9C (DestroyAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C0377CDC (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0377D4C (LookUpTableFlushComplete.c)
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

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C03263E8 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0337A60, 0LL);
    v1 = qword_1C0337A68;
    v2 = &qword_1C0337A68;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C03263C0 )
      {
        v0 = (void *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete();
        if ( !qword_1C0337A68 )
        {
          v4 = qword_1C0326318;
          qword_1C0326318 = 0LL;
          dword_1C03262F8 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0337A60, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer(v0);
    v5 = qword_1C03263E0;
    qword_1C03263E0 = 0LL;
    dword_1C03263C0 = 0;
    EtwUnregister(v5);
    qword_1C03263E8 = 0LL;
    return DestroyAggregateSession(v0);
  }
  else
  {
    v7 = qword_1C03263E0;
    qword_1C03263E0 = 0LL;
    dword_1C03263C0 = 0;
    return EtwUnregister(v7);
  }
}
