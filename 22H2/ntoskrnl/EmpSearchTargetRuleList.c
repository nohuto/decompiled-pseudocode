/*
 * XREFs of EmpSearchTargetRuleList @ 0x14034ABAC
 * Callers:
 *     EmpUpdateRuleState @ 0x14034ABD4 (EmpUpdateRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x140889E44 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x1409900E0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140990340 (EmClientRuleEvaluate.c)
 *     EmpParseTargetRules @ 0x140A46ADC (EmpParseTargetRules.c)
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
