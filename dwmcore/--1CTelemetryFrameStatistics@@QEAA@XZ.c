/*
 * XREFs of ??1CTelemetryFrameStatistics@@QEAA@XZ @ 0x1801EE9EC
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801CE680 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1801EEA94 (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 */

void __fastcall CTelemetryFrameStatistics::~CTelemetryFrameStatistics(CTelemetryFrameStatistics *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, PerformanceCount.QuadPart);
}
