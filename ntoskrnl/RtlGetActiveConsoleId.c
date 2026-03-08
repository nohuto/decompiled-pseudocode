/*
 * XREFs of RtlGetActiveConsoleId @ 0x1402B8940
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     PoBlockConsoleSwitch @ 0x14067F698 (PoBlockConsoleSwitch.c)
 *     PfpProcessScenarioPhase @ 0x14073A2C8 (PfpProcessScenarioPhase.c)
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 */

__int64 __fastcall RtlGetActiveConsoleId(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *v4; // rax

  if ( !PsIsCurrentThreadInServerSilo(a1, a2) )
    return MEMORY[0xFFFFF780000002D8];
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v4 = *(_QWORD **)(CurrentServerSilo + 1488);
  else
    v4 = &PspHostSiloGlobals;
  return *(unsigned int *)(v4[165] + 4LL);
}
