/*
 * XREFs of GetCursorUpdateHandle @ 0x1C00CDCC8
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00CDC30 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C00CDD24 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *GetCursorUpdateHandle()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  CMouseSensor *v6; // rcx

  v0 = -1LL;
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 995LL);
  v5 = SGDGetUserSessionState(v2, v1, v3, v4) + 3280;
  if ( v5 )
  {
    v6 = *(CMouseSensor **)(v5 + 24);
    if ( v6 )
      return CMouseSensor::GetCursorUpdateHandle(v6);
  }
  return (void *)v0;
}
