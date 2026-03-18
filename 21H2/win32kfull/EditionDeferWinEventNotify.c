/*
 * XREFs of EditionDeferWinEventNotify @ 0x1C0109000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeferWinEventNotify()
{
  __int64 result; // rax

  result = gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  return result;
}
