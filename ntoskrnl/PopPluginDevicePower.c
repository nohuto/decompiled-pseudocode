/*
 * XREFs of PopPluginDevicePower @ 0x140306D00
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140304EE0 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginDevicePower(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
      PopPepUpdateConstraints(v3, 4, 1);
  }
  else
  {
    v5 = 4;
  }
  result = PopPepProcessEvent(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !a3 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
