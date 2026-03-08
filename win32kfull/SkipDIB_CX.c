/*
 * XREFs of SkipDIB_CX @ 0x1C0267470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall SkipDIB_CX(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int16 *v5; // r10
  __int64 v6; // rcx
  char result; // al

  if ( a2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 88);
    do
    {
      v6 = *v5++;
      a2 += v6 + 2 * v6;
      *(_WORD *)a3 = *(_WORD *)(a2 - 3);
      result = *(_BYTE *)(a2 - 1);
      *(_BYTE *)(a3 + 2) = result;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
