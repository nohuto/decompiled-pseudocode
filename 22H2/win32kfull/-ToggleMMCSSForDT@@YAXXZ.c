/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C010B93C
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C010B8B0 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 48LL);
  KeSetEvent(qword_1C0339F08, 1, 0);
}
