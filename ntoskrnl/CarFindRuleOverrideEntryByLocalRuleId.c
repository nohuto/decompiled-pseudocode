/*
 * XREFs of CarFindRuleOverrideEntryByLocalRuleId @ 0x1405D18C0
 * Callers:
 *     CarDeregisterRuleOverride @ 0x1405D1800 (CarDeregisterRuleOverride.c)
 *     CarSetCustomIdInRuleOverride @ 0x1405D21F0 (CarSetCustomIdInRuleOverride.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CarFindRuleOverrideEntryByLocalRuleId(_QWORD **a1, int a2)
{
  _QWORD *i; // rax

  for ( i = *a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 0LL;
    if ( *((_DWORD *)i - 16) == a2 )
      break;
  }
  return i - 8;
}
