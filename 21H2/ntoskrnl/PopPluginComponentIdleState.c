/*
 * XREFs of PopPluginComponentIdleState @ 0x1403A4AD4
 * Callers:
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1403A67F0 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPepNotifyIdleState @ 0x1403A4B30 (PopPepNotifyIdleState.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
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
