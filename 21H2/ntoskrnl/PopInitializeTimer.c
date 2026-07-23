/*
 * XREFs of PopInitializeTimer @ 0x1407C8A2C
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x1403C9F10 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopThermalInit @ 0x140A6DC60 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A6DCFC (PpmPerfInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A944CC (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A94554 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, 8LL);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
