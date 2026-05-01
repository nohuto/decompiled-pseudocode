/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1801AEAA4
 * Callers:
 *     DllMain @ 0x1800953A4 (DllMain.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1801ADB28 (CancelTimerCallbacksAndDeleteTimer.c)
 *     LookUpTableFlushComplete @ 0x1801AE61C (LookUpTableFlushComplete.c)
 */

void TlgUnregisterAggregateProvider()
{
  REGHANDLE v0; // rcx
  void *v1; // rdi
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1806478B0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v1 = 0LL;
    AcquireSRWLockExclusive(&stru_180650420);
    v2 = qword_180652400;
    v3 = &qword_180652400;
    while ( v2 )
    {
      v4 = (__int64 *)(v2 + 336);
      if ( *(int **)(v2 + 328) == &dword_180647888 )
      {
        v1 = (void *)v2;
        *v3 = *v4;
        LookUpTableFlushComplete(v2);
        if ( !qword_180652400 )
        {
          v5 = qword_18064E038;
          qword_18064E038 = 0LL;
          dword_18064E018 = 0;
          EventUnregister(v5);
        }
        break;
      }
      v2 = *v4;
      v3 = v4;
    }
    ReleaseSRWLockExclusive(&stru_180650420);
    if ( v1 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v1);
    v6 = qword_1806478A8;
    qword_1806478A8 = 0LL;
    dword_180647888 = 0;
    EventUnregister(v6);
    DestroyAggregateSession(v1);
  }
  else
  {
    v0 = qword_1806478A8;
    qword_1806478A8 = 0LL;
    dword_180647888 = 0;
    EventUnregister(v0);
  }
}
