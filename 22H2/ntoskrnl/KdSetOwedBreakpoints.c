/*
 * XREFs of KdSetOwedBreakpoints @ 0x1405680D0
 * Callers:
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140AB6B70 (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}
