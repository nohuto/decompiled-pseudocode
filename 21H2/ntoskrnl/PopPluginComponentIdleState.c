/*
 * XREFs of PopPluginComponentIdleState @ 0x1403A4984
 * Callers:
 *     PopFxProcessWork @ 0x140260844 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1403A66A0 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepNotifyIdleState @ 0x1403A49E0 (PopPepNotifyIdleState.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopFxBugCheck @ 0x1405693EC (PopFxBugCheck.c)
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
