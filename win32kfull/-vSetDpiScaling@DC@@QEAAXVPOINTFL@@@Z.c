/*
 * XREFs of ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C014CFA4
 * Callers:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreHintDCWnd @ 0x1C0097030 (GreHintDCWnd.c)
 *     GreSelectRedirectionBitmap @ 0x1C0097150 (GreSelectRedirectionBitmap.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C014CFF2 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::vSetDpiScaling(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 520) |= 5u;
  *(_DWORD *)(a1 + 36) |= 0x10u;
  *(_QWORD *)(a1 + 524) = a2;
  DC::vUpdateCachedDPIScaleValue((DC *)a1);
  result = DC::bDpiScaledSurface((DC *)a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 496);
    *(_QWORD *)(a1 + 532) = *(_QWORD *)(result + 668);
  }
  return result;
}
