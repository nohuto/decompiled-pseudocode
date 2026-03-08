/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C01BF9C8
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C01E4830 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 47);
  KeSetEvent(qword_1C0361180, 1, 0);
}
