/*
 * XREFs of ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1C005BCA8
 * Callers:
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005849C (TransformMessageBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoesMsgNeedDPITransform(unsigned int a1, __int64 a2, int a3)
{
  if ( a1 > 0x243 )
  {
    if ( a1 > 0x2A1 )
      return a1 >= 0x2F2 && (a1 == 831 || a1 <= 0x2F4 || a1 == 787 || a1 - 833 <= 1);
    if ( a1 >= 0x2A0 )
      return 1;
    if ( a1 < 0x245 )
      return 0;
    if ( a1 <= 0x247 )
      return 1;
    if ( a1 <= 0x248 )
      return 0;
    if ( a1 <= 0x24A )
      return 1;
    if ( a1 <= 0x24D )
      return 0;
    if ( a1 <= 0x24F )
      return 1;
    if ( a1 <= 0x250 )
      return 0;
    if ( a1 <= 0x252 )
      return 1;
    return a1 == 643;
  }
  if ( a1 >= 0x241 )
    return 1;
  if ( a1 > 0xAD )
  {
    if ( a1 == 274 )
      return HIWORD(a3) != 0;
    if ( a1 <= 0x1FF )
      return 0;
    if ( a1 <= 0x20E || a1 == 528 )
      return 1;
    return a1 == 544;
  }
  return a1 >= 0xAB || a1 == 3 || a1 == 83 || a1 == 123 || a1 > 0x82 && (a1 <= 0x84 || a1 > 0x9F && a1 <= 0xA9);
}
