/*
 * XREFs of ?ProcessSetTrimStart@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMSTART@@@Z @ 0x18020ED84
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimStart(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMSTART *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E13C0)(
           (char *)this + SDWORD2(xmmword_1803E13C0),
           &CGeometry::sc_TrimStart,
           (char *)a3 + 8);
}
