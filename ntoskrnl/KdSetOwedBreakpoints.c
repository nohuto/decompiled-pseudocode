/*
 * XREFs of KdSetOwedBreakpoints @ 0x140565C30
 * Callers:
 *     KiPageFault @ 0x140426F00 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x140AB2B80 (KdpSetOwedBreakpoints.c)
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
