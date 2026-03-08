/*
 * XREFs of ?AppendSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@@Z @ 0x1801C0CF8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::AppendSourceRectangles(
        __int64 *a1,
        _QWORD *a2)
{
  return CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetOrAppendSourceRectangles(a1, a2, 1);
}
