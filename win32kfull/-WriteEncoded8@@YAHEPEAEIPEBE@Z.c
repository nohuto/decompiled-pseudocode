/*
 * XREFs of ?WriteEncoded8@@YAHEPEAEIPEBE@Z @ 0x1C02EF798
 * Callers:
 *     EncodeRLE8 @ 0x1C02F0CC0 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02F2C7C (EncodeRLE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WriteEncoded8(unsigned __int8 a1, unsigned __int8 *a2, unsigned __int8 a3, unsigned __int8 *a4)
{
  if ( !a2 )
    return 2LL;
  if ( a2 + 2 <= a4 )
  {
    *a2 = a3;
    a2[1] = a1;
    return 2LL;
  }
  return 0LL;
}
