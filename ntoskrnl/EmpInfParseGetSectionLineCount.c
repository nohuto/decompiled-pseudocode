/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140B4E09C
 * Callers:
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B4DEC4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B4E7A0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B4E7D0 (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
