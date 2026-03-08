/*
 * XREFs of ?AppendVertexPositions@?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@QEAAJAEBV?$span@$$CBUMilPoint3F@@$0?0@gsl@@@Z @ 0x1801C0D48
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::AppendVertexPositions(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::SetOrAppendVertexPositions(a1, a2, a3);
}
