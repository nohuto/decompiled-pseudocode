/*
 * XREFs of CmpGetSectionLineIndex @ 0x140B4E640
 * Callers:
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRuleExpression @ 0x140B4D6DC (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B4DEC4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B4E6B8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B4E7A0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B4E7D0 (CmpSearchSectionByName.c)
 *     CmpProcessForSimpleStringSub @ 0x140B4E874 (CmpProcessForSimpleStringSub.c)
 */

__int64 __fastcall CmpGetSectionLineIndex(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx

  v7 = CmpSearchSectionByName(a1, a2);
  if ( v7 )
  {
    v8 = CmpSearchLineInSectionByIndex(v7, a3);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = 0;
      if ( a4 )
      {
        while ( v9 )
        {
          v9 = (_QWORD *)*v9;
          if ( ++v10 >= a4 )
            goto LABEL_4;
        }
      }
      else
      {
LABEL_4:
        if ( v9 )
          return CmpProcessForSimpleStringSub(a1, v9[1]);
      }
    }
  }
  return 0LL;
}
