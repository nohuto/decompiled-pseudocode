/*
 * XREFs of ?ProcessSetOffset@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETOFFSET@@@Z @ 0x1800F3378
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetOffset(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E12F0)(
           (char *)this + SDWORD2(xmmword_1803E12F0),
           &CColorGradientStop::sc_Offset,
           (char *)a3 + 8);
}
