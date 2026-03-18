/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1C003A680
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserUnsafeIsProcessDwm(PVOID a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
    return a1 == g_pepDwm;
  return result;
}
