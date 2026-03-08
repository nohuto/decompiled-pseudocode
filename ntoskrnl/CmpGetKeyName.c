/*
 * XREFs of CmpGetKeyName @ 0x140B4E760
 * Callers:
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B4E6B8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B4E7A0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B4E7D0 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
