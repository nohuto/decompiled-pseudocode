/*
 * XREFs of ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x1800F2264
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetLeftInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E0050)(
           (char *)this + SDWORD2(xmmword_1803E0050),
           &CRectangleGeometry::sc_Left,
           (char *)a3 + 8);
}
