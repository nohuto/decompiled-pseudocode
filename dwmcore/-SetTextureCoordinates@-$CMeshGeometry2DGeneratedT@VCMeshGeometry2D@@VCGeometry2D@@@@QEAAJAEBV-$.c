/*
 * XREFs of ?SetTextureCoordinates@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint2D@@$0?0@gsl@@@Z @ 0x1801C6D40
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetTextureCoordinates(
        _BYTE **a1,
        __int64 a2)
{
  return CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendTextureCoordinates(a1, a2, 0);
}
