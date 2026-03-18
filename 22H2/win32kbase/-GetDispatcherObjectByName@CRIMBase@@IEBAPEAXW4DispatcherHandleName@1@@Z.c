/*
 * XREFs of ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C00787CC
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0078780 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C00535B8 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherObjectByName(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(a1 + 808)) )
  {
    if ( *(_DWORD *)(a1 + 824) != 10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 384LL);
    return *(_QWORD *)(a1 + 856);
  }
  return v2;
}
