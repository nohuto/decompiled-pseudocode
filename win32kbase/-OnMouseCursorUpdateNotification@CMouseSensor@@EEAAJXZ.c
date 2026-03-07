__int64 __fastcall CMouseSensor::OnMouseCursorUpdateNotification(CMouseProcessor **this)
{
  CMouseProcessor *v2; // rcx
  __int64 *v4; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnMouseCursorUpdateNotification", 0LL);
  if ( !CBaseInput::ExecutingOnSensorHostingThread((CBaseInput *)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 160LL);
  v2 = this[234];
  if ( v2 )
    CMouseProcessor::ExecuteMoveMouseWindowManagement(v2);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return 0LL;
}
