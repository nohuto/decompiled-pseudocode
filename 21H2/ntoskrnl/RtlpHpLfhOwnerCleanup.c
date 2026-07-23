/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x140389DB0
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x140389D20 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x14022F8C8 (RtlpHpLfhSubsegmentFree.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCleanup(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  _QWORD ***v5; // rcx
  _QWORD *result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // r8
  _QWORD **v14; // rcx

  v4 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 1) + 128);
  v5 = (_QWORD ***)(a2 + 40);
  result = *(_QWORD **)(a2 + 40);
  if ( result != (_QWORD *)(a2 + 40) )
  {
    if ( (_QWORD ***)result[1] != v5
      || (v11 = *(_QWORD **)(a2 + 48), (_QWORD ***)*v11 != v5)
      || (*v11 = result,
          result[1] = v11,
          v12 = a2 + 24,
          v13 = *(_QWORD **)(a2 + 32),
          *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != a2 + 24)
      || *v13 != v12
      || (v14 = *v5, (_QWORD **)(*v14)[1] != v14)
      || (_QWORD **)*v14[1] != v14 )
    {
LABEL_9:
      __fastfail(3u);
    }
    *v13 = v14;
    *(_QWORD *)(a2 + 32) = v14[1];
    result = v14[1];
    *result = v12;
    v14[1] = v13;
  }
  v7 = (__int64 *)(a2 + 24);
  while ( 1 )
  {
    v8 = *v7;
    if ( (__int64 *)*v7 == v7 )
      return result;
    if ( *(__int64 **)(v8 + 8) != v7 )
      goto LABEL_9;
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_9;
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( *(_WORD *)(v8 + 32) )
      --*(_QWORD *)(a2 + 8);
    *(_WORD *)(v8 + 32) = *(_WORD *)(v8 + 34);
    v10 = *(unsigned __int16 *)(v8 + 46);
    *(_BYTE *)(v8 + 38) = 2;
    *(_WORD *)(v10 + v8) = 1;
    result = (_QWORD *)RtlpHpLfhSubsegmentFree(a1, v8, v4, 0);
  }
}
