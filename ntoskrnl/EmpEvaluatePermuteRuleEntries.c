/*
 * XREFs of EmpEvaluatePermuteRuleEntries @ 0x14039DE48
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x14039DD9C (EmpEvaluateUpdateRuleEvalState.c)
 *     EmpEvaluatePermuteRuleEntries @ 0x14039DE48 (EmpEvaluatePermuteRuleEntries.c)
 * Callees:
 *     EmpEvaluatePermuteRuleEntries @ 0x14039DE48 (EmpEvaluatePermuteRuleEntries.c)
 */

char __fastcall EmpEvaluatePermuteRuleEntries(__int64 a1, int a2, __int64 a3, char a4)
{
  char v4; // bl
  unsigned int i; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // al
  _QWORD *v12; // rax

  v4 = 0;
  if ( !a2 )
    return 1;
  if ( !a4 )
  {
    v9 = (unsigned int)(a2 - 1);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * (unsigned int)v9);
    if ( (_DWORD)v9 )
      v11 = EmpEvaluatePermuteRuleEntries(a1, v9, a3, 0LL);
    else
      v11 = 1;
    if ( v10 == a3 )
    {
      if ( !v11 )
        return v4;
    }
    else
    {
      if ( !v11 )
        return v4;
      v12 = *(_QWORD **)(v10 + 32);
      if ( *v12 != v10 + 40 )
      {
        *(_QWORD *)(v10 + 32) = *v12;
        return v4;
      }
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(v10 + 40);
    }
    return 1;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * i);
    if ( v8 != a3 )
      *(_QWORD *)(v8 + 32) = *(_QWORD *)(v8 + 40);
  }
  return v4;
}
