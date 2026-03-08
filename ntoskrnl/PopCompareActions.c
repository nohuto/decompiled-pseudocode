/*
 * XREFs of PopCompareActions @ 0x14098672C
 * Callers:
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopCompareActions(int a1, int a2)
{
  if ( a1 == 7 )
  {
    a1 = 2;
  }
  else if ( a1 >= 2 )
  {
    ++a1;
  }
  if ( a2 == 7 )
  {
    a2 = 2;
  }
  else if ( a2 >= 2 )
  {
    ++a2;
  }
  return (unsigned int)(a1 - a2);
}
