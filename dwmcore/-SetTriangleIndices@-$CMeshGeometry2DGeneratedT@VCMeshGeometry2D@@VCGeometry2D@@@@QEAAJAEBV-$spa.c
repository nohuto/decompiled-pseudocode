/*
 * XREFs of ?SetTriangleIndices@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x1801C70D8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetTriangleIndices(_BYTE **a1, __int64 a2)
{
  return CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTriangleIndices(a1, a2, 0);
}
