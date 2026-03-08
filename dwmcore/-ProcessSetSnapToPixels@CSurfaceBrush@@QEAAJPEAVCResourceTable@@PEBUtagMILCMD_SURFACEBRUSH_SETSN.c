/*
 * XREFs of ?ProcessSetSnapToPixels@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS@@@Z @ 0x18012F756
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSnapToPixels(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1C10)(
           (char *)this + SDWORD2(xmmword_1803E1C10),
           &CSurfaceBrush::sc_SnapToPixels,
           (char *)a3 + 8);
}
