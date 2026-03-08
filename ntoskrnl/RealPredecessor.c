/*
 * XREFs of RealPredecessor @ 0x1402F4B58
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403CF4E0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1405AC130 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlGetElementGenericTableAvl @ 0x1405AC190 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[1] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[2] == v3 )
    {
      if ( (_QWORD *)*a1 != a1 )
        return a1;
      return (_QWORD *)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
