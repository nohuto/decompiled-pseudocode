/*
 * XREFs of SetThreadPriority @ 0x1C00546A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0037D24 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C0054860 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void SetThreadPriority()
{
  CInputThreadBase *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread + 8);
  if ( *((_DWORD *)v0 + 6) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread(v0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    SetThreadBasePriority(**((PETHREAD **)v0 + 4));
  }
  *((_QWORD *)v0 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v0 + 8, 0LL);
  KeLeaveCriticalRegion();
}
