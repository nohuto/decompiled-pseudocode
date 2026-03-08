/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1C00E33B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C0012C2C (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(__int64 a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 920) )
    {
      TraceLoggingProcessUsageOnTerminationEvent((struct tagPROCESSINFO *const)a1);
      *(_DWORD *)(a1 + 920) = 0;
    }
  }
}
