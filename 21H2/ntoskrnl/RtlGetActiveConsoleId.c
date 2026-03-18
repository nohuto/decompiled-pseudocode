/*
 * XREFs of RtlGetActiveConsoleId @ 0x1402DEB60
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     PopNotifyConsoleUserPresent @ 0x1407F2A20 (PopNotifyConsoleUserPresent.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 *     PfpProcessScenarioPhase @ 0x14081BB14 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

__int64 RtlGetActiveConsoleId()
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v2; // rax

  if ( !(unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v2 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v2 = &PspHostSiloGlobals;
  return *(unsigned int *)(v2[165] + 4LL);
}
