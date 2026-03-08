/*
 * XREFs of ?AppendDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@@Z @ 0x1801C0C9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::AppendDestinationRectangles(
        __int64 *a1,
        _QWORD *a2)
{
  return CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetOrAppendDestinationRectangles(a1, a2, 1);
}
