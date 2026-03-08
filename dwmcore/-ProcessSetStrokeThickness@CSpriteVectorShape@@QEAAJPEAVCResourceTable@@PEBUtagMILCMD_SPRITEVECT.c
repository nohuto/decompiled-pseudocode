/*
 * XREFs of ?ProcessSetStrokeThickness@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS@@@Z @ 0x18001FF00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeThickness(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1B68)(
           (char *)this + SDWORD2(xmmword_1803E1B68),
           &CSpriteVectorShape::sc_StrokeThickness,
           (char *)a3 + 8);
}
