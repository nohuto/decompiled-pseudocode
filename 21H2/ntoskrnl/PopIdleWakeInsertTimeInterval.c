/*
 * XREFs of PopIdleWakeInsertTimeInterval @ 0x14057B860
 * Callers:
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14057B9B4 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057C054 (PopIdleWakeStopActiveIntervalAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopIdleWakeInsertTimeInterval(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned __int64 *i; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v5 = 0LL;
    for ( i = a5; ; ++i )
    {
      if ( a1 >= *i )
      {
        result = (unsigned int)(v5 + 1);
        if ( a1 < a5[result] )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a2 )
        return result;
    }
    ++*(_DWORD *)(a3 + 4 * v5);
    if ( a4 )
      *(_QWORD *)(a4 + 8 * v5) += a1;
  }
  return result;
}
