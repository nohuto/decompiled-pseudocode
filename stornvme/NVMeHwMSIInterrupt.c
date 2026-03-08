/*
 * XREFs of NVMeHwMSIInterrupt @ 0x1C0002E30
 * Callers:
 *     <none>
 * Callees:
 *     RequestPendingCompletion @ 0x1C0002EA0 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0002F50 (ProcessCompletionQueues.c)
 */

__int64 __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // si

  if ( *(_WORD *)(a1 + 280) == 1 )
    a2 = -1;
  result = RequestPendingCompletion(a1, a2);
  v5 = result;
  if ( (_BYTE)result )
  {
    ProcessCompletionQueues(a1, a2, 0LL);
    return v5;
  }
  else
  {
    ++*(_QWORD *)(a1 + 4064);
  }
  return result;
}
