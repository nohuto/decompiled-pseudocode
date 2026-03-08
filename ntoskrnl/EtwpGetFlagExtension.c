/*
 * XREFs of EtwpGetFlagExtension @ 0x14074856C
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpCheckForStackTracingExtension @ 0x140748504 (EtwpCheckForStackTracingExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14080D834 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140858980 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E4B6C (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall EtwpGetFlagExtension(__int64 a1, __int16 a2)
{
  int v2; // eax
  unsigned __int16 v3; // r8
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 < 0 )
  {
    v5 = a1 + (unsigned __int16)v2;
    v6 = (unsigned __int16 *)(v5 + 4);
    while ( v3 < *(_WORD *)(v5 + 2) )
    {
      if ( v6[1] == a2 )
        return v6;
      ++v3;
      v6 += 2 * *v6;
    }
  }
  return 0LL;
}
