/*
 * XREFs of ?ToggleMMCSSForDT@@YAXXZ @ 0x1C00FD10C
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C00FD080 (_EnableSessionForMMCSS.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ToggleMMCSSForDT(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  KeSetEvent(Event, 1, 0);
}
