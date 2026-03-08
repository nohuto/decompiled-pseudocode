/*
 * XREFs of ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x1801C65B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetRectangles(CRegionGeometry *a1, _QWORD *a2)
{
  return CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(a1, a2, 0);
}
