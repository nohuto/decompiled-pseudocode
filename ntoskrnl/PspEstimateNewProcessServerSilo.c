/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x14070D590
 * Callers:
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 EffectiveServerSilo; // rsi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  v6 = 0;
  if ( !a3 )
    return PdcCreateWatchdogAroundClientCall();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return PdcCreateWatchdogAroundClientCall();
  }
  return EffectiveServerSilo;
}
