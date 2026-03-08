/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x1406F870C
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406F8844 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(_QWORD **)(a1 + 1296); i; i = (_QWORD *)i[161] )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
