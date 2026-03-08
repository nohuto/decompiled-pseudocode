/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x1405B48C8
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1405B4838 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x1402EB198 (RtlpHpLfhSubsegmentFree.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD ***v5; // rcx
  _QWORD *result; // rax
  __int64 *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  _QWORD **v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 1) + 128);
  v5 = (_QWORD ***)(a2 + 40);
  result = *(_QWORD **)(a2 + 40);
  if ( result == (_QWORD *)(a2 + 40) )
  {
    v7 = (__int64 *)(a2 + 24);
    goto LABEL_10;
  }
  if ( (_QWORD ***)result[1] != v5
    || (v8 = *(_QWORD **)(a2 + 48), (_QWORD ***)*v8 != v5)
    || (*v8 = result,
        v7 = (__int64 *)(a2 + 24),
        result[1] = v8,
        v9 = *(_QWORD **)(a2 + 32),
        *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != a2 + 24)
    || (__int64 *)*v9 != v7
    || (v10 = *v5, (_QWORD **)(*v10)[1] != v10)
    || (_QWORD **)*v10[1] != v10 )
  {
LABEL_16:
    __fastfail(3u);
  }
  *v9 = v10;
  *(_QWORD *)(a2 + 32) = v10[1];
  result = v10[1];
  *result = v7;
  v10[1] = v9;
LABEL_10:
  while ( 1 )
  {
    v11 = *v7;
    if ( (__int64 *)*v7 == v7 )
      return result;
    if ( *(__int64 **)(v11 + 8) != v7 )
      goto LABEL_16;
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_16;
    *v7 = v12;
    *(_QWORD *)(v12 + 8) = v7;
    if ( *(_WORD *)(v11 + 32) )
      --*(_QWORD *)(a2 + 8);
    *(_WORD *)(v11 + 32) = *(_WORD *)(v11 + 34);
    v13 = *(unsigned __int16 *)(v11 + 46);
    *(_BYTE *)(v11 + 38) = 2;
    *(_WORD *)(v13 + v11) = 1;
    result = (_QWORD *)RtlpHpLfhSubsegmentFree(a1, v11, v4, 0);
  }
}
