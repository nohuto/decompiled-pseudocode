/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0031718
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0031740 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreSetDCOrg @ 0x1C0092E00 (GreSetDCOrg.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0169B88 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
