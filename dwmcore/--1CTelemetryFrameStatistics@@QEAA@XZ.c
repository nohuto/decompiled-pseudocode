void __fastcall CTelemetryFrameStatistics::~CTelemetryFrameStatistics(CTelemetryFrameStatistics *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, PerformanceCount.QuadPart);
}
