/*
 * XREFs of ViLookupThunkArray @ 0x1409C9B9C
 * Callers:
 *     VfGetHookAddressForOriginal @ 0x1409C9918 (VfGetHookAddressForOriginal.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall ViLookupThunkArray(unsigned __int8 **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  int v6; // r8d
  int v7; // edx
  unsigned __int8 *result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( !*a1 )
      break;
    v5 = a3 - (_QWORD)result;
    do
    {
      v6 = result[v5];
      v7 = *result - v6;
      if ( v7 )
        break;
      ++result;
    }
    while ( v6 );
    if ( !v7 )
      return a1[1];
    a1 = (unsigned __int8 **)((char *)a1 + a2);
  }
  return result;
}
