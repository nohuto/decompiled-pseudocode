/*
 * XREFs of RealSuccessor @ 0x1402457FC
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1402456F0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402EF180 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1405AC190 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealSuccessor(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rcx

  result = (_QWORD *)a1[2];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[1]; i; i = (_QWORD *)i[1] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[2] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[1] == v3 )
      return a1;
    return (_QWORD *)v2;
  }
  return result;
}
