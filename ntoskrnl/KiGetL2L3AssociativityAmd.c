/*
 * XREFs of KiGetL2L3AssociativityAmd @ 0x140A9C814
 * Callers:
 *     KiSetCacheInformationAmd @ 0x140A9C858 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetL2L3AssociativityAmd(char a1)
{
  char result; // al

  switch ( a1 )
  {
    case 0:
      return 0;
    case 2:
      return 2;
    case 4:
      return 4;
    case 6:
      return 8;
    case 8:
      return 16;
  }
  result = -1;
  if ( a1 != 15 )
    return 1;
  return result;
}
