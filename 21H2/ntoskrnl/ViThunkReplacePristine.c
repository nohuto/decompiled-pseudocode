/*
 * XREFs of ViThunkReplacePristine @ 0x1409DA688
 * Callers:
 *     ViThunkRecoverPristines @ 0x1409DA194 (ViThunkRecoverPristines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkReplacePristine(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    while ( *a3 != a1[1] )
    {
      a1 = (_QWORD *)((char *)a1 + a2);
      if ( !*a1 )
        return result;
    }
    *a3 = a1[2];
    return 1LL;
  }
  return result;
}
