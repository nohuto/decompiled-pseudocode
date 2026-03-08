/*
 * XREFs of ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C0279358
 * Callers:
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02E01D8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
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
