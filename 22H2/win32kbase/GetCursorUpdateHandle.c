/*
 * XREFs of GetCursorUpdateHandle @ 0x1C0088C0C
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00889A0 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0043670 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0088CA0 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *GetCursorUpdateHandle()
{
  CInputThread *v0; // rdi
  __int64 v1; // rsi
  bool v2; // bl

  v0 = gpInputThread;
  v1 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v0);
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 783LL);
  if ( qword_1C0245018 )
    return CMouseSensor::GetCursorUpdateHandle(qword_1C0245018);
  return (void *)v1;
}
