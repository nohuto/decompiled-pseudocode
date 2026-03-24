/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C009E014
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00879A8 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C009E1EC (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rsi
  int *v2; // rbx
  int v3; // eax
  char v4; // di

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  v2 = (int *)((char *)v1 + 16);
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 135LL);
    v3 = *v2;
  }
  if ( v3 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 138LL);
    v3 = *v2;
  }
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 141LL);
    v3 = *v2;
  }
  v4 = 1;
  if ( v3 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 146LL);
    *v2 = 2;
  }
  else
  {
    v4 = 0;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
