/*
 * XREFs of EmpSearchTargetRuleList @ 0x1402D62A0
 * Callers:
 *     EmpUpdateRuleState @ 0x1402D6550 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x1409394F4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A85280 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
