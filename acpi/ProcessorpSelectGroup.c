_QWORD *__fastcall ProcessorpSelectGroup(char a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rcx

  if ( !*(_BYTE *)a3 )
  {
    if ( a1 )
    {
      v7 = ProcessorGroupListHead;
      if ( (__int64 *)ProcessorGroupListHead == &ProcessorGroupListHead )
        goto LABEL_18;
      do
      {
        result = (_QWORD *)v7;
        if ( !a2 )
          goto LABEL_12;
        if ( *(_BYTE *)(v7 + 40) )
          break;
        v7 = *(_QWORD *)v7;
      }
      while ( (__int64 *)v7 != &ProcessorGroupListHead );
      if ( (__int64 *)v7 == &ProcessorGroupListHead )
        goto LABEL_18;
LABEL_12:
      v8 = *result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        goto LABEL_18;
      v9 = (_QWORD *)result[1];
      if ( (_QWORD *)*v9 != result )
        goto LABEL_18;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    else
    {
      result = *(_QWORD **)ProcessorGroupByNumber;
      v5 = **(_QWORD **)ProcessorGroupByNumber;
      if ( *(_QWORD *)(v5 + 8) != *(_QWORD *)ProcessorGroupByNumber )
        goto LABEL_18;
      v6 = (_QWORD *)result[1];
      if ( (_QWORD *)*v6 != result )
        goto LABEL_18;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    v10 = (_QWORD *)qword_1C006E5F8;
    if ( *(__int64 **)qword_1C006E5F8 == &ProcessorGroupListHead )
    {
      *result = &ProcessorGroupListHead;
      result[1] = v10;
      *v10 = result;
      qword_1C006E5F8 = (__int64)result;
      goto LABEL_17;
    }
LABEL_18:
    __fastfail(3u);
  }
  result = *(_QWORD **)(a3 + 24);
LABEL_17:
  *a4 = result;
  return result;
}
