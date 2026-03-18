/*
 * XREFs of PopPluginComponentIdleState @ 0x14035BE10
 * Callers:
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x14035BD70 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepNotifyIdleState @ 0x14035BE70 (PopPepNotifyIdleState.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginComponentIdleState(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 result; // rax

  if ( a4 )
    memset(a4, 0, 0x40uLL);
  result = PopPepNotifyIdleState(*(_QWORD *)(a1 + 56), a2, a3, a4);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
