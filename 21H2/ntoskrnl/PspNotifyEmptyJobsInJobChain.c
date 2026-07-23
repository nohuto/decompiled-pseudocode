/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x1406F4684
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(_QWORD **)(a1 + 1296); i; i = (_QWORD *)i[134] )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
