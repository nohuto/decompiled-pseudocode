/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C00597D0
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0057600 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0059210 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     GreSetDCOrg @ 0x1C005ACD0 (GreSetDCOrg.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C017F9D4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
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
