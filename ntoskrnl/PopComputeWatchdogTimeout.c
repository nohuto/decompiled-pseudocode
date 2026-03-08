/*
 * XREFs of PopComputeWatchdogTimeout @ 0x1402BB3D0
 * Callers:
 *     PoQueryWatchdogTime @ 0x140290430 (PoQueryWatchdogTime.c)
 *     PopEnableIrpWatchdog @ 0x1402BB290 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402BB8E4 (PopDiagTraceIrpFinishTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
