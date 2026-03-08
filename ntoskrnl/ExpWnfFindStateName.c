/*
 * XREFs of ExpWnfFindStateName @ 0x14071A3FC
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140718994 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14071A330 (ExpWnfLookupNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 56);
  while ( result )
  {
    if ( a2 < result[3] )
    {
      result = (_QWORD *)*result;
    }
    else
    {
      if ( a2 <= result[3] )
        break;
      result = (_QWORD *)result[1];
    }
  }
  if ( result )
    result -= 2;
  return result;
}
