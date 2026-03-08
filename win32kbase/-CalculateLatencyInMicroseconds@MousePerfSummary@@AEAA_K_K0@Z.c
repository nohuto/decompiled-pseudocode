/*
 * XREFs of ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C007BBF4
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C007B958 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C007BAEC (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MousePerfSummary::CalculateLatencyInMicroseconds(
        MousePerfSummary *this,
        __int64 a2,
        __int64 a3)
{
  if ( a3 && a2 )
    return (unsigned __int64)(1000000 * (a3 - a2)) / gliQpcFreq.QuadPart;
  else
    return 0LL;
}
