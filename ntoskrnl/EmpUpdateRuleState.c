/*
 * XREFs of EmpUpdateRuleState @ 0x1402D6550
 * Callers:
 *     EmpUpdateRuleState @ 0x1402D6550 (EmpUpdateRuleState.c)
 *     EmpRuleUpdateWorkerThread @ 0x14039F530 (EmpRuleUpdateWorkerThread.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x1402D62A0 (EmpSearchTargetRuleList.c)
 *     EmpUpdateRuleState @ 0x1402D6550 (EmpUpdateRuleState.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14039DD9C (EmpEvaluateUpdateRuleEvalState.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall EmpUpdateRuleState(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned int v3; // r9d
  __int64 v4; // r8
  int v5; // ebp
  char v8; // di
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *k; // rdi
  _QWORD *v12; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 16);
  v8 = 1;
  if ( v3 )
  {
    while ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4) + 16LL) > 0 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        goto LABEL_2;
    }
LABEL_5:
    v8 = 0;
  }
  else
  {
LABEL_2:
    for ( i = *(_QWORD **)(a1 + 64); i; i = (_QWORD *)*i )
    {
      result = (_QWORD *)*(i - 1);
      if ( !result[2] )
        goto LABEL_5;
    }
    for ( j = *(_QWORD **)(a1 + 72); j; j = (_QWORD *)*j )
    {
      result = (_QWORD *)*(j - 1);
      if ( !*((_BYTE *)result + 20) )
        goto LABEL_5;
    }
  }
  if ( *(_BYTE *)(a1 + 20) != v8 )
  {
    v12 = *(_QWORD **)(a1 + 32);
    *(_BYTE *)(a1 + 20) = v8;
    while ( v12 )
    {
      result = (_QWORD *)EmpUpdateRuleState(*(v12 - 1), 0LL);
      v12 = (_QWORD *)*v12;
    }
  }
  *(_BYTE *)(a1 + 20) = v8;
  if ( v8 )
  {
    if ( v5 == 1 )
      *(_DWORD *)(a1 + 16) = 0;
    result = EmpSearchTargetRuleList(a1);
    if ( result && *(int *)result > 0 )
      result = (_QWORD *)EmpEvaluateUpdateRuleEvalState(result, a2);
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( *(_DWORD *)(a1 + 16) != v5 )
  {
    for ( k = *(_QWORD **)(a1 + 80); k != (_QWORD *)(a1 + 80); k = (_QWORD *)*k )
      result = (_QWORD *)((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))*(k - 2))(
                           *(unsigned int *)(a1 + 16),
                           a1,
                           *(k - 1));
  }
  return result;
}
