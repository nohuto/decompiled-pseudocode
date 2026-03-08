/*
 * XREFs of GrayCopyDIB_CX @ 0x1C0263D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall GrayCopyDIB_CX(__int64 a1, char *a2, _BYTE *a3, _BYTE *a4, int a5)
{
  char result; // al

  if ( a2 )
  {
    do
    {
      result = *a2++;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
