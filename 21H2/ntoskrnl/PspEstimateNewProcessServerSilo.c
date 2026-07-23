/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x14069CDF8
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
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
    return HalSystemVectorDispatchEntry();
  v8 = 0LL;
  while ( 1 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * v8));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
    v8 = ++v6;
    if ( v6 >= a3 )
      return HalSystemVectorDispatchEntry();
  }
  return EffectiveServerSilo;
}
