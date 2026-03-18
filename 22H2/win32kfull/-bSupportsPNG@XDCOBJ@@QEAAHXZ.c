/*
 * XREFs of ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C027699C
 * Callers:
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0276A0C (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02DE438 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsPNG(XDCOBJ *this)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 32LL) == 1 )
    return 0LL;
  return result;
}
