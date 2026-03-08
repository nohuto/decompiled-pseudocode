/*
 * XREFs of PopAdaptiveCalculateInputRelativeTimeout @ 0x14099871C
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x14073C624 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveCalculateInputRelativeTimeout(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 result; // rax

  if ( a3 > a1 )
  {
    v4 = (a3 - a1) / 0x3E8;
    if ( v4 >= a2 )
      return 1LL;
    v3 = a2 - v4;
  }
  else
  {
    v3 = a2 + (a1 - a3) / 0x3E8;
  }
  result = 0xFFFFFFFFLL;
  if ( v3 < 0xFFFFFFFF )
    return v3;
  return result;
}
