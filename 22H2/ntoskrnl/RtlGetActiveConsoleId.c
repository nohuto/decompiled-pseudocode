/*
 * XREFs of RtlGetActiveConsoleId @ 0x14034ADC0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x14034AD04 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140578790 (PopPowerButtonWorkCallback.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x140725A44 (PoBlockConsoleSwitch.c)
 *     PiCMQueryRemove @ 0x14072F1D0 (PiCMQueryRemove.c)
 *     PopNotifyConsoleUserPresent @ 0x140772DC0 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x14078CE98 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 ThreadServerSilo; // rax
  _QWORD *v6; // rax

  if ( !PsIsCurrentThreadInServerSilo(v1, v0) )
    return MEMORY[0xFFFFF780000002D8];
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v3, v2)
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v6 = &PspHostSiloGlobals;
  }
  else
  {
    v6 = *(_QWORD **)(ThreadServerSilo + 1272);
  }
  return *(_DWORD *)(v6[141] + 4LL);
}
