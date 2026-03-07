__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(_QWORD **)(a1 + 1296); i; i = (_QWORD *)i[161] )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
