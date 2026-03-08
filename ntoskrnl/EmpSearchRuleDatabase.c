/*
 * XREFs of EmpSearchRuleDatabase @ 0x1402D62C8
 * Callers:
 *     EmpClientRuleRegisterNotification @ 0x1409394F4 (EmpClientRuleRegisterNotification.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140A85280 (EmClientRuleEvaluate.c)
 *     EmpParseRuleTerm @ 0x140B4D578 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
