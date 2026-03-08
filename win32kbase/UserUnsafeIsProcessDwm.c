/*
 * XREFs of UserUnsafeIsProcessDwm @ 0x1C00AAB60
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserUnsafeIsProcessDwm(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
    return a1 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  return result;
}
