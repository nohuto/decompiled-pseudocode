/*
 * XREFs of HalpTimerFindBestAlwaysOnTimer @ 0x140377A10
 * Callers:
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpFindTimer @ 0x140377CA8 (HalpFindTimer.c)
 */

__int64 __fastcall HalpTimerFindBestAlwaysOnTimer(char a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = HalpFindTimer(0, 32770, 24576, 0, 0);
    if ( !result )
      return HalpFindTimer(0, 32770, 28416, 0, 1);
  }
  else
  {
    result = HalpFindTimer(0, 32800, 24576, 3840, 0);
    if ( !result )
    {
      result = HalpFindTimer(0, 32832, 24576, 3840, 0);
      if ( !result )
        return HalpFindTimer(0, 32784, 24576, 3840, 0);
    }
  }
  return result;
}
