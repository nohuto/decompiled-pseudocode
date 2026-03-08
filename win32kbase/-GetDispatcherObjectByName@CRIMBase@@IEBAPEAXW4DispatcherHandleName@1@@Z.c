/*
 * XREFs of ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C00B5D5C
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00B5D10 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C007B0DC (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherObjectByName(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( CRIMBase::SensorDispatcherObject::IsValid((CRIMBase::SensorDispatcherObject *)(a1 + 872)) )
  {
    if ( *(_DWORD *)(a1 + 888) != 11 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 390LL);
    return *(_QWORD *)(a1 + 920);
  }
  return v2;
}
