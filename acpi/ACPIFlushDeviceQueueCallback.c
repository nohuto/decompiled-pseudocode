/*
 * XREFs of ACPIFlushDeviceQueueCallback @ 0x1C0014500
 * Callers:
 *     <none>
 * Callees:
 *     ACPIFlushQueuesUnload @ 0x1C0014558 (ACPIFlushQueuesUnload.c)
 *     AMLIRestartContext @ 0x1C0048D0C (AMLIRestartContext.c)
 */

__int64 __fastcall ACPIFlushDeviceQueueCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
    return AMLIRestartContext(a2);
  result = ACPIFlushQueuesUnload(a1, a2, 2LL);
  if ( (_DWORD)result != 259 )
    return AMLIRestartContext(a2);
  return result;
}
