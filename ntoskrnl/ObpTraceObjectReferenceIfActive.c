/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x14033BB14
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
