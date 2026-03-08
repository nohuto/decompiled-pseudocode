/*
 * XREFs of PopPluginComponentIdleState @ 0x1402EFA90
 * Callers:
 *     PoFxCompleteIdleState @ 0x1402EF9F0 (PoFxCompleteIdleState.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 * Callees:
 *     PopPepNotifyIdleState @ 0x1402EFAF0 (PopPepNotifyIdleState.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
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
