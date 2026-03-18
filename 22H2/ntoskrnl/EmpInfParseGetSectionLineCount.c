/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140B5635C
 * Callers:
 *     EmpParseEntryTypes @ 0x140B55494 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B5560C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B55E80 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B56184 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B563B0 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B56A60 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B56A90 (CmpSearchSectionByName.c)
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
