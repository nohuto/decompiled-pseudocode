__int64 __fastcall CMouseSensor::OnMouseReportRateLimitingTimerNotification(struct DEVICEINFO **this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    &v3,
    "OnMouseReportRateLimitingTimerNotification",
    0LL);
  CMouseSensor::FlushMouseReports((CMouseSensor *)this);
  InputTraceLogging::Mouse::MouseReportRateLimitingTimerFired(this[228]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
