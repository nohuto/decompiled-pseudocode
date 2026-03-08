/*
 * XREFs of BmlCompareSingleWireFormatType @ 0x1C03B86BC
 * Callers:
 *     BmlCompareWireFormat @ 0x1C03B8AA0 (BmlCompareWireFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareSingleWireFormatType(char a1, char a2)
{
  int v2; // edx

  v2 = a2 & 0xC;
  if ( v2 == 0 && (a1 & 0xC) != 0 )
    return 1LL;
  else
    return (unsigned int)-((a1 & 0xC) == 0 && v2 != 0);
}
