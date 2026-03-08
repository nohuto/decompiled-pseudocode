/*
 * XREFs of AuthzBasepCompareUnsigned @ 0x14066D170
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x14066CC80 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14066CF0C (AuthzBasepCompareIntegerOperands.c)
 * Callees:
 *     <none>
 */

bool __fastcall AuthzBasepCompareUnsigned(unsigned __int8 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool result; // al

  switch ( a1 )
  {
    case 0x80u:
      return a2 == a3;
    case 0x81u:
      return a2 != a3;
    case 0x82u:
      return a2 < a3;
    case 0x83u:
      return a2 <= a3;
    case 0x84u:
      return a2 > a3;
  }
  result = 0;
  if ( a1 == 133 )
    return a2 >= a3;
  return result;
}
