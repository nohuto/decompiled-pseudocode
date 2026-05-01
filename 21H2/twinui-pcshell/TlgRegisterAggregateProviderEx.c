/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1801AE994
 * Callers:
 *     DllMain @ 0x1800953A4 (DllMain.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800874F8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ComputeFlushPeriod @ 0x1801ADCB0 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1801ADF84 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1801AE088 (DestroyAggregateSession.c)
 */

__int64 TlgRegisterAggregateProviderEx()
{
  RTL_SRWLOCK *TlgAggregateSession; // rax
  unsigned __int16 *v1; // rbx
  int v3; // esi
  __int64 v4; // rax
  __int64 *v5; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(1);
  v1 = (unsigned __int16 *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180647888, 0LL, 0LL);
  TlgAggregateSession[39].Ptr = 0LL;
  TlgAggregateSession[40].Ptr = 0LL;
  TlgAggregateSession[41].Ptr = &dword_180647888;
  LODWORD(TlgAggregateSession[44].Ptr) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v3 = TraceLoggingRegisterEx_EventRegister_EventSetInformation(
         (ULONGLONG *)&dword_180647888,
         (unsigned __int16 *)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&stru_180650420);
    v4 = qword_180652400;
    if ( !qword_180652400 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        (ULONGLONG *)&dword_18064E018,
        (unsigned __int16 *)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_180652400;
    }
    v5 = &qword_180652400;
    while ( v4 )
    {
      if ( *(int **)(v4 + 328) == &dword_180647888 )
        goto LABEL_12;
      v5 = (__int64 *)(v4 + 336);
      v4 = *(_QWORD *)(v4 + 336);
    }
    *v5 = (__int64)v1;
LABEL_12:
    ReleaseSRWLockExclusive(&stru_180650420);
    return 0LL;
  }
  else
  {
    DestroyAggregateSession(v1);
    return (unsigned int)v3;
  }
}
