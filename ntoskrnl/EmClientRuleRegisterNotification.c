/*
 * XREFs of EmClientRuleRegisterNotification @ 0x1409394D0
 * Callers:
 *     <none>
 * Callees:
 *     EmpClientRuleRegisterNotification @ 0x1409394F4 (EmpClientRuleRegisterNotification.c)
 */

__int64 __fastcall EmClientRuleRegisterNotification(void *a1)
{
  if ( a1 )
    return EmpClientRuleRegisterNotification(a1);
  else
    return 3221225485LL;
}
