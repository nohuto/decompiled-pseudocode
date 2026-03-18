/*
 * XREFs of ApiSetEditionKeyboardInputDelegationChanged @ 0x1C00D56B4
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C01E8E9C (SetInputDelegationModeImpl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionKeyboardInputDelegationChanged(unsigned int a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296830;
  if ( qword_1C0296830 )
  {
    result = (__int64 (*)(void))qword_1C0296830();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296838;
      if ( qword_1C0296838 )
        return (__int64 (*)(void))qword_1C0296838(a1, a2);
    }
  }
  return result;
}
