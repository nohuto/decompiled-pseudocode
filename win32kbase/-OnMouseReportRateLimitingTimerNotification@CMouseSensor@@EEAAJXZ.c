/*
 * XREFs of ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C0214D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C00F3B84 (-FlushMouseReports@CMouseSensor@@AEAAJXZ.c)
 *     ?MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z @ 0x1C0214CD0 (-MouseReportRateLimitingTimerFired@Mouse@InputTraceLogging@@SAXPEAUDEVICEINFO@@@Z.c)
 */

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
