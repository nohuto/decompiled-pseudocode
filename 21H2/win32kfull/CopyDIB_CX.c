/*
 * XREFs of CopyDIB_CX @ 0x1C012DC70
 * Callers:
 *     RepDIB_CY @ 0x1C0139D20 (RepDIB_CY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDIB_CX(__int64 a1, __int16 *a2, __int64 a3, __int64 a4, int a5)
{
  __int16 v5; // ax
  __int64 result; // rax

  if ( a2 )
  {
    do
    {
      v5 = *a2;
      a2 = (__int16 *)((char *)a2 + 3);
      *(_WORD *)a3 = v5;
      result = *((unsigned __int8 *)a2 - 1);
      *(_BYTE *)(a3 + 2) = result;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
