/*
 * XREFs of CmpGetSectionLineIndexValueCount @ 0x140B4DB74
 * Callers:
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140B4E7A0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140B4E7D0 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetSectionLineIndexValueCount(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v4 = 0;
  v5 = CmpSearchSectionByName();
  if ( v5 )
  {
    v6 = CmpSearchLineInSectionByIndex(v5, a3);
    if ( v6 )
    {
      v7 = *(_QWORD **)(v6 + 16);
      while ( v7 )
      {
        v7 = (_QWORD *)*v7;
        ++v4;
      }
    }
  }
  return v4;
}
