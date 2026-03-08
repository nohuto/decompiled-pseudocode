/*
 * XREFs of ?ProcessSetOffset@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETOFFSET@@@Z @ 0x1802520C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetOffset(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803E1C80)(
           (char *)this + SDWORD2(xmmword_1803E1C80),
           &CViewBox::sc_Offset,
           (char *)a3 + 8);
}
