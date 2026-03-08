/*
 * XREFs of ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C0279338
 * Callers:
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02E01D8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsJPEG(XDCOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 76) & 1) == 0 || *(_DWORD *)(v1 + 32) == 1 )
    return 0;
  return v2;
}
