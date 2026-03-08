/*
 * XREFs of ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z @ 0x1800F2298
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetTopInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0088)(
           (char *)this + SDWORD2(xmmword_1803E0088),
           &CRectangleGeometry::sc_Top,
           (char *)a3 + 8);
}
