/*
 * XREFs of RtlGetActiveConsoleId @ 0x140281DB0
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140281CF4 (PopGetConsoleDisplayRequestCount.c)
 *     PopPowerButtonWorkCallback @ 0x140578850 (PopPowerButtonWorkCallback.c)
 *     PoBlockConsoleSwitch @ 0x14067E978 (PoBlockConsoleSwitch.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PiCMQueryRemove @ 0x14072ED1C (PiCMQueryRemove.c)
 *     PopNotifyConsoleUserPresent @ 0x140773100 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x14078CF98 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 RtlGetActiveConsoleId()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 ThreadServerSilo; // rax
  _QWORD *v4; // rax

  if ( !(unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return MEMORY[0xFFFFF780000002D8];
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v1, v0)
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v4 = &PspHostSiloGlobals;
  }
  else
  {
    v4 = *(_QWORD **)(ThreadServerSilo + 1272);
  }
  return *(unsigned int *)(v4[141] + 4LL);
}
