/*
 * XREFs of GrayCopyDIB_CXGray @ 0x1C014C790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GrayCopyDIB_CXGray(__int64 a1, unsigned __int8 *a2, _WORD *a3, _WORD *a4, int a5)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( a2 )
  {
    do
    {
      v5 = *a2++;
      result = GrayIdxWORD[v5];
      *a3 = result;
      a3 = (_WORD *)((char *)a3 + a5);
    }
    while ( a3 != a4 );
  }
  return result;
}
